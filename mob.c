// information about monster
{
		printf("[Monster HP : %d / %d]\n",mobhp,mobmhp); // [monster hp]
		printf("[My HP : %d / %d]\n",hp,mhp); // [hero hp]
		printf("[the number of potions : %d]\n",potion); // [potion number]
		printf("[1]attack \n[2]escape \n[3]Potion\n[4]Skill\n"); if(job >= 1){printf("[4]Skill\n");} // [1]attack [2]escape [3]potion [4]skill
		scanf("%d",&choose);
}
if(choose == 1)
		{
			system("cls");
			printf("[공격하였다]\n"); // [attack]
			Sleep(2000);
			randattack = rand() % str+1;
			mobhp -= randattack + str;
			mobattack = rand() % 30+1;
			if(mobattack-dex >= 0)
			{
			hp -= mobattack - dex;
          		}
			printf("[몬스터에게 %d의 데미지를 주었다!]\n",randattack+str); // [some damage on the monster]
			Sleep(1000);
			printf("[몬스터에게 %d의 피해를 입었다!]\n",mobattack-dex); // [damage from the monster]
            		Sleep(1000);
			system("cls");
		}
if(choose == 2)
		{

            		f = 0;
			system("cls");
			Sleep(2000);
			printf("[몬스터에게서 도망쳤다]\n"); // [escape from the monster]
			Sleep(2000);
			printf("[쿨타임 10초]\n");
			Sleep(10000);
			system("cls");
		}
// 레벨업 당 포션회복수치

if(choose == 3)	
		{
			if(potion >= 1)
			{
				system("cls");
				printf("[포션을 사용하였습니다]\n"); // [ using potion]
				
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
				printf("[포션이 없습니다]\n"); // no potion
				Sleep(2000);
				system("cls");
			}
		}	

if(choose == 4){
		if(choose == 4)
		{
                  if(job == 1 || job == 2) // part 1
                  {
                         system("cls");
                         printf("[사용할 스킬을 고르세요]\n"); //[choose the used skill]
                         if(twoattack == 1){printf("[1]이단콤보 - hp 200 소모\n");} //double combo
                         if(threeattack == 1){printf("[2]삼단가르기 - hp 1500 소모\n");} // triple cut
                         if(killattack == 1){printf("[3]파멸의흔적 - hp 10000 소모\n");} // mark? scar? trace? of destruction
                         printf("[4]나가기\n");
                         scanf("%d",&skillc);
			  if(twoattack == 1 && threeattack != 1 && killattack != 1) // part 1 - skill 1
                         {
                                      if(skillc == 1)
                                      {
                                      system("cls");
                                      printf("[이중 콤보 발동!]\n"); // invocation of double combo
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
                                      printf("[패널티 10초]\n"); //penalty 10s
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
			  if(twoattack != 1 && threeattack != 1 && killattack != 1) // no skill
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
                  }
		  }
		  if(job == 3 || job == 4) // part 2
                  {
                         system("cls");
                         printf("[사용할 스킬을 고르세요]\n");
                         if(shot == 1){printf("[1]더블샷 - hp 200 소모\n");} // double shot
                         if(firebomb == 1){printf("[2]파이어 봄 - hp 1500 소모\n");} // fire bomb
                         if(killing == 1){printf("[3]킬링 애로우 - hp 10000 소모\n");} // killing arrow
                         printf("[4]나가기\n");
                         scanf("%d",&skillc);	
			  
                         if(shot == 1 && firebomb != 1 && killing != 1) // part2 - skill1
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
			if(shot == 1 && firebomb == 1 && killing != 1) // part2 - skill2 
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
                                      printf("[파이어 봄 발동!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*4 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 1500;
			                          printf("[%d의 데미지를 주었다!]\n",randattack+str*4);
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
                         
                         if(shot == 1 && firebomb == 1 && killing == 1) // part2 - skill3
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
                                      printf("[파이어 봄 발동!]\n");
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*4 + str;
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 1500;
			                          printf("[%d의 데미지를 주었다!]\n",randattack+str*4);
			                          Sleep(1000);
			                          printf("[%d의 피해를 입었다!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }
                                      
                                      if(skillc == 3)
                                      {
                                      system("cls");
                                      printf("[킬링애로우 발동!]\n");
                                      Sleep(2000);
                                      system("cls");
                                      printf("킬!\n");
                                      Sleep(500);
                                      printf("링!\n");
                                      Sleep(500);
                                      printf("애!\n");
                                      Sleep(500);
                                      printf("로!\n");
                                      Sleep(500);
                                      printf("우!\n"); 
                                      Sleep(500);
                                      Sleep(2000);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d의 데미지를 주었다!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d의 데미지를 주었다!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d의 데미지를 주었다!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d의 데미지를 주었다!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d의 데미지를 주었다!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d의 데미지를 주었다!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d의 데미지를 주었다!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d의 데미지를 주었다!]\n",randattack+str/2);
			                          Sleep(100);
                                      randattack = rand() % str+1;
			                          mobhp -= randattack/2 + str;
			                          printf("[%d의 데미지를 주었다!]\n",randattack+str/2);
			                          Sleep(1000);
			                          printf("[마지막 이닷!]\n");
                                      Sleep(1000); 
                                      randattack = rand() % str+1;
			                          mobhp -= randattack*10 + str;
			                          printf("[%d의 데미지를 주었다!]\n",randattack+str*10);
			                          Sleep(1000);
			                          mobattack = rand() % 50+1;
			                          if(mobattack-dex >= 0)
			                          {
			                          hp -= mobattack - dex;
                                      }
                                      hp -= 10000;
			                          printf("[%d의 피해를 입었다!]\n",mobattack-dex);
                                      Sleep(1000);
			                          system("cls");
                                      }
        	                 } 
	                  }
 		 }
		 if(shot != 1 && firebomb != 1 && killing != 1) // no skill
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
	}
}
