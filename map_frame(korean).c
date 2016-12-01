#include<stdio.h>
#include<stdlib.h> //system("cls")를 쓰기 위한 헤더파일
#include<conio.h> //getch()를 쓰기 위한 헤더 파일
#include<string.h> //strcpy를 쓰기 위한 헤더 파일
#include<process.h> //exit를 쓰기 위한 헤더 파일
#include<time.h>

//name과 몇가지 전역 변수로 설정한다//
static char name[7];
static int select,mainroop=1,type,gold=2000,year=1,tpart=1,tp=3;

struct MAP //지역 정보 구조체 변수
{
	char mapname[10];
	int civil;
	int mind;
	int army;
	int power;
	int own;
	int tax;
};

struct MAP m[9]; //전역 변수로 지역정보구조체변수 선언

void delay(clock_t sleep);//딜레이 함수


int intro (void); // 인트로 메뉴

int charmake (void); //캐릭터 생성 함수

int inmilli (void); // 군사함수 (전쟁,징병,훈련)
int war (void); //전쟁함수
int wartarget (void); //전쟁관련 함수(외교에서도 쓰임)
int jing (void); //징병함수
int excer (void); //훈련함수

int ininjob (void); // 내정함수(복지,개발)
int bokji (void); //복지함수
int gaibal (void); //개발함수

int inoutt (void); // 외교함수 (군사혼란)
int armyfuse (void); //군사혼란함수

int insystem (void); // 시스템인터페이스 함수
int savegame (void);//세이브 함수
int loadgame (void);//로드 함수

int inter (void); // 게임내 인터페이스 함수
int chogi(void); //지역 정보 함수 초기화 함수

int infomation (void);// 정보함수
int mainmap (void); //맵과 사용자 정보를 보여준다

int turnout (void); //턴 종료 (시간 경과)
int mapguide (void); //자신의 지역을 선택할 수 있게 해준다



// main 함수
int main(void)
{
	//게임 시작시 메뉴 함수 호출//
	intro();
	
	//캐릭터 생성함수를 불러들인다//
	charmake();
	
	//데이터 초기화 함수
	chogi();

	//인터페이스 함수 호출//
	inter();

	return 0;
}


int intro (void)
{
	while(mainroop==1)
		{
			system("cls");
			printf("\n\n");
			printf("                    ┏━━━━━━━━━━━━━━━━━┓\n");
			printf("                    ┃            전략 삼국지           ┃\n");
			printf("                    ┗━━━━━━━━━━━━━━━━━┛\n\n\n");
			printf("               ┏━━━━━━━━━━━━━━━━━━━━━━┓\n");
			printf("               ┃ [1]게임시작  [2]로드  [3]종료  [4]크레딧   ┃\n");
			printf("               ┗━━━━━━━━━━━━━━━━━━━━━━┛\n");
			
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
				printf("\n\n\n         ▶  개발자 정보  ◀\n\n\n   한양대학교 안산캠퍼스 전자전기과\n\n\n   프로그래밍 방법론 프로젝트\n\n\n   2005년도 1학기\n\n\n   [팀원] 서민철 전재희 송영두\n");getch();
			}
			else
			{ 
				printf("\nWrong keyword Press any key");getch();
			}
		
			system("cls");
		}
	return 0;
}

//캐릭터 생성 함수//
int charmake (void)
{
	printf("\n\n  ▶ 당신의 이름을 입력하세요(한글 세글자 이하) ◀\n\n\n    ☞");
	scanf("%6s",&name);
	
	system("cls");
	
	mainroop=1;		//while을 돌리기 위해 mainroop함수를 초기화 시켜준다//
	while(mainroop==1)
	{

		printf("\n\n  ▶ %s님의 성향을 선택하세요 ◀\n\n",name);
		printf("       ┏━━━━━━━━┓\n");
		printf("       ┃                ┃\n");
		printf("       ┃   [1] 전투형   ┃\n");
		printf("       ┃                ┃\n");		
		printf("       ┃   [2] 내정형   ┃\n");
		printf("       ┃                ┃\n");		
		printf("       ┃   [3] 외교형   ┃\n");
		printf("       ┃                ┃\n");		
		printf("       ┗━━━━━━━━┛\n");
		
		select=getch();
		if(select=='1'){
			mainroop=0;type=1;printf("\n전투형 캐릭터를 선택하셨습니다.\n");getch();}
		else if(select=='2'){
			mainroop=0;
			type=2;printf("\n내정에 특화된 캐릭터를 선택하셨습니다.\n");getch();}
		else if(select=='3'){
			mainroop=0;type=3;printf("\n외교적인 능력이 뛰어난 캐릭터를 선택하셨습니다.\n");getch();}
		else if(select=='4'){
			mainroop=0;type=4;printf("\n숨겨진 캐릭터 입니다.\n");getch();}
		else{ 
			printf("\nWrong keyword Press any key");getch();
		}
		system("cls");
	}
	return 0;
}
