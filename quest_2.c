
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
				else
				{
					if(starting == 0)
					{
						system("cls");
						printf("[����Ʈ�� (�ٽ�)�����ðڽ��ϱ�?]\n");
						printf("[1]��\n[2]�ƴϿ�\n");
						scanf("%d",&co);

						if(co == 1)
						{
							starting = 1;
							q = 1; // 1������Ʈ
							q2 = 0; // ���� Ƚ�� �ʱ�ȭ
							printf("[����Ʈ�� ���۵Ǿ����ϴ�]\n");
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
							printf("[�߸��Է��ϼ̽��ϴ�]\n");
							Sleep(2000);
							system("cls");
						}
					}
					else
					{
						system("cls");
						printf("[�ٸ� ����Ʈ�� ���� ���Դϴ�]\n");
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
				printf("[�߸��Է��ϼ̽��ϴ�]\n");
				Sleep(2000);
				system("cls");
			}
        }
