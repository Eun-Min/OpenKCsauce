if(menu == 3)
		{
			system("cls");
			Sleep(1000);
			printf("[방어구상점 입장중.]\r"); //entering the armor store
			Sleep(1000);
			printf("[방어구상점 입장중..]\r");
			Sleep(1000);
			printf("[방어구상점 입장중...]\r");
			Sleep(1000);
			
			npc2 = rand() % 3+1;
			if(npc2 == 1){printf("[방어구상인 : 어서오세요~]\n");} // Welcome
			if(npc2 == 2){printf("[방어구상인 : 저희 가게는 최고의 방어구를 자랑한답니다]\n");} // I deal with best of best protetive gear in our store.
			if(npc2 == 3){printf("[방어구상인 : 만약 돈이 없다면 나가주세요]\n");} // if having no money, get out of here
	
			printf("[1]평상복<1레벨> - 3000골드\n");
			printf("[2]허름한 갑옷<3레벨> - 5500골드\n");
			printf("[3]쓸만한 갑옷<5레벨> - 9000골드\n"); // useful armor
			printf("[4]철 갑옷<8레벨> - 12000골드\n"); // iron armor
			printf("[5]나가기\n");
			scanf("%d",&store2);
			
			if(store2 == 1)
			{
				if(gold >= 3000)
				{
					if(level >= 1)
					{
					system("cls");
					printf("[방어구구입중...]\n");
					Sleep(3000);
					printf("[방어구상인 : 고맙습니다. 안녕히가세요~]\n"); //Thank you. HAVE A nice day!
					gold -= 3000;
					dex = 15;
					armor = 1;
					Sleep(2000);
					system("cls");
					}
					else
					{
						system("cls");
						printf("[레벨이 맞지 않습니다]\n");
						Sleep(2000);
						system("cls");
					}
				}
				else
				{
					system("cls");
					printf("[방어구상인 : 돈이 부족하시네요]\n");
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
					printf("[방어구구입중...]\n");
					Sleep(3000);
					printf("[방어구상인 : 고맙습니다. 안녕히가세요~]\n");
					gold -= 5500;
					dex = 21;
					armor = 2;
					Sleep(2000);
					system("cls");
					}
					else
					{
						system("cls");
						printf("[레벨이 맞지 않습니다]\n");
						Sleep(2000);
						system("cls");
					}
				}
				else
				{
					system("cls");
					printf("[방어구상인 : 돈이 부족하시네요]\n");
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
					printf("[방어구구입중...]\n");
					Sleep(3000);
					printf("[방어구상인 : 고맙습니다. 안녕히가세요~]\n");
					gold -= 9000;
					dex = 30;
					armor = 3;
					Sleep(2000);
					system("cls");
					}
					else
					{
						system("cls");
						printf("[레벨이 맞지 않습니다]\n");
						Sleep(2000);
						system("cls");
					}
				}
				else
				{
					system("cls");
					printf("[방어구상인 : 돈이 부족하시네요]\n");
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
					printf("[방어구구입중...]\n");
					Sleep(3000);
					printf("[방어구상인 : 고맙습니다. 안녕히가세요~]\n");
					gold -= 12000;
					dex = 35;
					armor = 4;
					Sleep(2000);
					system("cls");
					}
					else
					{
						system("cls");
						printf("[레벨이 맞지 않습니다]\n");
						Sleep(2000);
						system("cls");
					}
				}
				else
				{
					system("cls");
					printf("[방어구상인 : 돈이 부족하시네요]\n");
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
				printf("[잘못된 선택입니다]\n");
				system("cls");
			}
		}

