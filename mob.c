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
                  if(job == 1 || job == 2) // part 1
                  {
                         system("cls");
                         printf("[사용할 스킬을 고르세요]\n");
                         if(twoattack == 1){printf("[1]이단콤보 - hp 200 소모\n");}
                         if(threeattack == 1){printf("[2]삼단가르기 - hp 1500 소모\n");}
                         if(killattack == 1){printf("[3]파멸의흔적 - hp 10000 소모\n");}
                         printf("[4]나가기\n");
                         scanf("%d",&skillc);
			  if(twoattack == 1 && threeattack != 1 && killattack != 1) // part 1 - skill 1
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[이중 콤보 발동!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 200;
			                          printf("[%d의 데미지를 주었다!]\n",randattack+str*2);
			                          Sleep(1000);
			                          printf("[%d의 피해를 입었다!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls"); 
                                      }
                                      
                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[잘못된 선택입니다]\n");
                                      printf("[패널티 10초]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                                      
                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[잘못된 선택입니다]\n");
                                      printf("[패널티 10초]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         } 
			   if(twoattack == 1 && threeattack == 1 && killattack != 1) // part 1 - skill 2
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[이중 콤보 발동!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 200;
			                          printf("[%d의 데미지를 주었다!]\n",randattack+str*2);
			                          Sleep(1000);
			                          printf("[%d의 피해를 입었다!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls"); 
                                      }
                                      
                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[삼단 가르기 발동!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          printf("[%d의 데미지를 주었다!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          printf("[%d의 데미지를 주었다!]\n",randattack+str);
			                        Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 1500;
			                          printf("[%d의 데미지를 주었다!]\n",randattack+str);
			                          Sleep(1000);
			                          printf("[%d의 피해를 입었다!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }
                                      
                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[잘못된 선택입니다]\n");
                                      printf("[패널티 10초]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         } 
			  if(twoattack == 1 && threeattack == 1 && killattack == 1) // part 1 - skill 3
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[이중 콤보 발동!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 200;
			                          printf("[%d의 데미지를 주었다!]\n",randattack+str*2);
			                          Sleep(1000);
			                          printf("[%d의 피해를 입었다!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls"); 
                                      }
                                      
                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[삼단 가르기 발동!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          printf("[%d의 데미지를 주었다!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          printf("[%d의 데미지를 주었다!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 1500;
			                          printf("[%d의 데미지를 주었다!]\n",randattack+str);
			                          Sleep(1000);
			                          printf("[%d의 피해를 입었다!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }
                                      
                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[파멸의흔적 발동!]\n");
                                      Sleep(2000);
                                      system("cls");
                                      printf("파!\n");
                                      Sleep(500);
                                      printf("멸!\n");
                                      Sleep(500);
                                      printf("의!\n");
                                      Sleep(500);
                                      printf("흔!\n");
                                      Sleep(500);
                                      printf("적!\n");
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
			                          printf("[%d의 데미지를 주었다!]\n",randattack+str*20);
			                          Sleep(1000);
			                          printf("[%d의 피해를 입었다!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }
                         } 
                  }
		  }
		  if(job == 3 || job == 4) // part 2
                  {
                         system("cls");
                         printf("[사용할 스킬을 고르세요]\n");
                         if(shot == 1){printf("[1]더블샷 - hp 200 소모\n");}
                         if(firebomb == 1){printf("[2]파이어 봄 - hp 1500 소모\n");}
                         if(killing == 1){printf("[3]킬링 애로우 - hp 10000 소모\n");}
                         printf("[4]나가기\n");
                         scanf("%d",&skillc);
		  }
	 	if(shot != 1 && firebomb != 1 && killing != 1) // part2 - skill1
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[잘못된 선택입니다]\n");
                                      printf("[패널티 10초]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                                      
                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[잘못된 선택입니다]\n");
                                      printf("[패널티 10초]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                                      
                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[잘못된 선택입니다]\n");
                                      printf("[패널티 10초]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         }
	
                         if(shot == 1 && firebomb != 1 && killing != 1)
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[더블 샷 발동!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
                                      hp -= 200;
			                          printf("[%d의 데미지를 주었다!]\n",randattack+str);
			                          Sleep(1000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*2 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
			                          printf("[%d의 데미지를 주었다!]\n",randattack+str);
			                          Sleep(1000);
			                          printf("[%d의 피해를 입었다!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls"); 
                                      }
                                      
                                      if(skillc == 2)
                                      {
                                      system("cls");
                                      printf("[잘못된 선택입니다]\n");
                                      printf("[패널티 10초]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                                      
                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[잘못된 선택입니다]\n");
                                      printf("[패널티 10초]\n");
                                      Sleep(10000);
                                      system("cls");
                                      }
                         } 
		}
}
