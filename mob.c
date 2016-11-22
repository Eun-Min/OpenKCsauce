// 몬스터 정보
{
		printf("[몬스터 체력 : %d / %d]\n",mobhp,mobmhp);
		printf("[나의 체력 : %d / %d]\n",hp,mhp);
		printf("[포션 개수 : %d]\n",potion);
		printf("[1]공격\n[2]도망\n[3]포션\n"); if(job >= 1){printf("[4]스킬\n");}
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
			printf("[고블린에게 %d의 데미지를 주었다!]\n",randattack+str);
			Sleep(1000);
			printf("[고블린에게 %d의 피해를 입었다!]\n",mobattack-dex);
            		Sleep(1000);
			system("cls");
		}
