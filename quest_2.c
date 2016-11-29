
		if(menu == 6)
		{
			system("cls");
			printf("[퀘스트 목록]\n");
			printf("[1]고블린 5마리 처치\n");
			printf("=보상 - 300골드 50경험치=\n");
			printf("[2]나가기\n");
			scanf("%d",&quest);

			if(quest == 1)
			{
				if(q2 == 5)
				{
					system("cls");
					printf("[퀘스트를 완료하였습니다]\n");
					Sleep(2000);
					printf("[300 골드 50 경험치 획득]\n");
					gold += 300;
					exp += 50;
					q = 0;
					q2 = 0;
					starting == 0;
				}
				else
				{
					if(starting == 0)
					{
						system("cls");
						printf("[퀘스트를 (다시)받으시겠습니까?]\n");
						printf("[1]네\n[2]아니요\n");
						scanf("%d",&co);

						if(co == 1)
						{
							starting = 1;
							q = 1; // 1번퀘스트
							q2 = 0; // 잡은 횟수 초기화
							printf("[퀘스트가 시작되었습니다]\n");
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
							printf("[잘못입력하셨습니다]\n");
							Sleep(2000);
							system("cls");
						}
					}
					else
					{
						system("cls");
						printf("[다른 퀘스트가 진행 중입니다]\n");
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
				printf("[잘못입력하셨습니다]\n");
				Sleep(2000);
				system("cls");
			}
        }
