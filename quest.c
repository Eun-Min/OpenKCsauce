if(menu == 6)
		{
			system("cls");
			printf("[����Ʈ ���]\n");
			printf("[1]��� 5���� óġ\n");
			printf("=���� - 300��� 50����ġ=\n");
			printf("[2]������\n");
			scanf("%d",&quest);

			if(quest == 1)
			{
				if(q2 == 5)
				{
					system("cls");
					printf("[����Ʈ�� �Ϸ��Ͽ����ϴ�]\n");
					Sleep(2000);
					printf("[300 ��� 50 ����ġ ȹ��]\n");
					gold += 300;
					exp += 50;
					q = 0;
					q2 = 0;
					starting == 0;
				}
			}
		}
