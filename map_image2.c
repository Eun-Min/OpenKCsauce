#include<stdio.h>
#include<stdlib.h> //system("cls")¸¦ ¾²±â À§ÇÑ Çì´õÆÄÀÏ
#include<conio.h> //getch()¸¦ ¾²±â À§ÇÑ Çì´õ ÆÄÀÏ
#include<string.h> //strcpy¸¦ ¾²±â À§ÇÑ Çì´õ ÆÄÀÏ
#include<process.h> //exit¸¦ ¾²±â À§ÇÑ Çì´õ ÆÄÀÏ
#include<time.h>

//name°ú ¸î°¡Áö Àü¿ª º¯¼ö·Î ¼³Á¤ÇÑ´Ù//
static char name[7];
static int select,mainroop=1,type,gold=2000,year=1,tpart=1,tp=3;

struct MAP //Áö¿ª Á¤º¸ ±¸Á¶Ã¼ º¯¼ö
{
	char mapname[10];
	int civil;
	int mind;
	int army;
	int power;
	int own;
	int tax;
};

struct MAP m[9]; //Àü¿ª º¯¼ö·Î Áö¿ªÁ¤º¸±¸Á¶Ã¼º¯¼ö ¼±¾ð

void delay(clock_t sleep);//µô·¹ÀÌ ÇÔ¼ö


int intro (void); // ÀÎÆ®·Î ¸Þ´º

int charmake (void); //Ä³¸¯ÅÍ »ý¼º ÇÔ¼ö

int inmilli (void); // ±º»çÇÔ¼ö (ÀüÀï,Â¡º´,ÈÆ·Ã)
int war (void); //ÀüÀïÇÔ¼ö
int wartarget (void); //ÀüÀï°ü·Ã ÇÔ¼ö(¿Ü±³¿¡¼­µµ ¾²ÀÓ)
int jing (void); //Â¡º´ÇÔ¼ö
int excer (void); //ÈÆ·ÃÇÔ¼ö

int ininjob (void); // ³»Á¤ÇÔ¼ö(º¹Áö,°³¹ß)
int bokji (void); //º¹ÁöÇÔ¼ö
int gaibal (void); //°³¹ßÇÔ¼ö

int inoutt (void); // ¿Ü±³ÇÔ¼ö (±º»çÈ¥¶õ)
int armyfuse (void); //±º»çÈ¥¶õÇÔ¼ö

int insystem (void); // ½Ã½ºÅÛÀÎÅÍÆäÀÌ½º ÇÔ¼ö
int savegame (void);//¼¼ÀÌºê ÇÔ¼ö
int loadgame (void);//·Îµå ÇÔ¼ö

int inter (void); // °ÔÀÓ³» ÀÎÅÍÆäÀÌ½º ÇÔ¼ö
int chogi(void); //Áö¿ª Á¤º¸ ÇÔ¼ö ÃÊ±âÈ­ ÇÔ¼ö

int infomation (void);// Á¤º¸ÇÔ¼ö
int mainmap (void); //¸Ê°ú »ç¿ëÀÚ Á¤º¸¸¦ º¸¿©ÁØ´Ù

int turnout (void); //ÅÏ Á¾·á (½Ã°£ °æ°ú)
int mapguide (void); //ÀÚ½ÅÀÇ Áö¿ªÀ» ¼±ÅÃÇÒ ¼ö ÀÖ°Ô ÇØÁØ´Ù



// main ÇÔ¼ö
int main(void)
{
	//°ÔÀÓ ½ÃÀÛ½Ã ¸Þ´º ÇÔ¼ö È£Ãâ//
	intro();
	
	//Ä³¸¯ÅÍ »ý¼ºÇÔ¼ö¸¦ ºÒ·¯µéÀÎ´Ù//
	charmake();
	
	//µ¥ÀÌÅÍ ÃÊ±âÈ­ ÇÔ¼ö
	chogi();

	//ÀÎÅÍÆäÀÌ½º ÇÔ¼ö È£Ãâ//
	inter();

	return 0;
}


int intro (void)
{
	while(mainroop==1)
		{
			system("cls");
			printf("\n\n");
			printf("                    ¦®¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¯\n");
			printf("                    ¦­            Àü·« »ï±¹Áö           ¦­\n");
			printf("                    ¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦°\n\n\n");
			printf("               ¦®¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¯\n");
			printf("               ¦­ [1]°ÔÀÓ½ÃÀÛ  [2]·Îµå  [3]Á¾·á  [4]Å©·¹µ÷   ¦­\n");
			printf("               ¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦°\n");
			
			select = getch();
		
		
			if(select=='1')
			{
				mainroop=0;
			}
			else if(select=='2')
			{
				system("cls");				
				chogi();
				system("cls");
				if (loadgame()==1)
					main();
				inter();				
				getch(); 
			}
			else if(select=='3')
			{
				exit(0);
			}
			else if(select=='4')
			{
				system("cls");
				printf("\n\n\n         ¢º  °³¹ßÀÚ Á¤º¸  ¢¸\n\n\n   ÇÑ¾ç´ëÇÐ±³ ¾È»êÄ·ÆÛ½º ÀüÀÚÀü±â°ú\n\n\n   ÇÁ·Î±×·¡¹Ö ¹æ¹ý·Ð ÇÁ·ÎÁ§Æ®\n\n\n   2005³âµµ 1ÇÐ±â\n\n\n   [ÆÀ¿ø] ¼­¹ÎÃ¶ ÀüÀçÈñ ¼Û¿µµÎ\n");getch();
			}
			else
			{ 
				printf("\nWrong keyword Press any key");getch();
			}
		
			system("cls");
		}
	return 0;
}
