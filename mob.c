// 몬스터 정보
{
		printf("[몬스터 체력 : %d / %d]\n",mobhp,mobmhp);
		printf("[나의 체력 : %d / %d]\n",hp,mhp);
		printf("[포션 개수 : %d]\n",potion);
		printf("[1]공격\n[2]도망\n[3]포션\n[4]스킬\n"); if(job >= 1){printf("[4]스킬\n");}
		scanf("%d",&choose);
}
if(choose == 1)
		{
			system("cls");
			printf("[공격하였다]\n");
			Sleep(2000);
			randattack = rand() % str+1;
			mobhp -= randattack + str;
			mobattack = rand() % 30+1;
			if(mobattack-dex >= 0)
			{
			hp -= mobattack - dex;
          		}
			printf("[몬스터에게 %d의 데미지를 주었다!]\n",randattack+str);
			Sleep(1000);
			printf("[몬스터에게 %d의 피해를 입었다!]\n",mobattack-dex);
            		Sleep(1000);
			system("cls");
		}
if(choose == 2)
		{

            		f = 0;
			system("cls");
			Sleep(2000);
			printf("[몬스터에게서 도망쳤다]\n");
			Sleep(2000);
			printf("[쿨타임 10초]\n");
			Sleep(10000);
			system("cls");
		}
if(choose == 3)
		{
			if(potion >= 1)
			{
				system("cls");
				printf("[포션을 사용하였습니다]\n");
				
				Sleep(2000);							
				hp = 100;
				mhp = 100;
			else
			{
				system("cls");
				printf("[포션이 없습니다]\n");
				Sleep(2000);
				system("cls");
			}
				
			
if(choose == 4){
		if(choose == 4)
		{
                  if(job == 1 || job == 2)
                  {
                         system("cls");
                         printf("[사용할 스킬을 고르세요]\n");
                         if(twoattack == 1){printf("[1]이단콤보 - hp 200 소모\n");}
                         if(threeattack == 1){printf("[2]삼단가르기 - hp 1500 소모\n");}
                         if(killattack == 1){printf("[3]파멸의흔적 - hp 10000 소모\n");}
                         printf("[4]나가기\n");
                         scanf("%d",&skillc);
			 // fill this tab (making skill status)
		  }
		}
}
