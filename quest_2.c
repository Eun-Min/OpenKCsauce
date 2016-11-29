
		if(menu == 6)
		{
			system("cls");
			printf("[Quest list]\n");
			printf("[1]Kill five Goblins\n");
			printf("=Compensation- 300GOLD 50EX=\n");
			printf("[2]EXIT\n");
			scanf("%d",&quest);

			if(quest == 1)
			{
				if(q2 == 5)
				{
					system("cls");
					printf("[Complete the quest.]\n");
					Sleep(2000);
					printf("[300 GOLD 50 EX ]\n");
					gold += 300;
					exp += 50;
					q = 0;
					q2 = 0;
					starting == 0;
		
				else
				{
					if(starting == 0)
					{
						system("cls");
						printf("[Do you want to get this quest again?]\n");
						printf("[1]Yes\n[2]No\n");
						scanf("%d",&co);

						if(co == 1)
						{
							starting = 1;
							q = 1; // 1번퀘스트
							q2 = 0; // 잡은 횟수 초기화
							printf("[The quest is started.]\n");
							Sleep(2000);
							system("cls");
						}
						
						if(co == 2)
						{
							system("cls");
						}

						if(co == 1 && co == 2)
						{
							system("cls");
							printf("[WRONG INPUT]\n");
							Sleep(2000);
							system("cls");
						}
					}
					else
					{
						system("cls");
						printf("[Other quest has already been doing.]\n");
						Sleep(2000);
						system("cls");
					}
				}
			}

			if(quest == 2)
			{
			}

			if(quest == 1 && quest == 2)
			{
				system("cls");
				printf("[WRONG INPUT]\n");
				Sleep(2000);
				system("cls");
			}
        }
