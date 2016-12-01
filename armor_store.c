// ** Armor store

if(menu == 3)
		{
			system("cls");
			Sleep(1000);
			printf("[entering the armor store.]\r"); 
			Sleep(1000);
			printf("[entering the armor store..]\r");
			Sleep(1000);
			printf("[entering the armor store...]\r");
			Sleep(1000);
			
			npc2 = rand() % 3+1;
			if(npc2 == 1){printf("[merchant of armor store : Welcome~]\n");}
			if(npc2 == 2){printf("[merchant of armor store : I deal with best of best protetive gear in our store.]\n");}
			if(npc2 == 3){printf("[merchant of armor store : if having no money, get out of here]\n");}
	
			printf("[1]평상복<1level> - 3000GOLD\n");
			printf("[2]허름한 갑옷<3level> - 5500GOLD\n");
			printf("[3]쓸만한 갑옷<5level> - 9000GOLD\n"); // useful armor
			printf("[4]철 갑옷<8level> - 12000GOLD\n"); // iron armor
			printf("[5]Exit\n");
			scanf("%d",&store2);
			
			if(store2 == 1)
			{
				if(gold >= 3000)
				{
					if(level >= 1)
					{
					system("cls");
					printf("[buying protective gear...]\n");
					Sleep(3000);
					printf("[merchant of armor store : Thank you. HAVE A nice day! ]\n"); 
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
					printf("[merchant of armor store : 돈이 부족하시네요]\n");
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
					printf("[merchant of armor store : Thank you. HAVE A nice day!]\n");
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
					printf("[merchant of armor store : 돈이 부족하시네요]\n");
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
					printf("[merchant of armor store : Thank you. HAVE A nice day!]\n");
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
					printf("[merchant of armor store : 돈이 부족하시네요]\n");
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
					printf("[merchant of armor store : Thank you. HAVE A nice day!]\n");
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
					printf("[merchant of armor store : 돈이 부족하시네요]\n");
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

