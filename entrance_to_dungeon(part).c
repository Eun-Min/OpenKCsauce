		if(menu == 1)
		{
			system("cls");
			Sleep(1000);
			printf("[던전을 선택해주세요]\n\n"); // choice the dungeon 
			printf("[1]고블린의 숲 <1~2>\n"); // goblin's forest
k			printf("[2]코볼트 유적지 <2~5>\n"); // kobolteu historic site 	
			printf("[3]요정의 숲 <5~8>\n"); // fairy's foest
			printf("[4]나가기\n"); // exit
			scanf("%d",&c);

			//[LV1~LV2]goblin's forest 
			if(c == 1)
			{
             	monster = rand() % 3+1;
				system("cls");
				printf("던전 입장 중...");
				Sleep(2500);
				if(monster == 1){printf("[고블린이 나타났습니다! - LV 0]\n");}if(monster == 2){printf("[고블린투척병이 나타났습니다! - LV 1]\n");}if(monster == 3){printf("[고블린십장이 나타났습니다! - LV 2]\n");}
				printf("[1]싸운다\n[2]도망친다\n");
				scanf("%d",&e);

				//싸우자 fight
				if(e == 1)
				{
					//레벨1 고블린 lv.1 goblin
					if(monster == 1)
					{
                      	mobhp = 50;
	                   	mobmhp = 50;
	                   	menu = 0;
						f = 1;
					}

					//레벨2 고블린투척병 lv.2 goblin grenadier
					else if(monster == 2)
					{
                        mobhp = 80;
	                   	mobmhp = 80;
                        menu = 0;
						f = 2;
					}

					//레벨3 고블린십장 lv.3 goblin foreman
					else if(monster == 3)
					{
                        mobhp = 130;
	                   	mobmhp = 130;
                        menu = 0;
						f = 3;
					}
				}

				//도망치자 be on the loose
				if(e == 2)
				{
					system("cls");
					printf("[도망쳤다]\n"); // be one the loose
					Sleep(2000);
					printf("[쿨타임 10초]\n"); // cool time 10s
					Sleep(10000);
					system("cls");
				}

				if(e != 1 && e != 2)
				{
					system("cls");
					printf("[잘못 선택하였습니다]\n"); // wrong choice
					Sleep(1000);
					printf("[쿨타임 10초]\n"); // cool time 10s
					Sleep(10000);
					system("cls");
				}
			}
