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
			}
		}
