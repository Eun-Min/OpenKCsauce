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
 int attack; // �⺻���ݷ�
 int randattack; // �⺻���ݷ� ����
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

 printf("[1.�����ϱ�]\n[2.�����ϱ�]\n");
 scanf("%d",&a);

 if(a == 1)
 {
  system("cls");
  Sleep(2000);
  printf("������ �ҷ��ɴϴ�.\n");
  Sleep(1000);
  system("cls");
  printf("������ �ҷ��ɴϴ�..\n");
  Sleep(1000);
  system("cls");
  printf("������ �ҷ��ɴϴ�...\n");
  Sleep(1000);
  system("cls");
  printf("������ �ҷ��ɴϴ�....\n");
  Sleep(1000);
  system("cls");
  printf("������ �ҷ��ɴϴ�.....\n");
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
  //���� 1 ���
 while(f == 1)
 {
  printf("[��� ü�� : %d / %d]\n",mobhp,mobmhp);
  printf("[���� ü�� : %d / %d]\n",hp,mhp);
  printf("[1]����\n[2]����\n\n");
  scanf("%d",&choose);

  if(choose == 1)
  {
   system("cls");
   printf("[�����Ͽ���]\n\a");
   Sleep(2000);
   if(weapon == 0){randattack = rand() % str+1;}
   mobhp -= randattack + str;
   mobattack = rand() % 30+1;
   if(mobattack-dex >= 0)
   {
   hp -= mobattack - dex;
            }
   printf("[������� %d�� �������� �־���!]\n\a",randattack+str);
   Sleep(1000);
   printf("[������� %d�� ���ظ� �Ծ���!]\n\a",mobattack-dex);
            Sleep(1000);
   system("cls");
  }

  if(choose == 2)
  {
            f = 0;
   system("cls");
   Sleep(2000);
   printf("[������Լ� �����ƴ�]\n");
   Sleep(2000);
   printf("[��Ÿ�� 10��]\n");
   Sleep(10000);
   system("cls");
  }

  if(choose != 1 && choose != 2)
  {
            f = 0;
   system("cls");
   printf("[�߸��� �����̹Ƿ� �г�Ƽ�� �ް� �ǵ��ư��ϴ�]\n");
   printf("[�г�Ƽ ��� �뷮 ����]\n");
   gold -= gold/2;
   Sleep(2000);
   system("cls");
  }

  if(mobhp <= 0)
  {
            f = 0; 
   system("cls");
   Sleep(2000);
   printf("[�¸��Ͽ����ϴ�]");
   getgold = rand() % 40+1;
   getexp = rand() % 30+1;
   printf("[��� + %d / ����ġ + %d ȹ��]\n",getgold,getexp);
   gold += getgold;
   exp += getexp;
   Sleep(2000);
   system("cls");
  }
  
  if(hp <= 0)
  {
              system("cls");
              Sleep(1000);
              printf("[����� �׾����ϴ�]");
              Sleep(1000);
              system("cls");
              f = 0;
        } 
 }
 
  //���� 2 �����ô�� 
 while(f == 2)
 {
  printf("[�����ô�� ü�� : %d / %d]\n",mobhp,mobmhp);
  printf("[���� ü�� : %d / %d]\n",hp,mhp);
  printf("[1]����\n[2]����\n\n");
  scanf("%d",&choose);

  if(choose == 1)
  {
   system("cls");
   printf("[�����Ͽ���]\n\a");

   Sleep(2000);
   if(weapon == 0){randattack = rand() % str+1;}
   mobhp -= randattack + str;
   mobattack = rand() % 50+1;
   if(mobattack-dex >= 0)
   {
   hp -= mobattack - dex;
            }
   printf("[�����ô������ %d�� �������� �־���!]\n\a",randattack+str);
   Sleep(1000);
   printf("[�����ô������ %d�� ���ظ� �Ծ���!]\n\a",mobattack-dex);
            Sleep(1000);
   system("cls");
  }

  if(choose == 2)
  {
            f = 0;
   system("cls");
   Sleep(2000);
   printf("[�����ô�����Լ� �����ƴ�]\n");
   Sleep(2000);
   printf("[��Ÿ�� 10��]\n");
   Sleep(10000);
   system("cls");
  }

  if(choose != 1 && choose != 2)
  {
            f = 0;
   system("cls");
   printf("[�߸��� �����̹Ƿ� �г�Ƽ�� �ް� �ǵ��ư��ϴ�]\n");
   printf("[�г�Ƽ ��� �뷮 ����]\n");
   gold -= gold/2;
   Sleep(2000);
   system("cls");
  }

  if(mobhp <= 0)
  {
            f = 0; 
   system("cls");
   Sleep(2000);
   printf("[�¸��Ͽ����ϴ�]");
   getgold = rand() % 70+1;
   getexp = rand() % 60+1;
   printf("[��� + %d / ����ġ + %d ȹ��]\n",getgold,getexp);
   gold += getgold;
   exp += getexp;
   Sleep(2000);
   system("cls");
  }
  
  if(hp <= 0)
  {
              system("cls");
              Sleep(1000);
              printf("[����� �׾����ϴ�]");
              Sleep(1000);
              system("cls");
              f = 0;
        } 
 }
 
 //���� 3 ������� 
 while(f == 3)
 {
  printf("[������� ü�� : %d / %d]\n",mobhp,mobmhp);
  printf("[���� ü�� : %d / %d]\n",hp,mhp);
  printf("[1]����\n[2]����\n\n");
  scanf("%d",&choose);

  if(choose == 1)
  {
   system("cls");
   printf("[�����Ͽ���]\n\a");

   Sleep(2000);
   if(weapon == 0){randattack = rand() % str+1;}
   mobhp -= randattack + str;
   mobattack = rand() % 80+1;
   if(mobattack-dex >= 0)
   {
   hp -= mobattack - dex;
            }
   printf("[������忡�� %d�� �������� �־���!]\n\a",randattack+str);
   Sleep(1000);
   printf("[������忡�� %d�� ���ظ� �Ծ���!]\n\a",mobattack-dex);
            Sleep(1000);
   system("cls");
  }

  if(choose == 2)
  {
            f = 0;
   system("cls");
   Sleep(2000);
   printf("[������忡�Լ� �����ƴ�]\n");
   Sleep(2000);
   printf("[��Ÿ�� 10��]\n");
   Sleep(10000);
   system("cls");
  }

  if(choose != 1 && choose != 2)
  {
            f = 0;
   system("cls");
   printf("[�߸��� �����̹Ƿ� �г�Ƽ�� �ް� �ǵ��ư��ϴ�]\n");
   printf("[�г�Ƽ ��� �뷮 ����]\n");
   gold -= gold/2;
   Sleep(2000);
   system("cls");
  }

  if(mobhp <= 0)
  {
            f = 0; 
   system("cls");
   Sleep(2000);
   printf("[�¸��Ͽ����ϴ�]");
   getgold = rand() % 100+1;
   getexp = rand() % 80+1;
   printf("[��� + %d / ����ġ + %d ȹ��]\n",getgold,getexp);
   gold += getgold;
   exp += getexp;
   Sleep(2000);
   system("cls");
  }
  
  if(hp <= 0)
  {
              system("cls");
              Sleep(1000);
              printf("[����� �׾����ϴ�]");
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
  if(weapon == 0){printf("[WEAPON : �Ǽ�]\n");} if(weapon == 1){printf("[WEAPON : �㸧�Ѱ�]\n");}if(weapon == 2){printf("[WEAPON : �����Ѱ�]\n");}if(weapon == 3){printf("[WEAPON : �����ҵ�]\n");}
  if(armor == 0){printf("[ARMOR : �㸧�ѿ�]\n\n");}if(armor == 1){printf("[ARMOR : ���]\n\n");}if(armor == 2){printf("[ARMOR : �㸧�� ����]\n\n");}if(armor == 3){printf("[ARMOR : �����Ѱ���]\n\n");}
  printf("[STR : %d]\n",str);
  printf("[DEX : %d]\n\n",dex);

  printf("[1]��������\n");
  printf("[2]��������\n");
  scanf("%d",&menu);
    }

  //���� ��
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
  //���� �� ��

  //��������
  if(menu == 1)
  {
           monster = rand() % 3+1;
   system("cls");
   Sleep(1000);
   printf("[������ �������ּ���]\n\n");
   printf("[1]����� ��\n");
   printf("[2]������\n");
   scanf("%d",&c);

   //[LV1~LV4]����ǽ�
   if(c == 1)
   {
    system("cls");
    printf("���� ���� ��...");
    Sleep(2500);
    if(monster == 1){printf("[����� ��Ÿ�����ϴ�! - LV 1]\n");}if(monster == 2){printf("[�����ô���� ��Ÿ�����ϴ�! - LV 2]\n");}if(monster == 3){printf("[��������� ��Ÿ�����ϴ�! - LV 3]\n");}
    printf("[1]�ο��\n[2]����ģ��\n");
    scanf("%d",&e);

    //�ο���
    if(e == 1)
    {
     //����1 ���
     if(monster == 1)
     {
                       mobhp = 50;
                     mobmhp = 50;
                     menu = 0;
      f = 1;
     }

     //����2 �����ô��
     else if(monster == 2)
     {
                        mobhp = 80;
                     mobmhp = 80;
                        menu = 0;
      f = 2;
     }

     //����3 �������
     else if(monster == 3)
     {
                        mobhp = 130;
                     mobmhp = 130;
                        menu = 0;
      f = 3;
     }
    }

    //����ġ��
    if(e == 2)
    {
     system("cls");
     printf("[�����ƴ�]\n");
     Sleep(2000);
     printf("[��Ÿ�� 10��]\n");
     Sleep(10000);
     system("cls");
    }

    if(e != 1 && e != 2)
    {
     system("cls");
     printf("[�߸� �����Ͽ����ϴ�]\n");
     Sleep(1000);
     printf("[��Ÿ�� 10��]\n");
     Sleep(10000);
     system("cls");
    }
   }
   //����� �� ��

   if(c == 2)
   {
    system("cls");
   }

   //�����Ա����� ������
   if(c != 1 && c != 2)
   {
    system("cls");
    printf("[�߸� �����Ͽ����ϴ�]\n");
    Sleep(2000);
    system("cls");
   }
   //��
  }

  

  //��������
  if(menu == 5)
  {
   return 0;
  }
  //�������᳡
 }
}

// [��ó] [C���]RPG ����� 99�� ����|�ۼ��� ����


