		if(menu == 4)
		{
			system("cls");
			printf("[Do you want to buy potions?]\n");
			printf("[1]1 - 200GOLD\n");
			printf("[2]5 = 900GOLD\n");
			printf("[3]EXIT\n");
			scanf("%d",&h);

			if(h == 1)
			{
                if(potion <= 5)
                {
				if(gold >= 200)
				{
					system("cls");
					printf("[you bought one potion.]");
					potion += 1;
					gold -= 200;
					Sleep(2000);
					system("cls");
				}
				else
				{
					system("cls");
					printf("[you don't have enough money.]");
					Sleep(2000);
					system("cls");
				}
                }
                else
                {
                    system("cls");
                    printf("[If having more than five potions, you can't buy any more.]\n");
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
					printf("[you bought five potions.]");
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
					printf("[you don't have enough money.]");
					Sleep(2000);
					system("cls");
				}
                }
                else
                {
                    system("cls");
                    printf("[If having more than five potions, you can't buy any more.]\n");
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
				printf("[WRONG CHOICE]");
				Sleep(2000);
				system("cls");
			}
		}
