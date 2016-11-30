// used file's name : enter_to_dengeon.c 

#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>

int main(void)
{
 int level;
 int mlevel;
 int monster;
 int lev;
 int hp;
 int mhp;
 int exp;
 int getexp;
 int defense;
 int mobdefense;
 int gold;
 int getgold;
 int str;
 int dex;
 int weapon;
 int armor;
 int mobhp;
 int mobmhp;
 int menu;
 int attack; // 기본공격력
 int randattack; // 기본공격력 랜덤
 int a;
 int b;
 int c;
 int d;
 int e;
 int f;
 int g;
 int h;
 int i;
 int choose;
 int mobattack;
 int randa; 

 printf("[1.시작하기]\n[2.종료하기]\n");
 scanf("%d",&a);

 if(a == 1)
 {
  system("cls");
  Sleep(2000);
  printf("게임을 불러옵니다.\n");
  Sleep(1000);
  system("cls");
  printf("게임을 불러옵니다..\n");
  Sleep(1000);
  system("cls");
  printf("게임을 불러옵니다...\n");
  Sleep(1000);
  system("cls");
  printf("게임을 불러옵니다....\n");
  Sleep(1000);
  system("cls");
  printf("게임을 불러옵니다.....\n");
  Sleep(1000);
  system("cls");
  Sleep(1000);
  level = 1;
  hp = 100;
  mhp = 100;
  str = 10;
  dex = 10;
  exp = 0;
  weapon = 0;
  armor = 0;
  gold = 1000;
  b = 1;
  a = 0;
  f = 0;
  lev = 0;
 }
 else
 {
  void exit();
 }

 while(b == 1)
 {
  //레벨 1 고블린
 while(f == 1)
 {
  printf("[고블린 체력 : %d / %d]\n",mobhp,mobmhp);
  printf("[나의 체력 : %d / %d]\n",hp,mhp);
  printf("[1]공격\n[2]도망\n\n");
  scanf("%d",&choose);

  if(choose == 1)
  {
   system("cls");
   printf("[공격하였다]\n\a");
   Sleep(2000);
   if(weapon == 0){randattack = rand() % str+1;}
   mobhp -= randattack + str;
   mobattack = rand() % 30+1;
   if(mobattack-dex >= 0)
   {
   hp -= mobattack - dex;
            }
   printf("[고블린에게 %d의 데미지를 주었다!]\n\a",randattack+str);
   Sleep(1000);
   printf("[고블린에게 %d의 피해를 입었다!]\n\a",mobattack-dex);
            Sleep(1000);
   system("cls");
  }

  if(choose == 2)
  {
            f = 0;
   system("cls");
   Sleep(2000);
   printf("[고블린에게서 도망쳤다]\n");
   Sleep(2000);
   printf("[쿨타임 10초]\n");
   Sleep(10000);
   system("cls");
  }

  if(choose != 1 && choose != 2)
  {
            f = 0;
   system("cls");
   printf("[잘못된 선택이므로 패널티를 받고 되돌아갑니다]\n");
   printf("[패널티 골드 대량 감소]\n");
   gold -= gold/2;
   Sleep(2000);
   system("cls");
  }

  if(mobhp <= 0)
  {
            f = 0; 
   system("cls");
   Sleep(2000);
   printf("[승리하였습니다]");
   getgold = rand() % 40+1;
   getexp = rand() % 30+1;
   printf("[골드 + %d / 경험치 + %d 획득]\n",getgold,getexp);
   gold += getgold;
   exp += getexp;
   Sleep(2000);
   system("cls");
  }
  
  if(hp <= 0)
  {
              system("cls");
              Sleep(1000);
              printf("[당신은 죽었습니다]");
              Sleep(1000);
              system("cls");
              f = 0;
        } 
 }
 
  //레벨 2 고블린투척병 
 while(f == 2)
 {
  printf("[고블린투척병 체력 : %d / %d]\n",mobhp,mobmhp);
  printf("[나의 체력 : %d / %d]\n",hp,mhp);
  printf("[1]공격\n[2]도망\n\n");
  scanf("%d",&choose);

  if(choose == 1)
  {
   system("cls");
   printf("[공격하였다]\n\a");

   Sleep(2000);
   if(weapon == 0){randattack = rand() % str+1;}
   mobhp -= randattack + str;
   mobattack = rand() % 50+1;
   if(mobattack-dex >= 0)
   {
   hp -= mobattack - dex;
            }
   printf("[고블린투척병에게 %d의 데미지를 주었다!]\n\a",randattack+str);
   Sleep(1000);
   printf("[고블린투척병에게 %d의 피해를 입었다!]\n\a",mobattack-dex);
            Sleep(1000);
   system("cls");
  }

  if(choose == 2)
  {
            f = 0;
   system("cls");
   Sleep(2000);
   printf("[고블린투척병에게서 도망쳤다]\n");
   Sleep(2000);
   printf("[쿨타임 10초]\n");
   Sleep(10000);
   system("cls");
  }

  if(choose != 1 && choose != 2)
  {
            f = 0;
   system("cls");
   printf("[잘못된 선택이므로 패널티를 받고 되돌아갑니다]\n");
   printf("[패널티 골드 대량 감소]\n");
   gold -= gold/2;
   Sleep(2000);
   system("cls");
  }

  if(mobhp <= 0)
  {
            f = 0; 
   system("cls");
   Sleep(2000);
   printf("[승리하였습니다]");
   getgold = rand() % 70+1;
   getexp = rand() % 60+1;
   printf("[골드 + %d / 경험치 + %d 획득]\n",getgold,getexp);
   gold += getgold;
   exp += getexp;
   Sleep(2000);
   system("cls");
  }
  
  if(hp <= 0)
  {
              system("cls");
              Sleep(1000);
              printf("[당신은 죽었습니다]");
              Sleep(1000);
              system("cls");
              f = 0;
        } 
 }
 
 //레벨 3 고블린십장 
 while(f == 3)
 {
  printf("[고블린십장 체력 : %d / %d]\n",mobhp,mobmhp);
  printf("[나의 체력 : %d / %d]\n",hp,mhp);
  printf("[1]공격\n[2]도망\n\n");
  scanf("%d",&choose);

  if(choose == 1)
  {
   system("cls");
   printf("[공격하였다]\n\a");

   Sleep(2000);
   if(weapon == 0){randattack = rand() % str+1;}
   mobhp -= randattack + str;
   mobattack = rand() % 80+1;
   if(mobattack-dex >= 0)
   {
   hp -= mobattack - dex;
            }
   printf("[고블린십장에게 %d의 데미지를 주었다!]\n\a",randattack+str);
   Sleep(1000);
   printf("[고블린십장에게 %d의 피해를 입었다!]\n\a",mobattack-dex);
            Sleep(1000);
   system("cls");
  }

  if(choose == 2)
  {
            f = 0;
   system("cls");
   Sleep(2000);
   printf("[고블린십장에게서 도망쳤다]\n");
   Sleep(2000);
   printf("[쿨타임 10초]\n");
   Sleep(10000);
   system("cls");
  }

  if(choose != 1 && choose != 2)
  {
            f = 0;
   system("cls");
   printf("[잘못된 선택이므로 패널티를 받고 되돌아갑니다]\n");
   printf("[패널티 골드 대량 감소]\n");
   gold -= gold/2;
   Sleep(2000);
   system("cls");
  }

  if(mobhp <= 0)
  {
            f = 0; 
   system("cls");
   Sleep(2000);
   printf("[승리하였습니다]");
   getgold = rand() % 100+1;
   getexp = rand() % 80+1;
   printf("[골드 + %d / 경험치 + %d 획득]\n",getgold,getexp);
   gold += getgold;
   exp += getexp;
   Sleep(2000);
   system("cls");
  }
  
  if(hp <= 0)
  {
              system("cls");
              Sleep(1000);
              printf("[당신은 죽었습니다]");
              Sleep(1000);
              system("cls");
              f = 0;
        } 
 }
 if(f <= 1)
 {
  printf("[LEVEL : %d]\n",level);
  printf("[HP : %d / %d]\n",hp,mhp);
  printf("[EXP : %d]\n",exp);
  printf("[GOLD : %d]\n",gold);
  if(weapon == 0){printf("[WEAPON : 맨손]\n");} if(weapon == 1){printf("[WEAPON : 허름한검]\n");}if(weapon == 2){printf("[WEAPON : 쓸만한검]\n");}if(weapon == 3){printf("[WEAPON : 브론즈소드]\n");}
  if(armor == 0){printf("[ARMOR : 허름한옷]\n\n");}if(armor == 1){printf("[ARMOR : 평상복]\n\n");}if(armor == 2){printf("[ARMOR : 허름한 갑옷]\n\n");}if(armor == 3){printf("[ARMOR : 쓸만한갑옷]\n\n");}
  printf("[STR : %d]\n",str);
  printf("[DEX : %d]\n\n",dex);

  printf("[1]던전입장\n");
  printf("[2]게임종료\n");
  scanf("%d",&menu);
    }

  //레벨 업
  if(exp >= 100)
  {
   if(lev == 0)
   {
    level = 2;
    lev += 1;
    hp = 150;
    mhp = 150;
   }
  }
  if(exp >= 300)
  {
   if(lev == 1)
   {
    level = 3;
    lev += 1;
    hp = 200;
    mhp = 200;
   }
  }
  if(exp >= 600)
  {
   if(lev == 2)
   {
    level = 4;
    lev += 1;
    hp = 300;
    mhp = 300;
   }
  }
  if(exp >= 1000)
  {
   if(lev == 3)
   {
    level = 5;
    lev += 1;
    hp = 450;
    mhp = 450;
   }
  }
  if(exp >= 1500)
  {
   if(lev == 4)
   {
    level = 6;
    lev += 1;
    hp = 650;
    mhp = 650;
   }
  }
  if(exp >= 2100)
  {
   if(lev == 5)
   {
    level = 7;
    lev += 1;
    hp = 900;
    mhp = 900;
   }
  }
  if(exp >= 2800)
  {
   if(lev == 6)
   {
    level = 8;
    lev += 1;
    hp = 1200;
    mhp = 1200;
   }
  }
  if(exp >= 3600)
  {
   if(lev == 7)
   {
    level = 9;
    lev += 1;
    hp = 1600;
    mhp = 1600;
   }
  }
  if(exp >= 4500)
  {
   if(lev == 8)
   {
    level = 10;
    lev += 1;
    hp = 2000;
    mhp = 2000;
   }
  }
  //레벨 업 끝

  //던전입장
  if(menu == 1)
  {
           monster = rand() % 3+1;
   system("cls");
   Sleep(1000);
   printf("[던전을 선택해주세요]\n\n");
   printf("[1]고블린의 숲\n");
   printf("[2]나가기\n");
   scanf("%d",&c);

   //[LV1~LV4]고블린의숲
   if(c == 1)
   {
    system("cls");
    printf("던전 입장 중...");
    Sleep(2500);
    if(monster == 1){printf("[고블린이 나타났습니다! - LV 1]\n");}if(monster == 2){printf("[고블린투척병이 나타났습니다! - LV 2]\n");}if(monster == 3){printf("[고블린십장이 나타났습니다! - LV 3]\n");}
    printf("[1]싸운다\n[2]도망친다\n");
    scanf("%d",&e);

    //싸우자
    if(e == 1)
    {
     //레벨1 고블린
     if(monster == 1)
     {
                       mobhp = 50;
                     mobmhp = 50;
                     menu = 0;
      f = 1;
     }

     //레벨2 고블린투척병
     else if(monster == 2)
     {
                        mobhp = 80;
                     mobmhp = 80;
                        menu = 0;
      f = 2;
     }

     //레벨3 고블린십장
     else if(monster == 3)
     {
                        mobhp = 130;
                     mobmhp = 130;
                        menu = 0;
      f = 3;
     }
    }

    //도망치자
    if(e == 2)
    {
     system("cls");
     printf("[도망쳤다]\n");
     Sleep(2000);
     printf("[쿨타임 10초]\n");
     Sleep(10000);
     system("cls");
    }

    if(e != 1 && e != 2)
    {
     system("cls");
     printf("[잘못 선택하였습니다]\n");
     Sleep(1000);
     printf("[쿨타임 10초]\n");
     Sleep(10000);
     system("cls");
    }
   }
   //고블린의 숲 끝

   if(c == 2)
   {
    system("cls");
   }

   //던전입구에서 나가기
   if(c != 1 && c != 2)
   {
    system("cls");
    printf("[잘못 선택하였습니다]\n");
    Sleep(2000);
    system("cls");
   }
   //끝
  }

  

  //게임종료
  if(menu == 5)
  {
   return 0;
  }
  //게임종료끝
 }
}
