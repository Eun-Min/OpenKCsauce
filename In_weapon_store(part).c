if(menu == 2)
		{
			system("cls");
			Sleep(1000);
			printf("[무기상점 입장중.]\r");
			Sleep(1000);
			printf("[무기상점 입장중..]\r");
			Sleep(1000);
			printf("[무기상점 입장중...]\r");
			Sleep(1000);
			
			npc1 = rand() % 3+1;
			if(npc1 == 1){printf("[무기상인 : 어서오시게나.]\n");} if(npc1 == 2){printf("[무기상인 : 내 가게 무기는 최고의 무기들만 있지]\n");} if(npc1 == 3){printf("[무기상인 : 만약 돈이 없다면 썩 꺼지게나.]\n");}
			printf("[1]허름한검<1레벨> - 1000골드\n");
			printf("[2]쓸만한검<3레벨> - 2500골드\n");
			printf("[3]브론즈소드<5레벨> - 3800골드\n");
			printf("[4]아이언소드<8레벨> - 5200골드\n"); 
			printf("[5]아만다디움소드<10레벨> - 7500골드\n"); 
			printf("[6]나가기\n");
			scanf("%d",&store1);
			
			if(store1 == 1)
			{
				if(gold >= 1000)
				{
					if(level >= 1)
					{
					system("cls");
					printf("[무기구입중...]\n");
					Sleep(3000);
					printf("[무기상인 : 사줘서 고맙네. 잘가게나 친구!]\n");
					gold -= 1000;
					str = 15;
					weapon = 1;
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
					printf("[무기상인 : 돈없으면 이가게에서 당장 나가!]\n");
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
					printf("[무기구입중...]\n");
					Sleep(3000);
					printf("[무기상인 : 사줘서 고맙네. 잘가게나 친구!]\n");
					gold -= 2500;
					str = 21;
					weapon = 2;
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
					printf("[무기상인 : 돈없으면 이가게에서 당장 나가!]\n");
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
					printf("[무기구입중...]\n");
					Sleep(3000);
					printf("[무기상인 : 사줘서 고맙네. 잘가게나 친구!]\n");
					gold -= 3800;
					str = 30;
					weapon = 3;
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
					printf("[무기상인 : 돈없으면 이가게에서 당장 나가!]\n");
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
					printf("[무기구입중...]\n");
					Sleep(3000);
					printf("[무기상인 : 사줘서 고맙네. 잘가게나 친구!]\n");
					gold -= 5200;
					str = 38;
					weapon = 4;
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
					printf("[무기상인 : 돈없으면 이가게에서 당장 나가!]\n");
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
					printf("[무기구입중...]\n");
					Sleep(3000);
					printf("[무기상인 : 사줘서 고맙네. 잘가게나 친구!]\n");
					gold -= 7500;
					str = 45;
					weapon = 5;
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
					printf("[무기상인 : 돈없으면 이가게에서 당장 나가!]\n");
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
				printf("[잘못된 선택입니다]\n");
				system("cls");
			}
		}
