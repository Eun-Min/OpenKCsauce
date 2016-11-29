		if(menu == 4)
		{
			system("cls");
			printf("[포션을 구입하시겠습니까?]\n");
			printf("[1]1개 - 200골드\n");
			printf("[2]5개 = 900골드\n");
			printf("[3]나가기\n");
			scanf("%d",&h);

			if(h == 1)
			{
                if(potion <= 5)
                {
				if(gold >= 200)
				{
					system("cls");
					printf("[포션 1개를 구입하였습니다]");
					potion += 1;
					gold -= 200;
					Sleep(2000);
					system("cls");
				}
				else
				{
					system("cls");
					printf("[돈이 부족합니다]");
					Sleep(2000);
					system("cls");
				}
                }
                else
                {
                    system("cls");
                    printf("[5개 이상 소지시 구입이 불가능 합니다]\n");
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
					printf("[포션 5개를 구입하였습니다]");
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
					printf("[돈이 부족합니다]");
					Sleep(2000);
					system("cls");
				}
                }
                else
                {
                    system("cls");
                    printf("[5개 이상 소지시 구입이 불가능 합니다]\n");
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
				printf("[잘못입력하셨습니다]");
				Sleep(2000);
				system("cls");
			}
		}
