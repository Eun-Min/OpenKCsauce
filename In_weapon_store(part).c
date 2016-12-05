if(menu == 2){
	system("cls");
	Sleep(1000);
	printf("[entering in weapon store.]\r");
	Sleep(1000);
	printf("[entering in weapon store..]\r");
	Sleep(1000);       
	printf("[entering in weapon store...]\r");
	Sleep(1000);
		
	npc1 = rand() % 3+1;
	if(npc1 == 1){printf("[NPC of weapon : Welcome.]\n");}
	if(npc1 == 2){printf("[NPC of weapon : I sell only best of best weapons in my store.]\n");}
	if(npc1 == 3){printf("[NPC of weapon : If you don't have money at all, get out of here.]\n");}
	printf("[1]허름한검<1level> - 1000Gold\n"); // humble sword<lv.1> - 1000Gold
	printf("[2]쓸만한검<3level> - 2500Gold\n"); // useful sword<lv.3> - 2500Gold
	printf("[3]브론즈소드<5level> - 3800Gold\n"); // bronze sword<lv.5> - 3800Gold
	printf("[4]아이언소드<8level> - 5200Gold\n"); // Iron sword<lv.8> - 5200Gold
	printf("[5]아만다디움소드<10level> - 7500Gold\n");  // Amantadium sword<lv.10> - 7500Gold
	printf("[6]exit\n"); // Exit
	scanf("%d",&store1);
			
	if(store1 == 1)
	{
	if(gold >= 1000)
	{
	if(level >= 1)
	{
	system("cls");
	printf("[buying weapons...]\n");
	Sleep(3000);
	printf("[NPC of weapon : Thank you for buying it. Bye buddy!]\n");
	gold -= 1000;
	str = 15;
	weapon = 1;
	Sleep(2000);
	system("cls");
	}
	else
	{
	system("cls");
	printf("[you need more levels.]\n");
	Sleep(2000);
	system("cls");
	}
	}
	else
	{
	system("cls");
	printf("[NPC of weapon : If you don't have money at all, get out of here!]\n");
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
					printf("[buying weapons...]\n");
					Sleep(3000);
					printf("[NPC of weapon : Thank you for buying it. Bye buddy!!]\n");
					gold -= 2500;
					str = 21;
					weapon = 2;
					Sleep(2000);
					system("cls");
					}
					else
					{
						system("cls");
						printf("[you need more levels.]\n");
						Sleep(2000);
						system("cls");
					}
				}
				else
				{
					system("cls");
					printf("[NPC of weapon : If you don't have money at all, get out of here!]\n");
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
					printf("[buying weapons...]\n");
					Sleep(3000);
					printf("[NPC of weapon : Thank you for buying it. Bye buddy!]\n");
					gold -= 3800;
					str = 30;
					weapon = 3;
					Sleep(2000);
					system("cls");
					}
					else
					{
						system("cls");
						printf("[you need more levels.]\n");
						Sleep(2000);
						system("cls");
					}
				}
				else
				{
					system("cls");
					printf("[NPC of weapon : If you don't have money at all, get out of here!]\n");
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
					printf("[buying weapons...]\n");
					Sleep(3000);
					printf("[NPC of weapon : Thank you for buying it. Bye buddy!]\n");
					gold -= 5200;
					str = 38;
					weapon = 4;
					Sleep(2000);
					system("cls");
					}
					else
					{
						system("cls");
						printf("[you need more levels.]\n");
						Sleep(2000);
						system("cls");
					}
				}
				else
				{
					system("cls");
					printf("[NPC of weapon : If you don't have money at all, get out of here!]\n");
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
					printf("[buying weapons...]\n");
					Sleep(3000);
					printf("[NPC of weapon : Thank you for buying it. Bye buddy!]\n");
					gold -= 7500;
					str = 45;
					weapon = 5;
					Sleep(2000);
					system("cls");
					}
					else
					{
						system("cls");
						printf("[you need more levels.]\n");
						Sleep(2000);
						system("cls");
					}
				}
				else
				{
					system("cls");
					printf("[NPC of weapon : If you don't have money at all, get out of here!]\n");
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
				printf("[Wrong Choice.]\n");
				system("cls");
			}
		}
