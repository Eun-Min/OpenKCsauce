#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include "map.c"

int main(void)
{
	int level;
	int mlevel;
	int co;
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
	int store1;
	int store2;
	int weapon;
	int armor;
	int item;
	int quest;
	int q;
	int starting;
	int q2;
	int mobhp;
	int mobmhp;
	int menu;
	int npc1;
	int npc2;
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
	int potion;
	int load;
	int savelevel;
	int saveexp;
	int saveweapon;
	int savearmor;
	int savegold;
	int jobs;
	int job;
	int skill;
	int sp;
	int twoattack;
	int threeattack;
	int killattack;
	int shot;
  int firebomb;
  int killing;
  int skillc;

	printf("[1.�����ϱ�]\n[2.�ҷ�����]\n[3.�����ϱ�]\n");
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
		gold = 2000;
		b = 1;
		a = 0;
		f = 0;
		lev = 0;
		potion = 0;
		starting = 0;
		job = 0;
		sp = 0;
	}
	else
	{
		void exit();
	}

	if(a == 2)
    {
         printf("[�������� �� ���� �ڵ带 �Է����ּ���]\n");
         scanf("%d",&load);

         if(load == 151)
         {
           	level = 1;
       		hp = 100;
   	        mhp = 100;
		    str = 10;
		    dex = 10;
		    exp = 0;
		    weapon = 0;
	     	armor = 0;
     	    gold = 2000;
	       	b = 1;
        	a = 0;
        	f = 0;
        	lev = 0;
      		potion = 0;
       	    starting = 0;
         }

         if(load == 142)
         {
            level = 2;
       		hp = 150;
   	        mhp = 150;
		    str = 10;
		    dex = 10;
		    exp = 100;
		    gold = 2100;
		    weapon = 0;
	     	armor = 0;
	       	b = 1;
        	a = 0;
        	f = 0;
        	lev = 0;
      		potion = 0;
       	    starting = 0;
         }

         if(load == 133)
         {
            level = 3;
            hp = 200;
   	        mhp = 200;
		    str = 10;
		    dex = 10;
		    exp = 400;
		    gold = 2300;
		    weapon = 0;
	     	armor = 0;
	       	b = 1;
        	a = 0;
        	f = 0;
        	lev = 1;
      		potion = 0;
       	    starting = 0;
         }

         if(load == 124)
         {
            level = 4;
            hp = 300;
   	        mhp = 300;
		    str = 10;
		    dex = 10;
		    exp = 800;
		    gold = 2500;
		    weapon = 0;
	     	armor = 0;
	       	b = 1;
        	a = 0;
        	f = 0;
        	lev = 2;
      		potion = 0;
       	    starting = 0;
         }

         if(load == 115)
         {
            level = 5;
            hp = 450;
   	        mhp = 450;
		    str = 10;
		    dex = 10;
		    exp = 1500;
		    gold = 3000;
		    weapon = 0;
	     	armor = 0;
	     	sp = 1;
	       	b = 1;
        	a = 0;
        	f = 0;
        	lev = 3;
      		potion = 0;
       	    starting = 0;
         }

         if(load == 106)
         {
            level = 6;
            hp = 650;
   	        mhp = 650;
		    str = 10;
		    dex = 10;
		    exp = 2200;
		    gold = 3500;
		    weapon = 0;
	     	armor = 0;
	     	sp = 2;
	       	b = 1;
        	a = 0;
        	f = 0;
        	lev = 4;
      		potion = 0;
       	    starting = 0;
         }

         if(load == 97)
         {
            level = 7;
            hp = 900;
   	        mhp = 900;
		    str = 10;
		    dex = 10;
		    exp = 3000;
		    gold = 4000;
		    weapon = 0;
	     	armor = 0;
	     	sp = 3;
	       	b = 1;
        	a = 0;
        	f = 0;
        	lev = 5;
      		potion = 0;
       	    starting = 0;
         }

         if(load == 88)
         {
            level = 8;
            hp = 1200;
   	        mhp = 1200;
		    str = 10;
		    dex = 10;
		    exp = 4000;
		    gold = 5000;
		    weapon = 0;
	     	armor = 0;
	     	sp = 4;
	       	b = 1;
        	a = 0;
        	f = 0;
        	lev = 6;
      		potion = 0;
       	    starting = 0;
         }

         if(load == 79)
         {
            level = 9;
            hp = 1600;
   	        mhp = 1600;
		    str = 10;
		    dex = 10;
		    exp = 5500;
		    gold = 6000;
		    weapon = 0;
	     	armor = 0;
	     	sp = 5;
	       	b = 1;
        	a = 0;
        	f = 0;
        	lev = 7;
      		potion = 0;
       	    starting = 0;
         }

         if(load == 610)
         {
            level = 10;
            hp = 2000;
   	        mhp = 2000;
		    str = 10;
		    dex = 10;
		    exp = 7000;
		    gold = 7000;
		    weapon = 0;
	     	armor = 0;
	     	sp = 6;
	       	b = 1;
        	a = 0;
        	f = 0;
        	lev = 8;
      		potion = 0;
       	    starting = 0;
         }

         if(load == 511)
         {
            level = 11;
            hp = 2500;
   	        mhp = 2500;
		    str = 10;
		    dex = 10;
		    exp = 9000;
		    gold = 8000;
		    weapon = 0;
	     	armor = 0;
	     	sp = 7;
	       	b = 1;
        	a = 0;
        	f = 0;
        	lev = 9;
      		potion = 0;
       	    starting = 0;
         }

         if(load == 412)
         {
            level = 12;
            hp = 3000;
   	        mhp = 3000;
		    str = 10;
		    dex = 10;
		    exp = 12000;
		    gold = 9000;
		    weapon = 0;
	     	armor = 0;
	     	sp = 8;
	       	b = 1;
        	a = 0;
        	f = 0;
        	lev = 10;
      		potion = 0;
       	    starting = 0;
         }

         if(load == 313)
         {
            level = 13;
            hp = 3500;
   	        mhp = 3500;
		    str = 10;
		    dex = 10;
		    exp = 18000;
		    gold = 10000;
		    weapon = 0;
	     	armor = 0;
	     	sp = 9;
	       	b = 1;
        	a = 0;
        	f = 0;
        	lev = 11;
      		potion = 0;
       	    starting = 0;
         }

         if(load == 214)
         {
            hp = 4000;
   	        mhp = 4000;
            level = 14;
		    exp = 30000;
		    gold = 12500;
			str = 10;
		    dex = 10;
		    weapon = 0;
	     	armor = 0;
	     	sp = 10;
	       	b = 1;
        	a = 0;
        	f = 0;
        	lev = 12;
      		potion = 0;
       	    starting = 0;
         }

         if(load == 115)
         {
            hp = 4500;
   	        mhp = 4500;
            level = 15;
		    exp = 50000;
		    gold = 15000;
			str = 10;
		    dex = 10;
		    weapon = 0;
	     	armor = 0;
	     	sp = 11;
	       	b = 1;
        	a = 0;
        	f = 0;
        	lev = 13;
      		potion = 0;
       	    starting = 0;
         }

         if(load == 2116)
         {
            hp = 5000;
   	        mhp = 5000;
            level = 16;
		    exp = 80000;
		    gold = 18000;
			str = 10;
		    dex = 10;
		    weapon = 0;
	     	armor = 0;
	     	sp = 12;
	       	b = 1;
        	a = 0;
        	f = 0;
        	lev = 14;
      		potion = 0;
       	    starting = 0;
         }

         if(load == 2217)
         {
            hp = 6000;
   	        mhp = 6000;
            level = 17;
		    exp = 120000;
		    gold = 20000;
			str = 10;
		    dex = 10;
		    weapon = 0;
	     	armor = 0;
	     	sp = 13;
	       	b = 1;
        	a = 0;
        	f = 0;
        	lev = 15;
      		potion = 0;
       	    starting = 0;
         }

         if(load == 2318)
         {
            hp = 8000;
   	        mhp = 8000;
            level = 18;
		    exp = 160000;
		    gold = 22000;
			str = 10;
		    dex = 10;
		    weapon = 0;
	     	armor = 0;
	     	sp = 14;
	       	b = 1;
        	a = 0;
        	f = 0;
        	lev = 16;
      		potion = 0;
       	    starting = 0;
         }

         if(load == 2419)
         {
            hp = 10000;
   	        mhp = 10000;
            level = 19;
		    exp = 200000;
		    gold = 25000;
			str = 10;
		    dex = 10;
		    weapon = 0;
	     	armor = 0;
	     	sp = 15;
	       	b = 1;
        	a = 0;
        	f = 0;
        	lev = 17;
      		potion = 0;
       	    starting = 0;
         }

         if(load == 2520)
         {
            hp = 15000;
   	        mhp = 15000;
            level = 20;
		    exp = 25000;
		    gold = 30000;
			str = 10;
		    dex = 10;
		    weapon = 0;
	     	armor = 0;
	     	sp = 16;
	       	b = 1;
        	a = 0;
        	f = 0;
        	lev = 18;
      		potion = 0;
       	    starting = 0;
         }
    }

	while(b == 1)
	{
 	//���� 1 ���
	while(f == 1)
	{
		printf("[��� ü�� : %d / %d]\n",mobhp,mobmhp);
		printf("[���� ü�� : %d / %d]\n",hp,mhp);
		printf("[���� ���� : %d]\n",potion);
		printf("[1]����\n[2]����\n[3]����\n"); if(job >= 1){printf("[4]��ų\n");}
		scanf("%d",&choose);

		if(choose == 1)
		{
			system("cls");
			printf("[�����Ͽ���]\n");
			Sleep(2000);
			randattack = rand() % str+1;
			mobhp -= randattack + str;
			mobattack = rand() % 30+1;
			if(mobattack-dex >= 0)
			{
			hp -= mobattack - dex;
            }
			printf("[������� %d�� �������� �־���!]\n",randattack+str);
			Sleep(1000);
			printf("[������� %d�� ���ظ� �Ծ���!]\n",mobattack-dex);
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

		if(choose == 3)
		{
			if(potion >= 1)
			{
				system("cls");
				printf("[������ ����Ͽ����ϴ�]\n");

				Sleep(2000);

				if(level == 1)
				{
					hp = 100;
					mhp = 100;
				}

				if(level == 2)
				{
					hp = 150;
					mhp = 150;
				}

				if(level == 3)
				{
					hp = 200;
					mhp = 200;
				}

				if(level == 4)
				{
					hp = 300;
					mhp = 300;
				}

				if(level == 5)
				{
					hp = 450;
					mhp = 450;
				}

				if(level == 6)
				{
					hp = 650;
					mhp = 650;
				}

				if(level == 7)
				{
					hp = 900;
					mhp = 900;
				}

				if(level == 8)
				{
					hp = 1200;
					mhp = 1200;
				}

				if(level == 9)
				{
					hp = 1600;
					mhp = 1600;
				}

				if(level == 10)
				{
					hp = 2000;
					mhp = 2000;
				}

				if(level == 11)
				{
					hp = 2500;
					mhp = 2500;
				}

				if(level == 12)
				{
					hp = 3000;
					mhp = 3000;
				}

				if(level == 13)
				{
					hp = 3500;
					mhp = 3500;
				}

				if(level == 14)
				{
					hp = 4000;
					mhp = 4000;
				}

				if(level == 15)
				{
					hp = 4500;
					mhp = 4500;
				}

				if(level == 16)
			{
				hp = 5000;
				mhp = 5000;
			}

			if(level == 17)
			{
				hp = 6000;
				mhp = 6000;
			}

			if(level == 18)
			{
				hp = 8000;
				mhp = 8000;
			}

			if(level == 19)
			{
				hp = 10000;
				mhp = 10000;
			}

			if(level == 20)
			{
				hp = 20000;
				mhp = 20000;
			}

				system("cls");
				potion -= 1;
			}
			else
			{
				system("cls");
				printf("[������ �����ϴ�]\n");
				Sleep(2000);
				system("cls");
			}
		}

		if(choose == 4)
		{
                  if(job == 1 || job == 2)
                  {
                         system("cls");
                         printf("[����� ��ų�� ������]\n");
                         if(twoattack == 1){printf("[1]�̴��޺� - hp 200 �Ҹ�\n");}
                         if(threeattack == 1){printf("[2]��ܰ����� - hp 1500 �Ҹ�\n");}
                         if(killattack == 1){printf("[3]�ĸ������� - hp 10000 �Ҹ�\n");}
                         printf("[4]������\n");
                         scanf("%d",&skillc);

                         if(twoattack != 1 && threeattack != 1 && killattack != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(twoattack == 1 && threeattack != 1 && killattack != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �޺� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*2);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(twoattack == 1 && threeattack == 1 && killattack != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �޺� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*2);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[��� ������ �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 1500;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(twoattack == 1 && threeattack == 1 && killattack == 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �޺� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*2);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[��� ������ �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 1500;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�ĸ������� �ߵ�!]\n");
                                      Sleep(2000);
                                      system("cls");
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*20 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 10000;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*20);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }
                         }
                  }

                  if(job == 3 || job == 4)
                  {
                         system("cls");
                         printf("[����� ��ų�� ������]\n");
                         if(shot == 1){printf("[1]���� - hp 200 �Ҹ�\n");}
                         if(firebomb == 1){printf("[2]���̾� �� - hp 1500 �Ҹ�\n");}
                         if(killing == 1){printf("[3]ų�� �ַο� - hp 10000 �Ҹ�\n");}
                         printf("[4]������\n");
                         scanf("%d",&skillc);

                         if(shot != 1 && firebomb != 1 && killing != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(shot == 1 && firebomb != 1 && killing != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(shot == 1 && firebomb == 1 && killing != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[���̾� �� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*4 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 1500;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*4);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(shot == 1 && firebomb == 1 && killing == 1)
                         {
                                      if(skillc == 1)
                                      {
									  system("cls");
                                      printf("[���� �� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[���̾� �� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*4 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 1500;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*4);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[ų���ַο� �ߵ�!]\n");
                                      Sleep(2000);
                                      system("cls");
                                      printf("ų!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(1000);
			                          printf("[������ �̴�!]\n");
                                      Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*10 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*10);
			                          Sleep(1000);
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 10000;
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }
                         }
                  }
  }

        if(job == 0)
        {
		if(choose != 1 && choose != 2 && choose != 3)
		{
            f = 0;
			system("cls");
			printf("[�߸��� �����̹Ƿ� �г�Ƽ�� �ް� �ǵ��ư��ϴ�]\n");
			printf("[�г�Ƽ ��� �뷮 ����]\n");
			gold -= gold/2;
			Sleep(2000);
			system("cls");
		}
        }
        else
        {
        if(choose != 1 && choose != 2 && choose != 3 && choose != 4)
		{
            f = 0;
			system("cls");
			printf("[�߸��� �����̹Ƿ� �г�Ƽ�� �ް� �ǵ��ư��ϴ�]\n");
			printf("[�г�Ƽ ��� �뷮 ����]\n");
			gold -= gold/2;
			Sleep(2000);
			system("cls");
		}
        }

		if(mobhp <= 0)
		{
            f = 0;
			system("cls");
			Sleep(2000);
			printf("[�¸��Ͽ����ϴ�]");
			getgold = rand() % 40+1;
			getexp = rand() % 40+1;
			printf("[��� + %d / ����ġ + %d ȹ��]\n",getgold,getexp);
			gold += getgold;
			exp += getexp;
			if(q == 1)
			{
				if(q2 < 5)
				{
					q2 += 1;
					printf("����Ʈ : [%d / 5]\n",q2);
				}
			}
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
		printf("[���� ���� : %d]\n",potion);
		printf("[1]����\n[2]����\n[3]����\n"); if(job >= 1){printf("[4]��ų\n");}
		scanf("%d",&choose);

		if(choose == 1)
		{
			system("cls");
			printf("[�����Ͽ���]\n");

			Sleep(2000);
			randattack = rand() % str+1;
			mobhp -= randattack + str;
			mobattack = rand() % 50+1;
			if(mobattack-dex >= 0)
			{
			hp -= mobattack - dex;
            }
			printf("[�����ô������ %d�� �������� �־���!]\n",randattack+str);
			Sleep(1000);
			printf("[�����ô������ %d�� ���ظ� �Ծ���!]\n",mobattack-dex);
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

		if(choose == 3)
		{
			if(potion >= 1)
			{
				system("cls");
				printf("[������ ����Ͽ����ϴ�]\n");

				Sleep(2000);

				if(level == 1)
				{
					hp = 100;
					mhp = 100;
				}

				if(level == 2)
				{
					hp = 150;
					mhp = 150;
				}

				if(level == 3)
				{
					hp = 200;
					mhp = 200;
				}

				if(level == 4)
				{
					hp = 300;
					mhp = 300;
				}

				if(level == 5)
				{
					hp = 450;
					mhp = 450;
				}

				if(level == 6)
				{
					hp = 650;
					mhp = 650;
				}

				if(level == 7)
				{
					hp = 900;
					mhp = 900;
				}

				if(level == 8)
				{
					hp = 1200;
					mhp = 1200;
				}

				if(level == 9)
				{
					hp = 1600;
					mhp = 1600;
				}

				if(level == 10)
				{
					hp = 2000;
					mhp = 2000;
				}

				if(level == 11)
				{
					hp = 2500;
					mhp = 2500;
				}

				if(level == 12)
				{
					hp = 3000;
					mhp = 3000;
				}

				if(level == 13)
				{
					hp = 3500;
					mhp = 3500;
				}

				if(level == 14)
				{
					hp = 4000;
					mhp = 4000;
				}

				if(level == 15)
				{
					hp = 4500;
					mhp = 4500;
				}

				if(level == 16)
			{
				hp = 5000;
				mhp = 5000;
			}

			if(level == 17)
			{
				hp = 6000;
				mhp = 6000;
			}

			if(level == 18)
			{
				hp = 8000;
				mhp = 8000;
			}

			if(level == 19)
			{
				hp = 10000;
				mhp = 10000;
			}

			if(level == 20)
			{
				hp = 20000;
				mhp = 20000;
			}

				system("cls");
				potion -= 1;
			}
			else
			{
				system("cls");
				printf("[������ �����ϴ�]\n");
				Sleep(2000);
				system("cls");
			}
		}

		if(choose == 4)
		{
                  if(job == 1 || job == 2)
                  {
                         system("cls");
                         printf("[����� ��ų�� ������]\n");
                         if(twoattack == 1){printf("[1]�̴��޺� - hp 200 �Ҹ�\n");}
                         if(threeattack == 1){printf("[2]��ܰ����� - hp 1500 �Ҹ�\n");}
                         if(killattack == 1){printf("[3]�ĸ������� - hp 10000 �Ҹ�\n");}
                         printf("[4]������\n");
                         scanf("%d",&skillc);

                         if(twoattack != 1 && threeattack != 1 && killattack != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(twoattack == 1 && threeattack != 1 && killattack != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �޺� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*2);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(twoattack == 1 && threeattack == 1 && killattack != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �޺� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*2);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[��� ������ �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 1500;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(twoattack == 1 && threeattack == 1 && killattack == 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �޺� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*2);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[��� ������ �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 1500;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�ĸ������� �ߵ�!]\n");
                                      Sleep(2000);
                                      system("cls");
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*20 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 10000;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*20);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }
                         }
                  }

                  if(job == 3 || job == 4)
                  {
                         system("cls");
                         printf("[����� ��ų�� ������]\n");
                         if(shot == 1){printf("[1]���� - hp 200 �Ҹ�\n");}
                         if(firebomb == 1){printf("[2]���̾� �� - hp 1500 �Ҹ�\n");}
                         if(killing == 1){printf("[3]ų�� �ַο� - hp 10000 �Ҹ�\n");}
                         printf("[4]������\n");
                         scanf("%d",&skillc);

                         if(shot != 1 && firebomb != 1 && killing != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(shot == 1 && firebomb != 1 && killing != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(shot == 1 && firebomb == 1 && killing != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[���̾� �� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*4 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 1500;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*4);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(shot == 1 && firebomb == 1 && killing == 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[���̾� �� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*4 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 1500;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*4);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[ų���ַο� �ߵ�!]\n");
                                      Sleep(2000);
                                      system("cls");
                                      printf("ų!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(1000);
			                          printf("[������ �̴�!]\n");
                                      Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*10 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*10);
			                          Sleep(1000);
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 10000;
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }
                         }
                  }
  }

        if(job == 0)
        {
		if(choose != 1 && choose != 2 && choose != 3)
		{
            f = 0;
			system("cls");
			printf("[�߸��� �����̹Ƿ� �г�Ƽ�� �ް� �ǵ��ư��ϴ�]\n");
			printf("[�г�Ƽ ��� �뷮 ����]\n");
			gold -= gold/2;
			Sleep(2000);
			system("cls");
		}
        }
        else
        {
        if(choose != 1 && choose != 2 && choose != 3 && choose != 4)
		{
            f = 0;
			system("cls");
			printf("[�߸��� �����̹Ƿ� �г�Ƽ�� �ް� �ǵ��ư��ϴ�]\n");
			printf("[�г�Ƽ ��� �뷮 ����]\n");
			gold -= gold/2;
			Sleep(2000);
			system("cls");
		}
        }

		if(mobhp <= 0)
		{
            f = 0;
			system("cls");
			Sleep(2000);
			printf("[�¸��Ͽ����ϴ�]");
			getgold = rand() % 70+1;
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

	//���� 3 �������
	while(f == 3)
	{
		printf("[������� ü�� : %d / %d]\n",mobhp,mobmhp);
		printf("[���� ü�� : %d / %d]\n",hp,mhp);
		printf("[���� ���� : %d]\n",potion);
		printf("[1]����\n[2]����\n[3]����\n"); if(job >= 1){printf("[4]��ų\n");}
		scanf("%d",&choose);

		if(choose == 1)
		{
			system("cls");
			printf("[�����Ͽ���]\n");

			Sleep(2000);
			randattack = rand() % str+1;
			mobhp -= randattack + str;
			mobattack = rand() % 80+1;
			if(mobattack-dex >= 0)
			{
			hp -= mobattack - dex;
            }
			printf("[������忡�� %d�� �������� �־���!]\n",randattack+str);
			Sleep(1000);
			printf("[������忡�� %d�� ���ظ� �Ծ���!]\n",mobattack-dex);
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

		if(choose == 3)
		{
			if(potion >= 1)
			{
				system("cls");
				printf("[������ ����Ͽ����ϴ�]\n");

				Sleep(2000);

				if(level == 1)
				{
					hp = 100;
					mhp = 100;
				}

				if(level == 2)
				{
					hp = 150;
					mhp = 150;
				}

				if(level == 3)
				{
					hp = 200;
					mhp = 200;
				}

				if(level == 4)
				{
					hp = 300;
					mhp = 300;
				}

				if(level == 5)
				{
					hp = 450;
					mhp = 450;
				}

				if(level == 6)
				{
					hp = 650;
					mhp = 650;
				}

				if(level == 7)
				{
					hp = 900;
					mhp = 900;
				}

				if(level == 8)
				{
					hp = 1200;
					mhp = 1200;
				}

				if(level == 9)
				{
					hp = 1600;
					mhp = 1600;
				}

				if(level == 10)
				{
					hp = 2000;
					mhp = 2000;
				}

				if(level == 11)
				{
					hp = 2500;
					mhp = 2500;
				}

				if(level == 12)
				{
					hp = 3000;
					mhp = 3000;
				}

				if(level == 13)
				{
					hp = 3500;
					mhp = 3500;
				}

				if(level == 14)
				{
					hp = 4000;
					mhp = 4000;
				}

				if(level == 15)
				{
					hp = 4500;
					mhp = 4500;
				}

				if(level == 16)
			{
				hp = 5000;
				mhp = 5000;
			}

			if(level == 17)
			{
				hp = 6000;
				mhp = 6000;
			}

			if(level == 18)
			{
				hp = 8000;
				mhp = 8000;
			}

			if(level == 19)
			{
				hp = 10000;
				mhp = 10000;
			}

			if(level == 20)
			{
				hp = 20000;
				mhp = 20000;
			}

				system("cls");
				potion -= 1;
			}
			else
			{
				system("cls");
				printf("[������ �����ϴ�]\n");
				Sleep(2000);
				system("cls");
			}
		}

		if(choose == 4)
		{
                  if(job == 1 || job == 2)
                  {
                         system("cls");
                         printf("[����� ��ų�� ������]\n");
                         if(twoattack == 1){printf("[1]�̴��޺� - hp 200 �Ҹ�\n");}
                         if(threeattack == 1){printf("[2]��ܰ����� - hp 1500 �Ҹ�\n");}
                         if(killattack == 1){printf("[3]�ĸ������� - hp 10000 �Ҹ�\n");}
                         printf("[4]������\n");
                         scanf("%d",&skillc);

                         if(twoattack != 1 && threeattack != 1 && killattack != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(twoattack == 1 && threeattack != 1 && killattack != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �޺� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*2);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(twoattack == 1 && threeattack == 1 && killattack != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �޺� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*2);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[��� ������ �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 1500;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(twoattack == 1 && threeattack == 1 && killattack == 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �޺� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*2);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[��� ������ �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 1500;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�ĸ������� �ߵ�!]\n");
                                      Sleep(2000);
                                      system("cls");
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*20 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 10000;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*20);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }
                         }
                  }

                  if(job == 3 || job == 4)
                  {
                         system("cls");
                         printf("[����� ��ų�� ������]\n");
                         if(shot == 1){printf("[1]���� - hp 200 �Ҹ�\n");}
                         if(firebomb == 1){printf("[2]���̾� �� - hp 1500 �Ҹ�\n");}
                         if(killing == 1){printf("[3]ų�� �ַο� - hp 10000 �Ҹ�\n");}
                         printf("[4]������\n");
                         scanf("%d",&skillc);

                         if(shot != 1 && firebomb != 1 && killing != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(shot == 1 && firebomb != 1 && killing != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(shot == 1 && firebomb == 1 && killing != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[���̾� �� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*4 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 1500;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*4);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(shot == 1 && firebomb == 1 && killing == 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[���̾� �� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*4 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 1500;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*4);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[ų���ַο� �ߵ�!]\n");
                                      Sleep(2000);
                                      system("cls");
                                      printf("ų!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(1000);
			                          printf("[������ �̴�!]\n");
                                      Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*10 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*10);
			                          Sleep(1000);
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 10000;
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }
                         }
                  }
  }

        if(job == 0)
        {
		if(choose != 1 && choose != 2 && choose != 3)
		{
            f = 0;
			system("cls");
			printf("[�߸��� �����̹Ƿ� �г�Ƽ�� �ް� �ǵ��ư��ϴ�]\n");
			printf("[�г�Ƽ ��� �뷮 ����]\n");
			gold -= gold/2;
			Sleep(2000);
			system("cls");
		}
        }
        else
        {
        if(choose != 1 && choose != 2 && choose != 3 && choose != 4)
		{
            f = 0;
			system("cls");
			printf("[�߸��� �����̹Ƿ� �г�Ƽ�� �ް� �ǵ��ư��ϴ�]\n");
			printf("[�г�Ƽ ��� �뷮 ����]\n");
			gold -= gold/2;
			Sleep(2000);
			system("cls");
		}
        }

		if(mobhp <= 0)
		{
            f = 0;
			system("cls");
			Sleep(2000);
			printf("[�¸��Ͽ����ϴ�]");
			getgold = rand() % 100+1;
			getexp = rand() % 120+1;
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

	//���� 3 �ں�Ʈ
	while(f == 4)
	{
		printf("[�ں�Ʈ ü�� : %d / %d]\n",mobhp,mobmhp);
		printf("[���� ü�� : %d / %d]\n",hp,mhp);
		printf("[���� ���� : %d]\n",potion);
		printf("[1]����\n[2]����\n[3]����\n"); if(job >= 1){printf("[4]��ų\n");}
		scanf("%d",&choose);

		if(choose == 1)
		{
			system("cls");
			printf("[�����Ͽ���]\n");

			Sleep(2000);
			randattack = rand() % str+1;
			mobhp -= randattack + str;
			mobattack = rand() % 80+1;
			if(mobattack-dex >= 0)
			{
			hp -= mobattack - dex;
            }
			printf("[�ں�Ʈ���� %d�� �������� �־���!]\n",randattack+str);
			Sleep(1000);
			printf("[�ں�Ʈ���� %d�� ���ظ� �Ծ���!]\n",mobattack-dex);
            Sleep(1000);
			system("cls");
		}

		if(choose == 2)
		{
            f = 0;
			system("cls");
			Sleep(2000);
			printf("[�ں�Ʈ���Լ� �����ƴ�]\n");
			Sleep(2000);
			printf("[��Ÿ�� 10��]\n");
			Sleep(10000);
			system("cls");
		}

		if(choose == 3)
		{
			if(potion >= 1)
			{
				system("cls");
				printf("[������ ����Ͽ����ϴ�]\n");

				Sleep(2000);

				if(level == 1)
				{
					hp = 100;
					mhp = 100;
				}

				if(level == 2)
				{
					hp = 150;
					mhp = 150;
				}

				if(level == 3)
				{
					hp = 200;
					mhp = 200;
				}

				if(level == 4)
				{
					hp = 300;
					mhp = 300;
				}

				if(level == 5)
				{
					hp = 450;
					mhp = 450;
				}

				if(level == 6)
				{
					hp = 650;
					mhp = 650;
				}

				if(level == 7)
				{
					hp = 900;
					mhp = 900;
				}

				if(level == 8)
				{
					hp = 1200;
					mhp = 1200;
				}

				if(level == 9)
				{
					hp = 1600;
					mhp = 1600;
				}

				if(level == 10)
				{
					hp = 2000;
					mhp = 2000;
				}

				if(level == 11)
				{
					hp = 2500;
					mhp = 2500;
				}

				if(level == 12)
				{
					hp = 3000;
					mhp = 3000;
				}

				if(level == 13)
				{
					hp = 3500;
					mhp = 3500;
				}

				if(level == 14)
				{
					hp = 4000;
					mhp = 4000;
				}

				if(level == 15)
				{
					hp = 4500;
					mhp = 4500;
				}

				if(level == 16)
			{
				hp = 5000;
				mhp = 5000;
			}

			if(level == 17)
			{
				hp = 6000;
				mhp = 6000;
			}

			if(level == 18)
			{
				hp = 8000;
				mhp = 8000;
			}

			if(level == 19)
			{
				hp = 10000;
				mhp = 10000;
			}

			if(level == 20)
			{
				hp = 20000;
				mhp = 20000;
			}

				system("cls");
				potion -= 1;
			}
			else
			{
				system("cls");
				printf("[������ �����ϴ�]\n");
				Sleep(2000);
				system("cls");
			}
		}

		if(choose == 4)
		{
                  if(job == 1 || job == 2)
                  {
                         system("cls");
                         printf("[����� ��ų�� ������]\n");
                         if(twoattack == 1){printf("[1]�̴��޺� - hp 200 �Ҹ�\n");}
                         if(threeattack == 1){printf("[2]��ܰ����� - hp 1500 �Ҹ�\n");}
                         if(killattack == 1){printf("[3]�ĸ������� - hp 10000 �Ҹ�\n");}
                         printf("[4]������\n");
                         scanf("%d",&skillc);

                         if(twoattack != 1 && threeattack != 1 && killattack != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(twoattack == 1 && threeattack != 1 && killattack != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �޺� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*2);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(twoattack == 1 && threeattack == 1 && killattack != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �޺� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*2);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[��� ������ �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 1500;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(twoattack == 1 && threeattack == 1 && killattack == 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �޺� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*2);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[��� ������ �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 1500;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�ĸ������� �ߵ�!]\n");
                                      Sleep(2000);
                                      system("cls");
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*20 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 10000;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*20);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }
                         }
                  }

                  if(job == 3 || job == 4)
                  {
                         system("cls");
                         printf("[����� ��ų�� ������]\n");
                         if(shot == 1){printf("[1]���� - hp 200 �Ҹ�\n");}
                         if(firebomb == 1){printf("[2]���̾� �� - hp 1500 �Ҹ�\n");}
                         if(killing == 1){printf("[3]ų�� �ַο� - hp 10000 �Ҹ�\n");}
                         printf("[4]������\n");
                         scanf("%d",&skillc);

                         if(shot != 1 && firebomb != 1 && killing != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(shot == 1 && firebomb != 1 && killing != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(shot == 1 && firebomb == 1 && killing != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[���̾� �� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*4 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 1500;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*4);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(shot == 1 && firebomb == 1 && killing == 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[���̾� �� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*4 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 1500;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*4);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[ų���ַο� �ߵ�!]\n");
                                      Sleep(2000);
                                      system("cls");
                                      printf("ų!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(1000);
			                          printf("[������ �̴�!]\n");
                                      Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*10 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*10);
			                          Sleep(1000);
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 10000;
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }
                         }
                  }
  }

        if(job == 0)
        {
		if(choose != 1 && choose != 2 && choose != 3)
		{
            f = 0;
			system("cls");
			printf("[�߸��� �����̹Ƿ� �г�Ƽ�� �ް� �ǵ��ư��ϴ�]\n");
			printf("[�г�Ƽ ��� �뷮 ����]\n");
			gold -= gold/2;
			Sleep(2000);
			system("cls");
		}
        }
        else
        {
        if(choose != 1 && choose != 2 && choose != 3 && choose != 4)
		{
            f = 0;
			system("cls");
			printf("[�߸��� �����̹Ƿ� �г�Ƽ�� �ް� �ǵ��ư��ϴ�]\n");
			printf("[�г�Ƽ ��� �뷮 ����]\n");
			gold -= gold/2;
			Sleep(2000);
			system("cls");
		}
        }

		if(mobhp <= 0)
		{
            f = 0;
			system("cls");
			Sleep(2000);
			printf("[�¸��Ͽ����ϴ�]");
			getgold = rand() % 120+1;
			getexp = rand() % 130+1;
			printf("[��� + %d / ����ġ + %d ȹ��]\n",getgold+50,getexp+50);
			gold += 50+getgold;
			exp += 50+getexp;
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

	//���� 5 �ں�Ʈ������
	while(f == 5)
	{
		printf("[�ں�Ʈ������ ü�� : %d / %d]\n",mobhp,mobmhp);
		printf("[���� ü�� : %d / %d]\n",hp,mhp);
		printf("[���� ���� : %d]\n",potion);
		printf("[1]����\n[2]����\n[3]����\n"); if(job >= 1){printf("[4]��ų\n");}
		scanf("%d",&choose);

		if(choose == 1)
		{
			system("cls");
			printf("[�����Ͽ���]\n");

			Sleep(2000);
			if(weapon == 0){randattack = rand() % str+1;}
			mobhp -= randattack + str;
			mobattack = rand() % 100+1;
			if(mobattack-dex >= 0)
			{
			hp -= mobattack - dex;
            }
			printf("[�ں�Ʈ���������� %d�� �������� �־���!]\n",randattack+str);
			Sleep(1000);
			printf("[�ں�Ʈ���������� %d�� ���ظ� �Ծ���!]\n",mobattack-dex);
            Sleep(1000);
			system("cls");
		}

		if(choose == 2)
		{
            f = 0;
			system("cls");
			Sleep(2000);
			printf("[�ں�Ʈ���������Լ� �����ƴ�]\n");
			Sleep(2000);
			printf("[��Ÿ�� 10��]\n");
			Sleep(10000);
			system("cls");
		}

		if(choose == 3)
		{
			if(potion >= 1)
			{
				system("cls");
				printf("[������ ����Ͽ����ϴ�]\n");

				Sleep(2000);

				if(level == 1)
				{
					hp = 100;
					mhp = 100;
				}

				if(level == 2)
				{
					hp = 150;
					mhp = 150;
				}

				if(level == 3)
				{
					hp = 200;
					mhp = 200;
				}

				if(level == 4)
				{
					hp = 300;
					mhp = 300;
				}

				if(level == 5)
				{
					hp = 450;
					mhp = 450;
				}

				if(level == 6)
				{
					hp = 650;
					mhp = 650;
				}

				if(level == 7)
				{
					hp = 900;
					mhp = 900;
				}

				if(level == 8)
				{
					hp = 1200;
					mhp = 1200;
				}

				if(level == 9)
				{
					hp = 1600;
					mhp = 1600;
				}

				if(level == 10)
				{
					hp = 2000;
					mhp = 2000;
				}

				if(level == 11)
				{
					hp = 2500;
					mhp = 2500;
				}

				if(level == 12)
				{
					hp = 3000;
					mhp = 3000;
				}

				if(level == 13)
				{
					hp = 3500;
					mhp = 3500;
				}

				if(level == 14)
				{
					hp = 4000;
					mhp = 4000;
				}

				if(level == 15)
				{
					hp = 4500;
					mhp = 4500;
				}

				if(level == 16)
			{
				hp = 5000;
				mhp = 5000;
			}

			if(level == 17)
			{
				hp = 6000;
				mhp = 6000;
			}

			if(level == 18)
			{
				hp = 8000;
				mhp = 8000;
			}

			if(level == 19)
			{
				hp = 10000;
				mhp = 10000;
			}

			if(level == 20)
			{
				hp = 20000;
				mhp = 20000;
			}

				system("cls");
				potion -= 1;
			}
			else
			{
				system("cls");
				printf("[������ �����ϴ�]\n");
				Sleep(2000);
				system("cls");
			}
		}

		if(choose == 4)
		{
                  if(job == 1 || job == 2)
                  {
                         system("cls");
                         printf("[����� ��ų�� ������]\n");
                         if(twoattack == 1){printf("[1]�̴��޺� - hp 200 �Ҹ�\n");}
                         if(threeattack == 1){printf("[2]��ܰ����� - hp 1500 �Ҹ�\n");}
                         if(killattack == 1){printf("[3]�ĸ������� - hp 10000 �Ҹ�\n");}
                         printf("[4]������\n");
                         scanf("%d",&skillc);

                         if(twoattack != 1 && threeattack != 1 && killattack != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(twoattack == 1 && threeattack != 1 && killattack != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �޺� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*2);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(twoattack == 1 && threeattack == 1 && killattack != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �޺� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*2);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[��� ������ �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 1500;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(twoattack == 1 && threeattack == 1 && killattack == 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �޺� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*2);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[��� ������ �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 1500;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�ĸ������� �ߵ�!]\n");
                                      Sleep(2000);
                                      system("cls");
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*20 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 10000;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*20);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }
                         }
                  }

                  if(job == 3 || job == 4)
                  {
                         system("cls");
                         printf("[����� ��ų�� ������]\n");
                         if(shot == 1){printf("[1]���� - hp 200 �Ҹ�\n");}
                         if(firebomb == 1){printf("[2]���̾� �� - hp 1500 �Ҹ�\n");}
                         if(killing == 1){printf("[3]ų�� �ַο� - hp 10000 �Ҹ�\n");}
                         printf("[4]������\n");
                         scanf("%d",&skillc);

                         if(shot != 1 && firebomb != 1 && killing != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(shot == 1 && firebomb != 1 && killing != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(shot == 1 && firebomb == 1 && killing != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[���̾� �� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*4 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 1500;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*4);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(shot == 1 && firebomb == 1 && killing == 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[���̾� �� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*4 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 1500;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*4);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[ų���ַο� �ߵ�!]\n");
                                      Sleep(2000);
                                      system("cls");
                                      printf("ų!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(1000);
			                          printf("[������ �̴�!]\n");
                                      Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*10 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*10);
			                          Sleep(1000);
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 10000;
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }
                         }
                  }
  }

        if(job == 0)
        {
		if(choose != 1 && choose != 2 && choose != 3)
		{
            f = 0;
			system("cls");
			printf("[�߸��� �����̹Ƿ� �г�Ƽ�� �ް� �ǵ��ư��ϴ�]\n");
			printf("[�г�Ƽ ��� �뷮 ����]\n");
			gold -= gold/2;
			Sleep(2000);
			system("cls");
		}
        }
        else
        {
        if(choose != 1 && choose != 2 && choose != 3 && choose != 4)
		{
            f = 0;
			system("cls");
			printf("[�߸��� �����̹Ƿ� �г�Ƽ�� �ް� �ǵ��ư��ϴ�]\n");
			printf("[�г�Ƽ ��� �뷮 ����]\n");
			gold -= gold/2;
			Sleep(2000);
			system("cls");
		}
        }

		if(mobhp <= 0)
		{
            f = 0;
			system("cls");
			Sleep(2000);
			printf("[�¸��Ͽ����ϴ�]");
			getgold = rand() % 150+1;
			getexp = rand() % 140+1;
			printf("[��� + %d / ����ġ + %d ȹ��]\n",getgold+60,getexp+60);
			gold += 60+getgold;
			exp += 60+getexp;
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

	//���� 6 �ں�Ʈ�δ���
	while(f == 6)
	{
		printf("[�ں�Ʈ�δ��� ü�� : %d / %d]\n",mobhp,mobmhp);
		printf("[���� ü�� : %d / %d]\n",hp,mhp);
		printf("[���� ���� : %d]\n",potion);
		printf("[1]����\n[2]����\n[3]����\n"); if(job >= 1){printf("[4]��ų\n");}
		scanf("%d",&choose);

		if(choose == 1)
		{
			system("cls");
			printf("[�����Ͽ���]\n");

			Sleep(2000);
			randattack = rand() % str+1;
			mobhp -= randattack + str;
			mobattack = rand() % 150+1;
			if(mobattack-dex >= 0)
			{
			hp -= mobattack - dex;
            }
			printf("[�ں�Ʈ�δ��忡�� %d�� �������� �־���!]\n",randattack+str);
			Sleep(1000);
			printf("[�ں�Ʈ�δ��忡�� %d�� ���ظ� �Ծ���!]\n",mobattack-dex);
            Sleep(1000);
			system("cls");
		}

		if(choose == 2)
		{
            f = 0;
			system("cls");
			Sleep(2000);
			printf("[�ں�Ʈ�δ��忡�Լ� �����ƴ�]\n");
			Sleep(2000);
			printf("[��Ÿ�� 10��]\n");
			Sleep(10000);
			system("cls");
		}

		if(choose == 3)
		{
			if(potion >= 1)
			{
				system("cls");
				printf("[������ ����Ͽ����ϴ�]\n");

				Sleep(2000);

				if(level == 1)
				{
					hp = 100;
					mhp = 100;
				}

				if(level == 2)
				{
					hp = 150;
					mhp = 150;
				}

				if(level == 3)
				{
					hp = 200;
					mhp = 200;
				}

				if(level == 4)
				{
					hp = 300;
					mhp = 300;
				}

				if(level == 5)
				{
					hp = 450;
					mhp = 450;
				}

				if(level == 6)
				{
					hp = 650;
					mhp = 650;
				}

				if(level == 7)
				{
					hp = 900;
					mhp = 900;
				}

				if(level == 8)
				{
					hp = 1200;
					mhp = 1200;
				}

				if(level == 9)
				{
					hp = 1600;
					mhp = 1600;
				}

				if(level == 10)
				{
					hp = 2000;
					mhp = 2000;
				}

				if(level == 11)
				{
					hp = 2500;
					mhp = 2500;
				}

				if(level == 12)
				{
					hp = 3000;
					mhp = 3000;
				}

				if(level == 13)
				{
					hp = 3500;
					mhp = 3500;
				}

				if(level == 14)
				{
					hp = 4000;
					mhp = 4000;
				}

				if(level == 15)
				{
					hp = 4500;
					mhp = 4500;
				}

				if(level == 16)
			{
				hp = 5000;
				mhp = 5000;
			}

			if(level == 17)
			{
				hp = 6000;
				mhp = 6000;
			}

			if(level == 18)
			{
				hp = 8000;
				mhp = 8000;
			}

			if(level == 19)
			{
				hp = 10000;
				mhp = 10000;
			}

			if(level == 20)
			{
				hp = 20000;
				mhp = 20000;
			}

				system("cls");
				potion -= 1;
			}
			else
			{
				system("cls");
				printf("[������ �����ϴ�]\n");
				Sleep(2000);
				system("cls");
			}
		}

		if(choose == 4)
		{
                  if(job == 1 || job == 2)
                  {
                         system("cls");
                         printf("[����� ��ų�� ������]\n");
                         if(twoattack == 1){printf("[1]�̴��޺� - hp 200 �Ҹ�\n");}
                         if(threeattack == 1){printf("[2]��ܰ����� - hp 1500 �Ҹ�\n");}
                         if(killattack == 1){printf("[3]�ĸ������� - hp 10000 �Ҹ�\n");}
                         printf("[4]������\n");
                         scanf("%d",&skillc);

                         if(twoattack != 1 && threeattack != 1 && killattack != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(twoattack == 1 && threeattack != 1 && killattack != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �޺� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*2);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(twoattack == 1 && threeattack == 1 && killattack != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �޺� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*2);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[��� ������ �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 1500;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(twoattack == 1 && threeattack == 1 && killattack == 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �޺� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*2);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[��� ������ �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 1500;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�ĸ������� �ߵ�!]\n");
                                      Sleep(2000);
                                      system("cls");
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*20 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 10000;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*20);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }
                         }
                  }

                  if(job == 3 || job == 4)
                  {
                         system("cls");
                         printf("[����� ��ų�� ������]\n");
                         if(shot == 1){printf("[1]���� - hp 200 �Ҹ�\n");}
                         if(firebomb == 1){printf("[2]���̾� �� - hp 1500 �Ҹ�\n");}
                         if(killing == 1){printf("[3]ų�� �ַο� - hp 10000 �Ҹ�\n");}
                         printf("[4]������\n");
                         scanf("%d",&skillc);

                         if(shot != 1 && firebomb != 1 && killing != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(shot == 1 && firebomb != 1 && killing != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(shot == 1 && firebomb == 1 && killing != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[���̾� �� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*4 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 1500;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*4);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(shot == 1 && firebomb == 1 && killing == 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[���̾� �� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*4 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 1500;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*4);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[ų���ַο� �ߵ�!]\n");
                                      Sleep(2000);
                                      system("cls");
                                      printf("ų!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(1000);
			                          printf("[������ �̴�!]\n");
                                      Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*10 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*10);
			                          Sleep(1000);
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 10000;
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }
                         }
                  }
  }

        if(job == 0)
        {
		if(choose != 1 && choose != 2 && choose != 3)
		{
            f = 0;
			system("cls");
			printf("[�߸��� �����̹Ƿ� �г�Ƽ�� �ް� �ǵ��ư��ϴ�]\n");
			printf("[�г�Ƽ ��� �뷮 ����]\n");
			gold -= gold/2;
			Sleep(2000);
			system("cls");
		}
        }
        else
        {
        if(choose != 1 && choose != 2 && choose != 3 && choose != 4)
		{
            f = 0;
			system("cls");
			printf("[�߸��� �����̹Ƿ� �г�Ƽ�� �ް� �ǵ��ư��ϴ�]\n");
			printf("[�г�Ƽ ��� �뷮 ����]\n");
			gold -= gold/2;
			Sleep(2000);
			system("cls");
		}
        }

		if(mobhp <= 0)
		{
            f = 0;
			system("cls");
			Sleep(2000);
			printf("[�¸��Ͽ����ϴ�]");
			getgold = rand() % 200+1;
			getexp = rand() % 180+1;
			printf("[��� + %d / ����ġ + %d ȹ��]\n",getgold+150,getexp+150);
			gold += 150+getgold;
			exp += 150+getexp;
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

	//���� 7 �ں�Ʈ����
	while(f == 7)
	{
		printf("[�ں�Ʈ���� ü�� : %d / %d]\n",mobhp,mobmhp);
		printf("[���� ü�� : %d / %d]\n",hp,mhp);
		printf("[���� ���� : %d]\n",potion);
		printf("[1]����\n[2]����\n[3]����\n"); if(job >= 1){printf("[1]����\n[2]����\n[3]����\n[4]��ų\n");}
		scanf("%d",&choose);

		if(choose == 1)
		{
			system("cls");
			printf("[�����Ͽ���]\n");

			Sleep(2000);
			randattack = rand() % str+1;
			mobhp -= randattack + str;
			mobattack = rand() % 170+1;
			if(mobattack-dex >= 0)
			{
			hp -= mobattack - dex;
            }
			printf("[�ں�Ʈ���忡�� %d�� �������� �־���!]\n",randattack+str);
			Sleep(1000);
			printf("[�ں�Ʈ���忡�� %d�� ���ظ� �Ծ���!]\n",mobattack-dex);
            Sleep(1000);
			system("cls");
		}

		if(choose == 2)
		{
            f = 0;
			system("cls");
			Sleep(2000);
			printf("[�ں�Ʈ���忡�Լ� �����ƴ�]\n");
			Sleep(2000);
			printf("[��Ÿ�� 10��]\n");
			Sleep(10000);
			system("cls");
		}

		if(choose == 3)
		{
			if(potion >= 1)
			{
				system("cls");
				printf("[������ ����Ͽ����ϴ�]\n");

				Sleep(2000);

				if(level == 1)
				{
					hp = 100;
					mhp = 100;
				}

				if(level == 2)
				{
					hp = 150;
					mhp = 150;
				}

				if(level == 3)
				{
					hp = 200;
					mhp = 200;
				}

				if(level == 4)
				{
					hp = 300;
					mhp = 300;
				}

				if(level == 5)
				{
					hp = 450;
					mhp = 450;
				}

				if(level == 6)
				{
					hp = 650;
					mhp = 650;
				}

				if(level == 7)
				{
					hp = 900;
					mhp = 900;
				}

				if(level == 8)
				{
					hp = 1200;
					mhp = 1200;
				}

				if(level == 9)
				{
					hp = 1600;
					mhp = 1600;
				}

				if(level == 10)
				{
					hp = 2000;
					mhp = 2000;
				}

				if(level == 11)
				{
					hp = 2500;
					mhp = 2500;
				}

				if(level == 12)
				{
					hp = 3000;
					mhp = 3000;
				}

				if(level == 13)
				{
					hp = 3500;
					mhp = 3500;
				}

				if(level == 14)
				{
					hp = 4000;
					mhp = 4000;
				}

				if(level == 15)
				{
					hp = 4500;
					mhp = 4500;
				}

				if(level == 16)
			{
				hp = 5000;
				mhp = 5000;
			}

			if(level == 17)
			{
				hp = 6000;
				mhp = 6000;
			}

			if(level == 18)
			{
				hp = 8000;
				mhp = 8000;
			}

			if(level == 19)
			{
				hp = 10000;
				mhp = 10000;
			}

			if(level == 20)
			{
				hp = 20000;
				mhp = 20000;
			}

				system("cls");
				potion -= 1;
			}
			else
			{
				system("cls");
				printf("[������ �����ϴ�]\n");
				Sleep(2000);
				system("cls");
			}
		}

		if(choose == 4)
		{
                  if(job == 1 || job == 2)
                  {
                         system("cls");
                         printf("[����� ��ų�� ������]\n");
                         if(twoattack == 1){printf("[1]�̴��޺� - hp 200 �Ҹ�\n");}
                         if(threeattack == 1){printf("[2]��ܰ����� - hp 1500 �Ҹ�\n");}
                         if(killattack == 1){printf("[3]�ĸ������� - hp 10000 �Ҹ�\n");}
                         printf("[4]������\n");
                         scanf("%d",&skillc);

                         if(twoattack != 1 && threeattack != 1 && killattack != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(twoattack == 1 && threeattack != 1 && killattack != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �޺� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*2);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(twoattack == 1 && threeattack == 1 && killattack != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �޺� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*2);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[��� ������ �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 1500;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(twoattack == 1 && threeattack == 1 && killattack == 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �޺� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*2);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[��� ������ �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 1500;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�ĸ������� �ߵ�!]\n");
                                      Sleep(2000);
                                      system("cls");
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*20 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 10000;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*20);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }
                         }
                  }

                  if(job == 3 || job == 4)
                  {
                         system("cls");
                         printf("[����� ��ų�� ������]\n");
                         if(shot == 1){printf("[1]���� - hp 200 �Ҹ�\n");}
                         if(firebomb == 1){printf("[2]���̾� �� - hp 1500 �Ҹ�\n");}
                         if(killing == 1){printf("[3]ų�� �ַο� - hp 10000 �Ҹ�\n");}
                         printf("[4]������\n");
                         scanf("%d",&skillc);

                         if(shot != 1 && firebomb != 1 && killing != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(shot == 1 && firebomb != 1 && killing != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(shot == 1 && firebomb == 1 && killing != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[���̾� �� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*4 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 1500;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*4);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(shot == 1 && firebomb == 1 && killing == 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[���̾� �� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*4 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 1500;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*4);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[ų���ַο� �ߵ�!]\n");
                                      Sleep(2000);
                                      system("cls");
                                      printf("ų!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(1000);
			                          printf("[������ �̴�!]\n");
                                      Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*10 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*10);
			                          Sleep(1000);
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 10000;
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }
                         }
                  }
  }

        if(job == 0)
        {
		if(choose != 1 && choose != 2 && choose != 3)
		{
            f = 0;
			system("cls");
			printf("[�߸��� �����̹Ƿ� �г�Ƽ�� �ް� �ǵ��ư��ϴ�]\n");
			printf("[�г�Ƽ ��� �뷮 ����]\n");
			gold -= gold/2;
			Sleep(2000);
			system("cls");
		}
        }
        else
        {
        if(choose != 1 && choose != 2 && choose != 3 && choose != 4)
		{
            f = 0;
			system("cls");
			printf("[�߸��� �����̹Ƿ� �г�Ƽ�� �ް� �ǵ��ư��ϴ�]\n");
			printf("[�г�Ƽ ��� �뷮 ����]\n");
			gold -= gold/2;
			Sleep(2000);
			system("cls");
		}
        }

		if(mobhp <= 0)
		{
            f = 0;
			system("cls");
			Sleep(2000);
			printf("[�¸��Ͽ����ϴ�]");
			getgold = rand() % 250+1;
			getexp = rand() % 200+1;
			printf("[��� + %d / ����ġ + %d ȹ��]\n",getgold+200,getexp+200);
			gold += 200+getgold;
			exp += 200+getexp;
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

	//���� 5 ������ ���� ����
	while(f == 8)
	{
		printf("[������ ���� ���� ü�� : %d / %d]\n",mobhp,mobmhp);
		printf("[���� ü�� : %d / %d]\n",hp,mhp);
		printf("[���� ���� : %d]\n",potion);
		printf("[1]����\n[2]����\n[3]����\n"); if(job >= 1){printf("[4]��ų\n");}
		scanf("%d",&choose);

		if(choose == 1)
		{
			system("cls");
			printf("[�����Ͽ���]\n");

			Sleep(2000);
			randattack = rand() % str+1;
			mobhp -= randattack + str;
			mobattack = rand() % 220+1;
			if(mobattack-dex >= 0)
			{
			hp -= mobattack - dex;
            }
			printf("[������ ���� �������� %d�� �������� �־���!]\n",randattack+str);
			Sleep(1000);
			printf("[������ ���� �������� %d�� ���ظ� �Ծ���!]\n",mobattack-dex);
            Sleep(1000);
			system("cls");
		}

		if(choose == 2)
		{
            f = 0;
			system("cls");
			Sleep(2000);
			printf("[������ ���� �������Լ� �����ƴ�]\n");
			Sleep(2000);
			printf("[��Ÿ�� 10��]\n");
			Sleep(10000);
			system("cls");
		}

		if(choose == 3)
		{
			if(potion >= 1)
			{
				system("cls");
				printf("[������ ����Ͽ����ϴ�]\n");

				Sleep(2000);

				if(level == 1)
				{
					hp = 100;
					mhp = 100;
				}

				if(level == 2)
				{
					hp = 150;
					mhp = 150;
				}

				if(level == 3)
				{
					hp = 200;
					mhp = 200;
				}

				if(level == 4)
				{
					hp = 300;
					mhp = 300;
				}

				if(level == 5)
				{
					hp = 450;
					mhp = 450;
				}

				if(level == 6)
				{
					hp = 650;
					mhp = 650;
				}

				if(level == 7)
				{
					hp = 900;
					mhp = 900;
				}

				if(level == 8)
				{
					hp = 1200;
					mhp = 1200;
				}

				if(level == 9)
				{
					hp = 1600;
					mhp = 1600;
				}

				if(level == 10)
				{
					hp = 2000;
					mhp = 2000;
				}

				if(level == 11)
				{
					hp = 2500;
					mhp = 2500;
				}

				if(level == 12)
				{
					hp = 3000;
					mhp = 3000;
				}

				if(level == 13)
				{
					hp = 3500;
					mhp = 3500;
				}

				if(level == 14)
				{
					hp = 4000;
					mhp = 4000;
				}

				if(level == 15)
				{
					hp = 4500;
					mhp = 4500;
				}

				if(level == 16)
			{
				hp = 5000;
				mhp = 5000;
			}

			if(level == 17)
			{
				hp = 6000;
				mhp = 6000;
			}

			if(level == 18)
			{
				hp = 8000;
				mhp = 8000;
			}

			if(level == 19)
			{
				hp = 10000;
				mhp = 10000;
			}

			if(level == 20)
			{
				hp = 20000;
				mhp = 20000;
			}

				system("cls");
				potion -= 1;
			}
			else
			{
				system("cls");
				printf("[������ �����ϴ�]\n");
				Sleep(2000);
				system("cls");
			}
		}

		if(choose == 4)
		{
                  if(job == 1 || job == 2)
                  {
                         system("cls");
                         printf("[����� ��ų�� ������]\n");
                         if(twoattack == 1){printf("[1]�̴��޺� - hp 200 �Ҹ�\n");}
                         if(threeattack == 1){printf("[2]��ܰ����� - hp 1500 �Ҹ�\n");}
                         if(killattack == 1){printf("[3]�ĸ������� - hp 10000 �Ҹ�\n");}
                         printf("[4]������\n");
                         scanf("%d",&skillc);

                         if(twoattack != 1 && threeattack != 1 && killattack != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(twoattack == 1 && threeattack != 1 && killattack != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �޺� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*2);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(twoattack == 1 && threeattack == 1 && killattack != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �޺� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*2);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[��� ������ �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 1500;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(twoattack == 1 && threeattack == 1 && killattack == 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �޺� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*2);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[��� ������ �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 1500;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�ĸ������� �ߵ�!]\n");
                                      Sleep(2000);
                                      system("cls");
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*20 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 10000;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*20);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }
                         }
                  }

                  if(job == 3 || job == 4)
                  {
                         system("cls");
                         printf("[����� ��ų�� ������]\n");
                         if(shot == 1){printf("[1]���� - hp 200 �Ҹ�\n");}
                         if(firebomb == 1){printf("[2]���̾� �� - hp 1500 �Ҹ�\n");}
                         if(killing == 1){printf("[3]ų�� �ַο� - hp 10000 �Ҹ�\n");}
                         printf("[4]������\n");
                         scanf("%d",&skillc);

                         if(shot != 1 && firebomb != 1 && killing != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(shot == 1 && firebomb != 1 && killing != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(shot == 1 && firebomb == 1 && killing != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[���̾� �� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*4 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 1500;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*4);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(shot == 1 && firebomb == 1 && killing == 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[���̾� �� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*4 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 1500;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*4);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[ų���ַο� �ߵ�!]\n");
                                      Sleep(2000);
                                      system("cls");
                                      printf("ų!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(1000);
			                          printf("[������ �̴�!]\n");
                                      Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*10 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*10);
			                          Sleep(1000);
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 10000;
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }
                         }
                  }
  }

        if(job == 0)
        {
		if(choose != 1 && choose != 2 && choose != 3)
		{
            f = 0;
			system("cls");
			printf("[�߸��� �����̹Ƿ� �г�Ƽ�� �ް� �ǵ��ư��ϴ�]\n");
			printf("[�г�Ƽ ��� �뷮 ����]\n");
			gold -= gold/2;
			Sleep(2000);
			system("cls");
		}
        }
        else
        {
        if(choose != 1 && choose != 2 && choose != 3 && choose != 4)
		{
            f = 0;
			system("cls");
			printf("[�߸��� �����̹Ƿ� �г�Ƽ�� �ް� �ǵ��ư��ϴ�]\n");
			printf("[�г�Ƽ ��� �뷮 ����]\n");
			gold -= gold/2;
			Sleep(2000);
			system("cls");
		}
        }

		if(mobhp <= 0)
		{
            f = 0;
			system("cls");
			Sleep(2000);
			printf("[�¸��Ͽ����ϴ�]");
			getgold = rand() % 300+1;
			getexp = rand() % 250+1;
			printf("[��� + %d / ����ġ + %d ȹ��]\n",getgold+250,getexp+250);
			gold += 250+getgold;
			exp += 250+getexp;
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

	//���� 6 ������ ���� ����
	while(f == 9)
	{
		printf("[������ ���� ���� ü�� : %d / %d]\n",mobhp,mobmhp);
		printf("[���� ü�� : %d / %d]\n",hp,mhp);
		printf("[���� ���� : %d]\n",potion);
		printf("[1]����\n[2]����\n[3]����\n"); if(job >= 1){printf("[4]��ų\n");}
		scanf("%d",&choose);

		if(choose == 1)
		{
			system("cls");
			printf("[�����Ͽ���]\n");

			Sleep(2000);
			randattack = rand() % str+1;
			mobhp -= randattack + str;
			mobattack = rand() % 300+1;
			if(mobattack-dex >= 0)
			{
			hp -= mobattack - dex;
            }
			printf("[������ ���� �������� %d�� �������� �־���!]\n",randattack+str);
			Sleep(1000);
			printf("[������ ���� �������� %d�� ���ظ� �Ծ���!]\n",mobattack-dex);
            Sleep(1000);
			system("cls");
		}

		if(choose == 2)
		{
            f = 0;
			system("cls");
			Sleep(2000);
			printf("[������ ���� �������Լ� �����ƴ�]\n");
			Sleep(2000);
			printf("[��Ÿ�� 10��]\n");
			Sleep(10000);
			system("cls");
		}

		if(choose == 3)
		{
			if(potion >= 1)
			{
				system("cls");
				printf("[������ ����Ͽ����ϴ�]\n");

				Sleep(2000);

				if(level == 1)
				{
					hp = 100;
					mhp = 100;
				}

				if(level == 2)
				{
					hp = 150;
					mhp = 150;
				}

				if(level == 3)
				{
					hp = 200;
					mhp = 200;
				}

				if(level == 4)
				{
					hp = 300;
					mhp = 300;
				}

				if(level == 5)
				{
					hp = 450;
					mhp = 450;
				}

				if(level == 6)
				{
					hp = 650;
					mhp = 650;
				}

				if(level == 7)
				{
					hp = 900;
					mhp = 900;
				}

				if(level == 8)
				{
					hp = 1200;
					mhp = 1200;
				}

				if(level == 9)
				{
					hp = 1600;
					mhp = 1600;
				}

				if(level == 10)
				{
					hp = 2000;
					mhp = 2000;
				}

				if(level == 11)
				{
					hp = 2500;
					mhp = 2500;
				}

				if(level == 12)
				{
					hp = 3000;
					mhp = 3000;
				}

				if(level == 13)
				{
					hp = 3500;
					mhp = 3500;
				}

				if(level == 14)
				{
					hp = 4000;
					mhp = 4000;
				}

				if(level == 15)
				{
					hp = 4500;
					mhp = 4500;
				}

				if(level == 16)
			{
				hp = 5000;
				mhp = 5000;
			}

			if(level == 17)
			{
				hp = 6000;
				mhp = 6000;
			}

			if(level == 18)
			{
				hp = 8000;
				mhp = 8000;
			}

			if(level == 19)
			{
				hp = 10000;
				mhp = 10000;
			}

			if(level == 20)
			{
				hp = 20000;
				mhp = 20000;
			}

				system("cls");
				potion -= 1;
			}
			else
			{
				system("cls");
				printf("[������ �����ϴ�]\n");
				Sleep(2000);
				system("cls");
			}
		}

		if(choose == 4)
		{
                  if(job == 1 || job == 2)
                  {
                         system("cls");
                         printf("[����� ��ų�� ������]\n");
                         if(twoattack == 1){printf("[1]�̴��޺� - hp 200 �Ҹ�\n");}
                         if(threeattack == 1){printf("[2]��ܰ����� - hp 1500 �Ҹ�\n");}
                         if(killattack == 1){printf("[3]�ĸ������� - hp 10000 �Ҹ�\n");}
                         printf("[4]������\n");
                         scanf("%d",&skillc);

                         if(twoattack != 1 && threeattack != 1 && killattack != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(twoattack == 1 && threeattack != 1 && killattack != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �޺� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*2);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(twoattack == 1 && threeattack == 1 && killattack != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �޺� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*2);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[��� ������ �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 1500;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(twoattack == 1 && threeattack == 1 && killattack == 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �޺� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*2);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[��� ������ �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 1500;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�ĸ������� �ߵ�!]\n");
                                      Sleep(2000);
                                      system("cls");
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*20 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 10000;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*20);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }
                         }
                  }

                  if(job == 3 || job == 4)
                  {
                         system("cls");
                         printf("[����� ��ų�� ������]\n");
                         if(shot == 1){printf("[1]���� - hp 200 �Ҹ�\n");}
                         if(firebomb == 1){printf("[2]���̾� �� - hp 1500 �Ҹ�\n");}
                         if(killing == 1){printf("[3]ų�� �ַο� - hp 10000 �Ҹ�\n");}
                         printf("[4]������\n");
                         scanf("%d",&skillc);

                         if(shot != 1 && firebomb != 1 && killing != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(shot == 1 && firebomb != 1 && killing != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(shot == 1 && firebomb == 1 && killing != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[���̾� �� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*4 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 1500;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*4);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(shot == 1 && firebomb == 1 && killing == 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[���̾� �� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*4 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 1500;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*4);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[ų���ַο� �ߵ�!]\n");
                                      Sleep(2000);
                                      system("cls");
                                      printf("ų!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(1000);
			                          printf("[������ �̴�!]\n");
                                      Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*10 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*10);
			                          Sleep(1000);
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 10000;
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }
                         }
                  }
  }

        if(job == 0)
        {
		if(choose != 1 && choose != 2 && choose != 3)
		{
            f = 0;
			system("cls");
			printf("[�߸��� �����̹Ƿ� �г�Ƽ�� �ް� �ǵ��ư��ϴ�]\n");
			printf("[�г�Ƽ ��� �뷮 ����]\n");
			gold -= gold/2;
			Sleep(2000);
			system("cls");
		}
        }
        else
        {
        if(choose != 1 && choose != 2 && choose != 3 && choose != 4)
		{
            f = 0;
			system("cls");
			printf("[�߸��� �����̹Ƿ� �г�Ƽ�� �ް� �ǵ��ư��ϴ�]\n");
			printf("[�г�Ƽ ��� �뷮 ����]\n");
			gold -= gold/2;
			Sleep(2000);
			system("cls");
		}
        }

		if(mobhp <= 0)
		{
            f = 0;
			system("cls");
			Sleep(2000);
			printf("[�¸��Ͽ����ϴ�]");
			getgold = rand() % 350+1;
			getexp = rand() % 300+1;
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

	//���� 7 �����
	while(f == 10)
	{
		printf("[����� ü�� : %d / %d]\n",mobhp,mobmhp);
		printf("[���� ü�� : %d / %d]\n",hp,mhp);
		printf("[���� ���� : %d]\n",potion);
		printf("[1]����\n[2]����\n[3]����\n"); if(job >= 1){printf("[4]��ų\n");}
		scanf("%d",&choose);

		if(choose == 1)
		{
			system("cls");
			printf("[�����Ͽ���]\n");

			Sleep(2000);
			randattack = rand() % str+1;
			mobhp -= randattack + str;
			mobattack = rand() % 450+1;
			if(mobattack-dex >= 0)
			{
			hp -= mobattack - dex;
            }
			printf("[��������� %d�� �������� �־���!]\n",randattack+str);
			Sleep(1000);
			printf("[��������� %d�� ���ظ� �Ծ���!]\n",mobattack-dex);
            Sleep(1000);
			system("cls");
		}

		if(choose == 2)
		{
            f = 0;
			system("cls");
			Sleep(2000);
			printf("[��������Լ� �����ƴ�]\n");
			Sleep(2000);
			printf("[��Ÿ�� 10��]\n");
			Sleep(10000);
			system("cls");
		}

		if(choose == 3)
		{
			if(potion >= 1)
			{
				system("cls");
				printf("[������ ����Ͽ����ϴ�]\n");

				Sleep(2000);

				if(level == 1)
				{
					hp = 100;
					mhp = 100;
				}

				if(level == 2)
				{
					hp = 150;
					mhp = 150;
				}

				if(level == 3)
				{
					hp = 200;
					mhp = 200;
				}

				if(level == 4)
				{
					hp = 300;
					mhp = 300;
				}

				if(level == 5)
				{
					hp = 450;
					mhp = 450;
				}

				if(level == 6)
				{
					hp = 650;
					mhp = 650;
				}

				if(level == 7)
				{
					hp = 900;
					mhp = 900;
				}

				if(level == 8)
				{
					hp = 1200;
					mhp = 1200;
				}

				if(level == 9)
				{
					hp = 1600;
					mhp = 1600;
				}

				if(level == 10)
				{
					hp = 2000;
					mhp = 2000;
				}

				if(level == 11)
				{
					hp = 2500;
					mhp = 2500;
				}

				if(level == 12)
				{
					hp = 3000;
					mhp = 3000;
				}

				if(level == 13)
				{
					hp = 3500;
					mhp = 3500;
				}

				if(level == 14)
				{
					hp = 4000;
					mhp = 4000;
				}

				if(level == 15)
				{
					hp = 4500;
					mhp = 4500;
				}

				if(level == 16)
			{
				hp = 5000;
				mhp = 5000;
			}

			if(level == 17)
			{
				hp = 6000;
				mhp = 6000;
			}

			if(level == 18)
			{
				hp = 8000;
				mhp = 8000;
			}

			if(level == 19)
			{
				hp = 10000;
				mhp = 10000;
			}

			if(level == 20)
			{
				hp = 20000;
				mhp = 20000;
			}

				system("cls");
				potion -= 1;
			}
			else
			{
				system("cls");
				printf("[������ �����ϴ�]\n");
				Sleep(2000);
				system("cls");
			}
		}

		if(choose == 4)
		{
                  if(job == 1 || job == 2)
                  {
                         system("cls");
                         printf("[����� ��ų�� ������]\n");
                         if(twoattack == 1){printf("[1]�̴��޺� - hp 200 �Ҹ�\n");}
                         if(threeattack == 1){printf("[2]��ܰ����� - hp 1500 �Ҹ�\n");}
                         if(killattack == 1){printf("[3]�ĸ������� - hp 10000 �Ҹ�\n");}
                         printf("[4]������\n");
                         scanf("%d",&skillc);

                         if(twoattack != 1 && threeattack != 1 && killattack != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(twoattack == 1 && threeattack != 1 && killattack != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �޺� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*2);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(twoattack == 1 && threeattack == 1 && killattack != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �޺� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*2);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[��� ������ �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 1500;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(twoattack == 1 && threeattack == 1 && killattack == 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �޺� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*2);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[��� ������ �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 1500;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�ĸ������� �ߵ�!]\n");
                                      Sleep(2000);
                                      system("cls");
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*20 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 10000;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*20);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }
                         }
                  }

                  if(job == 3 || job == 4)
                  {
                         system("cls");
                         printf("[����� ��ų�� ������]\n");
                         if(shot == 1){printf("[1]���� - hp 200 �Ҹ�\n");}
                         if(firebomb == 1){printf("[2]���̾� �� - hp 1500 �Ҹ�\n");}
                         if(killing == 1){printf("[3]ų�� �ַο� - hp 10000 �Ҹ�\n");}
                         printf("[4]������\n");
                         scanf("%d",&skillc);

                         if(shot != 1 && firebomb != 1 && killing != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(shot == 1 && firebomb != 1 && killing != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(shot == 1 && firebomb == 1 && killing != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[���̾� �� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*4 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 1500;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*4);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(shot == 1 && firebomb == 1 && killing == 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[���̾� �� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*4 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 1500;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*4);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[ų���ַο� �ߵ�!]\n");
                                      Sleep(2000);
                                      system("cls");
                                      printf("ų!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(1000);
			                          printf("[������ �̴�!]\n");
                                      Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*10 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*10);
			                          Sleep(1000);
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 10000;
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }
                         }
                  }
  }

        if(job == 0)
        {
		if(choose != 1 && choose != 2 && choose != 3)
		{
            f = 0;
			system("cls");
			printf("[�߸��� �����̹Ƿ� �г�Ƽ�� �ް� �ǵ��ư��ϴ�]\n");
			printf("[�г�Ƽ ��� �뷮 ����]\n");
			gold -= gold/2;
			Sleep(2000);
			system("cls");
		}
        }
        else
        {
        if(choose != 1 && choose != 2 && choose != 3 && choose != 4)
		{
            f = 0;
			system("cls");
			printf("[�߸��� �����̹Ƿ� �г�Ƽ�� �ް� �ǵ��ư��ϴ�]\n");
			printf("[�г�Ƽ ��� �뷮 ����]\n");
			gold -= gold/2;
			Sleep(2000);
			system("cls");
		}
        }

		if(mobhp <= 0)
		{
            f = 0;
			system("cls");
			Sleep(2000);
			printf("[�¸��Ͽ����ϴ�]");
			getgold = rand() % 400+1;
			getexp = rand() % 320+1;
			printf("[��� + %d / ����ġ + %d ȹ��]\n",getgold+500,getexp+500);
			gold += 500+getgold;
			exp += 500+getexp;
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

	//���� 8 �������
	while(f == 11)
	{
		printf("[������� ü�� : %d / %d]\n",mobhp,mobmhp);
		printf("[���� ü�� : %d / %d]\n",hp,mhp);
		printf("[���� ���� : %d]\n",potion);
		printf("[1]����\n[2]����\n[3]����\n"); if(job >= 1){printf("[4]��ų\n");}
		scanf("%d",&choose);

		if(choose == 1)
		{
			system("cls");
			printf("[�����Ͽ���]\n");

			Sleep(2000);
			randattack = rand() % str+1;
			mobhp -= randattack + str;
			mobattack = rand() % 600+1;
			if(mobattack-dex >= 0)
			{
			hp -= mobattack - dex;
            }
			printf("[������տ��� %d�� �������� �־���!]\n",randattack+str);
			Sleep(1000);
			printf("[������տ��� %d�� ���ظ� �Ծ���!]\n",mobattack-dex);
            Sleep(1000);
			system("cls");
		}

		if(choose == 2)
		{
            f = 0;
			system("cls");
			Sleep(2000);
			printf("[������տ��Լ� �����ƴ�]\n");
			Sleep(2000);
			printf("[��Ÿ�� 10��]\n");
			Sleep(10000);
			system("cls");
		}

		if(choose == 3)
		{
			if(potion >= 1)
			{
				system("cls");
				printf("[������ ����Ͽ����ϴ�]\n");

				Sleep(2000);

				if(level == 1)
				{
					hp = 100;
					mhp = 100;
				}

				if(level == 2)
				{
					hp = 150;
					mhp = 150;
				}

				if(level == 3)
				{
					hp = 200;
					mhp = 200;
				}

				if(level == 4)
				{
					hp = 300;
					mhp = 300;
				}

				if(level == 5)
				{
					hp = 450;
					mhp = 450;
				}

				if(level == 6)
				{
					hp = 650;
					mhp = 650;
				}

				if(level == 7)
				{
					hp = 900;
					mhp = 900;
				}

				if(level == 8)
				{
					hp = 1200;
					mhp = 1200;
				}

				if(level == 9)
				{
					hp = 1600;
					mhp = 1600;
				}

				if(level == 10)
				{
					hp = 2000;
					mhp = 2000;
				}

				if(level == 11)
				{
					hp = 2500;
					mhp = 2500;
				}

				if(level == 12)
				{
					hp = 3000;
					mhp = 3000;
				}

				if(level == 13)
				{
					hp = 3500;
					mhp = 3500;
				}

				if(level == 14)
				{
					hp = 4000;
					mhp = 4000;
				}

				if(level == 15)
				{
					hp = 4500;
					mhp = 4500;
				}

				if(level == 16)
			{
				hp = 5000;
				mhp = 5000;
			}

			if(level == 17)
			{
				hp = 6000;
				mhp = 6000;
			}

			if(level == 18)
			{
				hp = 8000;
				mhp = 8000;
			}

			if(level == 19)
			{
				hp = 10000;
				mhp = 10000;
			}

			if(level == 20)
			{
				hp = 20000;
				mhp = 20000;
			}

				system("cls");
				potion -= 1;
			}
			else
			{
				system("cls");
				printf("[������ �����ϴ�]\n");
				Sleep(2000);
				system("cls");
			}
		}

		if(choose == 4)
		{
                  if(job == 1 || job == 2)
                  {
                         system("cls");
                         printf("[����� ��ų�� ������]\n");
                         if(twoattack == 1){printf("[1]�̴��޺� - hp 200 �Ҹ�\n");}
                         if(threeattack == 1){printf("[2]��ܰ����� - hp 1500 �Ҹ�\n");}
                         if(killattack == 1){printf("[3]�ĸ������� - hp 10000 �Ҹ�\n");}
                         printf("[4]������\n");
                         scanf("%d",&skillc);

                         if(twoattack != 1 && threeattack != 1 && killattack != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(twoattack == 1 && threeattack != 1 && killattack != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �޺� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*2);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(twoattack == 1 && threeattack == 1 && killattack != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �޺� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*2);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[��� ������ �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 1500;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(twoattack == 1 && threeattack == 1 && killattack == 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �޺� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*2);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[��� ������ �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 1500;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�ĸ������� �ߵ�!]\n");
                                      Sleep(2000);
                                      system("cls");
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*20 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 10000;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*20);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }
                         }
                  }

                  if(job == 3 || job == 4)
                  {
                         system("cls");
                         printf("[����� ��ų�� ������]\n");
                         if(shot == 1){printf("[1]���� - hp 200 �Ҹ�\n");}
                         if(firebomb == 1){printf("[2]���̾� �� - hp 1500 �Ҹ�\n");}
                         if(killing == 1){printf("[3]ų�� �ַο� - hp 10000 �Ҹ�\n");}
                         printf("[4]������\n");
                         scanf("%d",&skillc);

                         if(shot != 1 && firebomb != 1 && killing != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(shot == 1 && firebomb != 1 && killing != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(shot == 1 && firebomb == 1 && killing != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[���̾� �� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*4 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 1500;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*4);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[�߸��� �����Դϴ�]\n");
                                      printf("[�г�Ƽ 10��]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }

                         if(shot == 1 && firebomb == 1 && killing == 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[���� �� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
                                      hp -= 200;
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
			                          printf("[%d�� �������� �־���!]\n",randattack+str);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[���̾� �� �ߵ�!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*4 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 1500;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*4);
			                          Sleep(1000);
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }

                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[ų���ַο� �ߵ�!]\n");
                                      Sleep(2000);
                                      system("cls");
                                      printf("ų!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      printf("��!\n");
                                      Sleep(500);
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str/2);
			                          Sleep(1000);
			                          printf("[������ �̴�!]\n");
                                      Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*10 + str;
			                          printf("[%d�� �������� �־���!]\n",randattack+str*10);
			                          Sleep(1000);
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 10000;
			                          printf("[%d�� ���ظ� �Ծ���!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }
                         }
                  }
  }

        if(job == 0)
        {
		if(choose != 1 && choose != 2 && choose != 3)
		{
            f = 0;
			system("cls");
			printf("[�߸��� �����̹Ƿ� �г�Ƽ�� �ް� �ǵ��ư��ϴ�]\n");
			printf("[�г�Ƽ ��� �뷮 ����]\n");
			gold -= gold/2;
			Sleep(2000);
			system("cls");
		}
        }
        else
        {
        if(choose != 1 && choose != 2 && choose != 3 && choose != 4)
		{
            f = 0;
			system("cls");
			printf("[�߸��� �����̹Ƿ� �г�Ƽ�� �ް� �ǵ��ư��ϴ�]\n");
			printf("[�г�Ƽ ��� �뷮 ����]\n");
			gold -= gold/2;
			Sleep(2000);
			system("cls");
		}
        }

		if(mobhp <= 0)
		{
            f = 0;
			system("cls");
			Sleep(2000);
			printf("[�¸��Ͽ����ϴ�]");
			getgold = rand() % 500+1;
			getexp = rand() % 500+1;
			printf("[��� + %d / ����ġ + %d ȹ��]\n",getgold+4000,getexp+4000);
			gold += 4000+getgold;
			exp += 4000+getexp;
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
		menu = map(level,hp,mhp,exp,gold,weapon,armor,str,dex,job);
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
		if(exp >= 400)
		{
			if(lev == 1)
			{
				level = 3;
				lev += 1;
				hp = 200;
				mhp = 200;
			}
		}
		if(exp >= 800)
		{
			if(lev == 2)
			{
				level = 4;
				lev += 1;
				hp = 300;
				mhp = 300;
			}
		}
		if(exp >= 1500)
		{
			if(lev == 3)
			{
				level = 5;
				lev += 1;
				hp = 450;
				mhp = 450;
				sp += 1;
			}
		}
		if(exp >= 2200)
		{
			if(lev == 4)
			{
				level = 6;
				lev += 1;
				hp = 650;
				mhp = 650;
				sp += 1;
			}
		}
		if(exp >= 3000)
		{
			if(lev == 5)
			{
				level = 7;
				lev += 1;
				hp = 900;
				mhp = 900;
				sp += 1;
			}
		}
		if(exp >= 4000)
		{
			if(lev == 6)
			{
				level = 8;
				lev += 1;
				hp = 1200;
				mhp = 1200;
				sp += 1;
			}
		}
		if(exp >= 5500)
		{
			if(lev == 7)
			{
				level = 9;
				lev += 1;
				hp = 1600;
				mhp = 1600;
				sp += 1;
			}
		}
		if(exp >= 7000)
		{
			if(lev == 8)
			{
				level = 10;
				lev += 1;
				hp = 2000;
				mhp = 2000;
				sp += 1;
			}
		}
		if(exp >= 9000)
		{
			if(lev == 9)
			{
				level = 11;
				lev += 1;
				hp = 2500;
				mhp = 2500;
				sp += 1;
			}
		}
		if(exp >= 12000)
		{
			if(lev == 10)
			{
				level = 12;
				lev += 1;
				hp = 3000;
				mhp = 3000;
				sp += 1;
			}
		}
		if(exp >= 18000)
		{
			if(lev == 11)
			{
				level = 13;
				lev += 1;
				hp = 3500;
				mhp = 3500;
				sp += 1;
			}
		}
		if(exp >= 30000)
		{
			if(lev == 12)
			{
				level = 14;
				lev += 1;
				hp = 4000;
				mhp = 4000;
				sp += 1;
			}
		}
		if(exp >= 50000)
		{
			if(lev == 13)
			{
				level = 15;
				lev += 1;
				hp = 4500;
				mhp = 4500;
				sp += 1;
			}
		}
		if(exp >= 80000)
		{
			if(lev == 14)
			{
				level = 16;
				lev += 1;
				hp = 5000;
				mhp = 5000;
				sp += 1;
			}
		}
		if(exp >= 120000)
		{
			if(lev == 15)
			{
				level = 17;
				lev += 1;
				hp = 6000;
				mhp = 6000;
				sp += 1;
			}
		}
		if(exp >= 160000)
		{
			if(lev == 16)
			{
				level = 18;
				lev += 1;
				hp = 8000;
				mhp = 8000;
				sp += 1;
			}
		}
		if(exp >= 200000)
		{
			if(lev == 17)
			{
				level = 19;
				lev += 1;
				hp = 10000;
				mhp = 10000;
				sp += 1;
			}
		}
		if(exp >= 250000)
		{
			if(lev == 18)
			{
				level = 20;
				lev += 1;
				hp = 15000;
				mhp = 15000;
				sp += 1;
			}
		}
		//���� �� ��

		//��������
		if(menu == 1)
		{
			system("cls");
			Sleep(1000);
			printf("[������ �������ּ���]\n\n");
			printf("[1]����� �� <1~2>\n");
			printf("[2]�ں�Ʈ ������ <2~5>\n");
			printf("[3]������ �� <5~8>\n");
			printf("[4]������\n");
			scanf("%d",&c);

			//[LV1~LV2]����ǽ�
			if(c == 1)
			{
             	monster = rand() % 3+1;
				system("cls");
				printf("���� ���� ��...");
				Sleep(2500);
				if(monster == 1){printf("[����� ��Ÿ�����ϴ�! - LV 0]\n");}if(monster == 2){printf("[�����ô���� ��Ÿ�����ϴ�! - LV 1]\n");}if(monster == 3){printf("[��������� ��Ÿ�����ϴ�! - LV 2]\n");}
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

			//[LV2~LV5]�ں�Ʈ ������
			if(c == 2)
			{
               	monster = rand() % 4+1;
				system("cls");
				printf("���� ���� ��...");
				Sleep(2500);
				if(monster == 1){printf("[�ں�Ʈ ��Ÿ�����ϴ�! - LV 2]\n");}if(monster == 2){printf("[�ں�Ʈ�������� ��Ÿ�����ϴ�! - LV 3]\n");}if(monster == 3){printf("[�ں�Ʈ�δ����� ��Ÿ�����ϴ�!- LV 4]\n");}if(monster == 4){printf("[�ں�Ʈ������ ��Ÿ�����ϴ�!- LV 5]\n");}
				printf("[1]�ο��\n[2]����ģ��\n");
				scanf("%d",&e);

				//�ο���
				if(e == 1)
				{
					//����3 �ں�Ʈ
					if(monster == 1)
					{
                      	mobhp = 150;
	                   	mobmhp = 150;
	                   	menu = 0;
						f = 4;
					}

					//����5 �ں�Ʈ������
					else if(monster == 2)
					{
                        mobhp = 200;
	                   	mobmhp = 200;
                        menu = 0;
						f = 5;
					}

					//����6 �ں�Ʈ�δ���
					else if(monster == 3)
					{
                        mobhp = 240;
	                   	mobmhp = 240;
                        menu = 0;
						f = 6;
					}

					//����7 �ں�Ʈ����
					else if(monster == 4)
					{
                        mobhp = 270;
	                   	mobmhp = 270;
                        menu = 0;
						f = 7;
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
			//�ں�Ʈ ������ ��

			//[LV5~LV8]������ ��
			if(c == 3)
			{
               	monster = rand() % 4+1;
				system("cls");
				printf("���� ���� ��...");
				Sleep(2500);
				if(monster == 1){printf("[������ ���� ������ ��Ÿ�����ϴ�! - LV 5]\n");}if(monster == 2){printf("[������ ���� ������ ��Ÿ�����ϴ�! - LV 6]\n");}if(monster == 3){printf("[������� ��Ÿ�����ϴ�!- LV 7]\n");}if(monster == 4){printf("[��������� ��Ÿ�����ϴ�!- LV 8]\n");}
				printf("[1]�ο��\n[2]����ģ��\n");
				scanf("%d",&e);

				//�ο���
				if(e == 1)
				{
					//����5 ������ ���� ����
					if(monster == 1)
					{
                      	mobhp = 400;
	                   	mobmhp = 400;
	                   	menu = 0;
						f = 8;
					}

					//����6 ������ ���� ����
					else if(monster == 2)
					{
                        mobhp = 640;
	                   	mobmhp = 640;
                        menu = 0;
						f = 9;
					}

					//����7 �����
					else if(monster == 3)
					{
                        mobhp = 900;
	                   	mobmhp = 900;
                        menu = 0;
						f = 10;
					}

					//����8 �������
					else if(monster == 4)
					{
                        mobhp = 1500;
	                   	mobmhp = 1500;
                        menu = 0;
						f = 11;
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
			//������ �� ��

			if(c == 4)
			{
				system("cls");
			}

			//�����Ա����� ������
			if(c != 1 && c != 2 && c != 3 && c != 4)
			{
				system("cls");
				printf("[�߸� �����Ͽ����ϴ�]\n");
				Sleep(2000);
				system("cls");
			}
			//��
		}

		//�������
		if(menu == 2)
		{
			system("cls");
			Sleep(1000);
			printf("[������� ������.]\r");
			Sleep(1000);
			printf("[������� ������..]\r");
			Sleep(1000);
			printf("[������� ������...]\r");
			Sleep(1000);

			npc1 = rand() % 3+1;
			if(npc1 == 1){printf("[������� : ����ðԳ�.]\n");} if(npc1 == 2){printf("[������� : �� ���� ����� �ְ��� ����鸸 ����]\n");} if(npc1 == 3){printf("[������� : ���� ���� ���ٸ� �� �����Գ�.]\n");}
			printf("[1]�㸧�Ѱ�<1����> - 1000���\n");
			printf("[2]�����Ѱ�<3����> - 2500���\n");
			printf("[3]�����ҵ�<5����> - 3800���\n");
			printf("[4]���̾�ҵ�<8����> - 5200���\n");
			printf("[5]�Ƹ��ٵ��ҵ�<10����> - 7500���\n");
			printf("[6]������\n");
			scanf("%d",&store1);

			if(store1 == 1)
			{
				if(gold >= 1000)
				{
					if(level >= 1)
					{
					system("cls");
					printf("[���ⱸ����...]\n");
					Sleep(3000);
					printf("[������� : ���༭ ����. �߰��Գ� ģ��!]\n");
					gold -= 1000;
					str = 15;
					weapon = 1;
					Sleep(2000);
					system("cls");
					}
					else
					{
						system("cls");
						printf("[������ ���� �ʽ��ϴ�]\n");
						Sleep(2000);
						system("cls");
					}
				}
				else
				{
					system("cls");
					printf("[������� : �������� �̰��Կ��� ���� ����!]\n");
					Sleep(2000);
					system("cls");
				}
			}

			if(store1 == 2)
			{
				if(gold >= 2500)
				{
					if(level >= 3)
					{
					system("cls");
					printf("[���ⱸ����...]\n");
					Sleep(3000);
					printf("[������� : ���༭ ����. �߰��Գ� ģ��!]\n");
					gold -= 2500;
					str = 21;
					weapon = 2;
					Sleep(2000);
					system("cls");
					}
					else
					{
						system("cls");
						printf("[������ ���� �ʽ��ϴ�]\n");
						Sleep(2000);
						system("cls");
					}
				}
				else
				{
					system("cls");
					printf("[������� : �������� �̰��Կ��� ���� ����!]\n");
					Sleep(2000);
					system("cls");
				}
			}

			if(store1 == 3)
			{
				if(gold >= 3800)
				{
					if(level >= 5)
					{
					system("cls");
					printf("[���ⱸ����...]\n");
					Sleep(3000);
					printf("[������� : ���༭ ����. �߰��Գ� ģ��!]\n");
					gold -= 3800;
					str = 30;
					weapon = 3;
					Sleep(2000);
					system("cls");
					}
					else
					{
						system("cls");
						printf("[������ ���� �ʽ��ϴ�]\n");
						Sleep(2000);
						system("cls");
					}
				}
				else
				{
					system("cls");
					printf("[������� : �������� �̰��Կ��� ���� ����!]\n");
					Sleep(2000);
					system("cls");
				}
			}

			if(store1 == 4)
			{
				if(gold >= 5200)
				{
					if(level >= 8)
					{
					system("cls");
					printf("[���ⱸ����...]\n");
					Sleep(3000);
					printf("[������� : ���༭ ����. �߰��Գ� ģ��!]\n");
					gold -= 5200;
					str = 38;
					weapon = 4;
					Sleep(2000);
					system("cls");
					}
					else
					{
						system("cls");
						printf("[������ ���� �ʽ��ϴ�]\n");
						Sleep(2000);
						system("cls");
					}
				}
				else
				{
					system("cls");
					printf("[������� : �������� �̰��Կ��� ���� ����!]\n");
					Sleep(2000);
					system("cls");
				}
			}

			if(store1 == 5)
			{
				if(gold >= 7500)
				{
					if(level >= 10)
					{
					system("cls");
					printf("[���ⱸ����...]\n");
					Sleep(3000);
					printf("[������� : ���༭ ����. �߰��Գ� ģ��!]\n");
					gold -= 7500;
					str = 45;
					weapon = 5;
					Sleep(2000);
					system("cls");
					}
					else
					{
						system("cls");
						printf("[������ ���� �ʽ��ϴ�]\n");
						Sleep(2000);
						system("cls");
					}
				}
				else
				{
					system("cls");
					printf("[������� : �������� �̰��Կ��� ���� ����!]\n");
					Sleep(2000);
					system("cls");
				}
			}

			if(store1 == 6)
			{
				system("cls");
			}

			if(store1 != 1 && store1 != 2 && store1 != 3 && store1 != 4 && store1 != 5 && store1 != 6)
			{
				system("cls");
				printf("[�߸��� �����Դϴ�]\n");
				system("cls");
			}
		}
		//���� ���� ��

		//������
		if(menu == 3)
		{
			system("cls");
			Sleep(1000);
			printf("[������ ������.]\r");
			Sleep(1000);
			printf("[������ ������..]\r");
			Sleep(1000);
			printf("[������ ������...]\r");
			Sleep(1000);

			npc2 = rand() % 3+1;
			if(npc2 == 1){printf("[������ : �������~]\n");} if(npc2 == 2){printf("[������ : ���� ���Դ� �ְ��� ���� �ڶ��Ѵ�ϴ�]\n");} if(npc2 == 3){printf("[������ : ���� ���� ���ٸ� �����ּ���]\n");}
			printf("[1]���<1����> - 3000���\n");
			printf("[2]�㸧�� ����<3����> - 5500���\n");
			printf("[3]������ ����<5����> - 9000���\n");
			printf("[4]ö ����<8����> - 12000���\n");
			printf("[5]������\n");
			scanf("%d",&store2);

			if(store2 == 1)
			{
				if(gold >= 3000)
				{
					if(level >= 1)
					{
					system("cls");
					printf("[��������...]\n");
					Sleep(3000);
					printf("[������ : �����ϴ�. �ȳ���������~]\n");
					gold -= 3000;
					dex = 15;
					armor = 1;
					Sleep(2000);
					system("cls");
					}
					else
					{
						system("cls");
						printf("[������ ���� �ʽ��ϴ�]\n");
						Sleep(2000);
						system("cls");
					}
				}
				else
				{
					system("cls");
					printf("[������ : ���� �����Ͻó׿�]\n");
					Sleep(2000);
					system("cls");
				}
			}

			if(store2 == 2)
			{
				if(gold >= 5500)
				{
					if(level >= 3)
					{
					system("cls");
					printf("[��������...]\n");
					Sleep(3000);
					printf("[������ : �����ϴ�. �ȳ���������~]\n");
					gold -= 5500;
					dex = 21;
					armor = 2;
					Sleep(2000);
					system("cls");
					}
					else
					{
						system("cls");
						printf("[������ ���� �ʽ��ϴ�]\n");
						Sleep(2000);
						system("cls");
					}
				}
				else
				{
					system("cls");
					printf("[������ : ���� �����Ͻó׿�]\n");
					Sleep(2000);
					system("cls");
				}
			}

			if(store2 == 3)
			{
				if(gold >= 9000)
				{
					if(level >= 5)
					{
					system("cls");
					printf("[��������...]\n");
					Sleep(3000);
					printf("[������ : �����ϴ�. �ȳ���������~]\n");
					gold -= 9000;
					dex = 30;
					armor = 3;
					Sleep(2000);
					system("cls");
					}
					else
					{
						system("cls");
						printf("[������ ���� �ʽ��ϴ�]\n");
						Sleep(2000);
						system("cls");
					}
				}
				else
				{
					system("cls");
					printf("[������ : ���� �����Ͻó׿�]\n");
					Sleep(2000);
					system("cls");
				}
			}

			if(store2 == 4)
			{
				if(gold >= 12000)
				{
					if(level >= 8)
					{
					system("cls");
					printf("[��������...]\n");
					Sleep(3000);
					printf("[������ : �����ϴ�. �ȳ���������~]\n");
					gold -= 12000;
					dex = 35;
					armor = 4;
					Sleep(2000);
					system("cls");
					}
					else
					{
						system("cls");
						printf("[������ ���� �ʽ��ϴ�]\n");
						Sleep(2000);
						system("cls");
					}
				}
				else
				{
					system("cls");
					printf("[������ : ���� �����Ͻó׿�]\n");
					Sleep(2000);
					system("cls");
				}
			}

			if(store2 == 5)
			{
				system("cls");
			}

			if(store2 != 1 && store2 != 2 && store2 != 3 && store2 != 4 && store2 != 5)
			{
				system("cls");
				printf("[�߸��� �����Դϴ�]\n");
				system("cls");
			}
		}
		//�� ���� ��

		//���ǻ���
		if(menu == 4)
		{
			system("cls");
			printf("[������ �����Ͻðڽ��ϱ�?]\n");
			printf("[1]1�� - 200���\n");
			printf("[2]5�� = 900���\n");
			printf("[3]������\n");
			scanf("%d",&h);

			if(h == 1)
			{
                if(potion <= 5)
                {
				if(gold >= 200)
				{
					system("cls");
					printf("[���� 1���� �����Ͽ����ϴ�]");
					potion += 1;
					gold -= 200;
					Sleep(2000);
					system("cls");
				}
				else
				{
					system("cls");
					printf("[���� �����մϴ�]");
					Sleep(2000);
					system("cls");
				}
                }
                else
                {
                    system("cls");
                    printf("[5�� �̻� ������ ������ �Ұ��� �մϴ�]\n");
                    Sleep(2000);
                    system("cls");
                }
			}

			if(h == 2)
			{
                if(potion <= 5)
                {
				if(gold >= 900)
				{
					system("cls");
					printf("[���� 5���� �����Ͽ����ϴ�]");
					potion += 5;
					gold -= 900;
					Sleep(2000);

					if(potion > 5)
					{
                              potion = 5;
                    }
               		system("cls");
				}
				else
				{
					system("cls");
					printf("[���� �����մϴ�]");
					Sleep(2000);
					system("cls");
				}
                }
                else
                {
                    system("cls");
                    printf("[5�� �̻� ������ ������ �Ұ��� �մϴ�]\n");
                    Sleep(2000);
                    system("cls");
                }
			}

			if(h == 3)
			{
			}

			if(h == 1 && h == 2 && h == 3)
			{
				system("cls");
				printf("[�߸��Է��ϼ̽��ϴ�]");
				Sleep(2000);
				system("cls");
			}
		}
		//���� ���� ��

		//���� ����
		if(menu == 5)
		{
			system("cls");
			printf("[������ ���� ���� ȯ���մϴ�]");
			Sleep(2000);
			system("cls");
			printf("[������...]");
			Sleep(2000);
			system("cls");

            if(level == 1)
            {
                hp = 100;
                mhp = 100;
            }

			if(level == 2)
			{
				hp = 150;
				mhp = 150;
			}

			if(level == 3)
			{
				hp = 200;
				mhp = 200;
			}

			if(level == 4)
			{
				hp = 300;
				mhp = 300;
			}

			if(level == 5)
			{
				hp = 450;
				mhp = 450;
			}

			if(level == 6)
			{
				hp = 650;
				mhp = 650;
			}

			if(level == 7)
			{
				hp = 900;
				mhp = 900;
			}

			if(level == 8)
			{
				hp = 1200;
				mhp = 1200;
			}

			if(level == 9)
			{
				hp = 1600;
				mhp = 1600;
			}

			if(level == 10)
			{
				hp = 2000;
				mhp = 2000;
			}

			if(level == 11)
			{
				hp = 2500;
				mhp = 2500;
			}

			if(level == 12)
			{
				hp = 3000;
				mhp = 3000;
			}

			if(level == 13)
			{
				hp = 3500;
				mhp = 3500;
			}

			if(level == 14)
			{
				hp = 4000;
				mhp = 4000;
			}

			if(level == 15)
			{
				hp = 4500;
				mhp = 4500;
			}

			if(level == 16)
			{
				hp = 5000;
				mhp = 5000;
			}

			if(level == 17)
			{
				hp = 6000;
				mhp = 6000;
			}

			if(level == 18)
			{
				hp = 8000;
				mhp = 8000;
			}

			if(level == 19)
			{
				hp = 10000;
				mhp = 10000;
			}

			if(level == 20)
			{
				hp = 20000;
				mhp = 20000;
			}

			printf("[ü���� ȸ���Ǿ����ϴ�]\n");
			Sleep(2000);
			system("cls");
		}
		//���� ��

		if(menu == 6)
		{
			system("cls");
			printf("[����Ʈ ���]\n");
			printf("[1]��� 5���� óġ\n");
			printf("=���� - 300��� 50����ġ=\n");
			printf("[2]������\n");
			scanf("%d",&quest);

			if(quest == 1)
			{
				if(q2 == 5)
				{
					system("cls");
					printf("[����Ʈ�� �Ϸ��Ͽ����ϴ�]\n");
					Sleep(2000);
					printf("[300 ��� 50 ����ġ ȹ��]\n");
					gold += 300;
					exp += 50;
					q = 0;
					q2 = 0;
					starting == 0;
				}
				else
				{
					if(starting == 0)
					{
						system("cls");
						printf("[����Ʈ�� (�ٽ�)�����ðڽ��ϱ�?]\n");
						printf("[1]��\n[2]�ƴϿ�\n");
						scanf("%d",&co);

						if(co == 1)
						{
							starting = 1;
							q = 1; // 1������Ʈ
							q2 = 0; // ���� Ƚ�� �ʱ�ȭ
							printf("[����Ʈ�� ���۵Ǿ����ϴ�]\n");
							Sleep(2000);
							system("cls");
						}

						if(co == 2)
						{
							system("cls");
						}

						if(co == 1 && co == 2)
						{
							system("cls");
							printf("[�߸��Է��ϼ̽��ϴ�]\n");
							Sleep(2000);
							system("cls");
						}
					}
					else
					{
						system("cls");
						printf("[�ٸ� ����Ʈ�� ���� ���Դϴ�]\n");
						Sleep(2000);
						system("cls");
					}
				}
			}

			if(quest == 2)
			{
			}

			if(quest == 1 && quest == 2)
			{
				system("cls");
				printf("[�߸��Է��ϼ̽��ϴ�]\n");
				Sleep(2000);
				system("cls");
			}
        }

        if(menu == 7)
        {
                system("cls");
                printf("[�������� �����Ͻðڽ��ϱ�?]\n");
                printf("[1]���� - 1������[5����]\n[2]������ - ����[20����]\n[3]�ü� - 1������[5����]\n[4]���� - ����[20����]\n");
                scanf("%d",&jobs);

                if(jobs == 1)
                {
                        if(level >= 5)
                        {
                                 system("cls");
                                 printf("[����� �����Ͽ����ϴ�]\n");
                                 job = 1;
                                 Sleep(2000);
                                 printf("[��ų�� ������ �� �ֽ��ϴ�]\n");
                        }
                        else
                        {
                            system("cls");
                            printf("[������ ���� �ʽ��ϴ�]\n");
                            Sleep(2000);
                            system("cls");
                        }
                }

                if(jobs == 2)
                {
                        if(level >= 20)
                        {
							if(job == 1)
							{
                                 system("cls");
                                 printf("[�����ͷ� �����Ͽ����ϴ�]\n");
                                 job = 2;
                                 Sleep(2000);
                                 printf("[������ų�� ������ �� �ֽ��ϴ�]\n");
							}
							else
							{
								 system("cls");
								 printf("[������ ���� ���ּ���]\n");
								 Sleep(2000);
								 system("cls");
							}
                        }
                        else
                        {
                            system("cls");
                            printf("[������ ���� �ʽ��ϴ�]\n");
                            Sleep(2000);
                            system("cls");
                        }
                }

                if(jobs == 3)
                {
                        if(level >= 5)
                        {
                                 system("cls");
                                 printf("[�ü��� �����Ͽ����ϴ�]\n");
                                 job = 3;
                                 Sleep(2000);
                                 printf("[��ų�� ������ �� �ֽ��ϴ�]\n");
                        }
                        else
                        {
                            system("cls");
                            printf("[������ ���� �ʽ��ϴ�]\n");
                            Sleep(2000);
                            system("cls");
                        }
                }

                if(jobs == 4)
                {
                        if(level >= 20)
                        {
							if(job == 3)
							{
                                 system("cls");
                                 printf("[���ͷ� �����Ͽ����ϴ�]\n");
                                 job = 4;
                                 Sleep(2000);
                                 printf("[������ų�� ������ �� �ֽ��ϴ�]\n");
							}
							else
							{
								 system("cls");
								 printf("[������ ���� ���ּ���]\n");
								 Sleep(2000);
								 system("cls");
							}
                        }
                        else
                        {
                            system("cls");
                            printf("[������ ���� �ʽ��ϴ�]\n");
                            Sleep(2000);
                            system("cls");
                        }
                }

                if(jobs == 1 && jobs == 2 && jobs == 3 && jobs == 4)
                {
                        system("cls");
                        printf("[�߸������ϼ̽��ϴ�]");
                        Sleep(2000);
                        system("cls");
                }
        }
        if(menu == 8)
        {
                if(level == 1)
                {
                         savelevel = 15;
                         saveexp = 1;
                }

                if(level == 2)
                {
                         savelevel = 14;
                         saveexp = 2;
                }

                if(level == 3)
                {
                         savelevel = 13;
                         saveexp = 3;
                }

                if(level == 4)
                {
                         savelevel = 12;
                         saveexp = 4;
                }

                if(level == 5)
                {
                         savelevel = 11;
                         saveexp = 5;
                }

                if(level == 6)
                {
                         savelevel = 10;
                         saveexp = 6;
                }

                if(level == 7)
                {
                         savelevel = 9;
                         saveexp = 7;
                }

                if(level == 8)
                {
                         savelevel = 8;
                         saveexp = 8;
                }

                if(level == 9)
                {
                         savelevel = 7;
                         saveexp = 9;
                }

                if(level == 10)
                {
                         savelevel = 6;
                         saveexp = 10;
                }

                if(level == 11)
                {
                         savelevel = 5;
                         saveexp = 11;
                }

                if(level == 12)
                {
                         savelevel = 4;
                         saveexp = 12;
                }

                if(level == 13)
                {
                         savelevel = 3;
                         saveexp = 13;
                }

                if(level == 14)
                {
                         savelevel = 2;
                         saveexp = 14;
                }

                if(level == 15)
                {
                         savelevel = 1;
                         saveexp = 15;
                }

                if(level == 16)
                {
                         savelevel = 21;
                         saveexp = 16;
                }

                if(level == 17)
                {
                         savelevel = 22;
                         saveexp = 17;
                }

                if(level == 18)
                {
                         savelevel = 23;
                         saveexp = 18;
                }

                if(level == 19)
                {
                         savelevel = 24;
                         saveexp = 19;
                }

                if(level == 20)
                {
                         savelevel = 25;
                         saveexp = 20;
                }

                system("cls");
                printf("[������...]\n");
                Sleep(2000);
                printf("[�ڵ��ȣ : %d%d]\n",savelevel,saveexp);
                printf("[20�� �� �����ϴ�]");
                Sleep(20000);
                break;
        }
		//��ų���
		if(menu == 9)
		{
			if(jobs == 1 || jobs == 2)
			{
                    system("cls");
                    printf("[���� ��ų�� �����ðڽ��ϱ�?]\n");
                    printf("[SP : %d]\n",sp);
                    printf("[GOLD : %d]\n",gold);
                    printf("[1]�̴��޺� <SP 3 , GOLD 2000>\n");
                    printf("[2]��ܰ����� <SP 5 , GOLD 5000>\n");
                    printf("[3]�ĸ������� - ���� <SP 7 , GOLD 20000>\n");
                    scanf("%d",&skill);

                    if(skill == 1)
                    {
                             if(sp >= 3)
                             {
                                   if(gold >= 2000)
                                   {
                                           system("cls");
                                           printf("[��ų�� ������ϴ�]\n");
                                           twoattack = 1;
                                           sp -= 3;
                                           gold -= 2000;
                                           Sleep(2000);
                                           system("cls");
                                   }
                                   else
                                   {
                                       system("cls");
                                       printf("[��尡 �����մϴ�]\n");
                                       Sleep(2000);
                                       system("cls");
                                   }
                             }
                             else
                             {
                                 system("cls");
                                 printf("[��ų����Ʈ�� �����մϴ�]\n");
                                 Sleep(2000);
                                 system("cls");
                             }
                    }

                    if(skill == 2)
                    {
                             if(twoattack == 1)
                             {
                             if(sp >= 5)
                             {
                                   if(gold >= 5000)
                                   {
                                           system("cls");
                                           printf("[��ų�� ������ϴ�]\n");
                                           threeattack = 1;
                                           sp -= 5;
                                           gold -= 5000;
                                           Sleep(2000);
                                           system("cls");
                                   }
                                   else
                                   {
                                       system("cls");
                                       printf("[��尡 �����մϴ�]\n");
                                       Sleep(2000);
                                       system("cls");
                                   }
                             }
                             else
                             {
                                 system("cls");
                                 printf("[��ų����Ʈ�� �����մϴ�]\n");
                                 Sleep(2000);
                                 system("cls");
                             }
                             }
                             else
                             {
                                 system("cls");
                                 printf("[���� ��ų���� ����ּ���]\n");
                                 Sleep(2000);
                                 system("cls");
                             }
                    }

                    if(skill == 3)
                    {
                             if(threeattack == 1)
                             {
                             if(sp >= 7)
                             {
                                   if(gold >= 20000)
                                   {
                                           system("cls");
                                           printf("[��ų�� ������ϴ�]\n");
                                           killattack = 1;
                                           sp -= 7;
                                           gold -= 20000;
                                           Sleep(2000);
                                           system("cls");
                                   }
                                   else
                                   {
                                       system("cls");
                                       printf("[��尡 �����մϴ�]\n");
                                       Sleep(2000);
                                       system("cls");
                                   }
                             }
                             else
                             {
                                 system("cls");
                                 printf("[��ų����Ʈ�� �����մϴ�]\n");
                                 Sleep(2000);
                                 system("cls");
                             }
                             }
                             else
                             {
                                 system("cls");
                                 printf("[���� ��ų���� ����ּ���]\n");
                                 Sleep(2000);
                                 system("cls");
                             }
                    }

                    if(skill == 1 && skill == 2 && skill == 3)
                    {
                             system("cls");
                             printf("[�߸��ȼ����Դϴ�]\n");
                             Sleep(2000);
                             system("cls");
                    }
            }

            if(jobs == 3 || jobs == 4)
			{
                    system("cls");
                    printf("[���� ��ų�� �����ðڽ��ϱ�?]\n");
                    printf("[SP : %d]\n",sp);
                    printf("[GOLD : %d]\n",gold);
                    printf("[1]���� <SP 3 , GOLD 2000>\n");
                    printf("[2]���̾� �� <SP 5 , GOLD 5000>\n");
                    printf("[3]ų�� �ַο� - ���� <SP 7 , GOLD 20000>\n");
                    scanf("%d",&skill);

                    if(skill == 1)
                    {
                             if(sp >= 3)
                             {
                                   if(gold >= 2000)
                                   {
                                           system("cls");
                                           printf("[��ų�� ������ϴ�]\n");
                                           shot = 1;
                                           sp -= 3;
                                           gold -= 2000;
                                           Sleep(2000);
                                           system("cls");
                                   }
                                   else
                                   {
                                       system("cls");
                                       printf("[��尡 �����մϴ�]\n");
                                       Sleep(2000);
                                       system("cls");
                                   }
                             }
                             else
                             {
                                 system("cls");
                                 printf("[��ų����Ʈ�� �����մϴ�]\n");
                                 Sleep(2000);
                                 system("cls");
                             }
                    }

                    if(skill == 2)
                    {
                             if(shot == 1)
                             {
                             if(sp >= 5)
                             {
                                   if(gold >= 5000)
                                   {
                                           system("cls");
                                           printf("[��ų�� ������ϴ�]\n");
                                           firebomb = 1;
                                           sp -= 5;
                                           gold -= 5000;
                                           Sleep(2000);
                                           system("cls");
                                   }
                                   else
                                   {
                                       system("cls");
                                       printf("[��尡 �����մϴ�]\n");
                                       Sleep(2000);
                                       system("cls");
                                   }
                             }
                             else
                             {
                                 system("cls");
                                 printf("[��ų����Ʈ�� �����մϴ�]\n");
                                 Sleep(2000);
                                 system("cls");
                             }
                             }
                             else
                             {
                                 system("cls");
                                 printf("[���� ��ų���� ����ּ���]\n");
                                 Sleep(2000);
                                 system("cls");
                             }
                    }

                    if(skill == 3)
                    {
                             if(firebomb == 1)
                             {
                             if(sp >= 7)
                             {
                                   if(gold >= 20000)
                                   {
                                           system("cls");
                                           printf("[��ų�� ������ϴ�]\n");
                                           killing = 1;
                                           sp -= 7;
                                           gold -= 20000;
                                           Sleep(2000);
                                           system("cls");
                                   }
                                   else
                                   {
                                       system("cls");
                                       printf("[��尡 �����մϴ�]\n");
                                       Sleep(2000);
                                       system("cls");
                                   }
                             }
                             else
                             {
                                 system("cls");
                                 printf("[��ų����Ʈ�� �����մϴ�]\n");
                                 Sleep(2000);
                                 system("cls");
                             }
                             }
                             else
                             {
                                 system("cls");
                                 printf("[���� ��ų���� ����ּ���]\n");
                                 Sleep(2000);
                                 system("cls");
                             }
                    }

                    if(skill == 1 && skill == 2 && skill == 3)
                    {
                             system("cls");
                             printf("[�߸��ȼ����Դϴ�]\n");
                             Sleep(2000);
                             system("cls");
                    }
            }
		}
		//��ų��ⳡ

        if(jobs == 0)
        {
		        if(menu == 1 && menu == 2 && menu == 3 && menu == 4 && menu == 5 && menu == 6 && menu == 7 && menu == 8)
		        {
			            system("cls");
			            printf("[�߸��Է��ϼ̽��ϴ�]");
			            Sleep(2000);
			            system("cls");
                }
        }
        else
        {
                if(menu == 1 && menu == 2 && menu == 3 && menu == 4 && menu == 5 && menu == 6 && menu == 7 && menu == 8 && menu == 9)
		        {
			            system("cls");
			            printf("[�߸��Է��ϼ̽��ϴ�]");
			            Sleep(2000);
			            system("cls");
                }
        }
}
}

// 10150 ��
