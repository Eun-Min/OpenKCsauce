if(menu == 3)
		{
			system("cls");
			Sleep(1000);
			printf("[������ ������.]\r"); //entering the armor store
			Sleep(1000);
			printf("[������ ������..]\r");
			Sleep(1000);
			printf("[������ ������...]\r");
			Sleep(1000);
			
			npc2 = rand() % 3+1;
			if(npc2 == 1){printf("[������ : �������~]\n");} // Welcome
			if(npc2 == 2){printf("[������ : ���� ���Դ� �ְ��� ���� �ڶ��Ѵ�ϴ�]\n");} // I deal with best of best protetive gear in our store.
			if(npc2 == 3){printf("[������ : ���� ���� ���ٸ� �����ּ���]\n");} // if having no money, get out of here
	
			printf("[1]���<1����> - 3000���\n");
			printf("[2]�㸧�� ����<3����> - 5500���\n");
			printf("[3]������ ����<5����> - 9000���\n"); // useful armor
			printf("[4]ö ����<8����> - 12000���\n"); // iron armor
			printf("[5]������\n");
			scanf("%d",&store2);
			
			if(store2 == 1)
			{
				if(gold >= 3000)
				{
					if(level >= 1)
					{
					system("cls");
					printf("[��������...]\n");
					Sleep(3000);
					printf("[������ : �����ϴ�. �ȳ���������~]\n"); //Thank you. HAVE A nice day!
					gold -= 3000;
					dex = 15;
					armor = 1;
					Sleep(2000);
					system("cls");
					}
					else
					{
						system("cls");
						printf("[������ ���� �ʽ��ϴ�]\n");
						Sleep(2000);
						system("cls");
					}
				}
				else
				{
					system("cls");
					printf("[������ : ���� �����Ͻó׿�]\n");
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
					printf("[��������...]\n");
					Sleep(3000);
					printf("[������ : �����ϴ�. �ȳ���������~]\n");
					gold -= 5500;
					dex = 21;
					armor = 2;
					Sleep(2000);
					system("cls");
					}
					else
					{
						system("cls");
						printf("[������ ���� �ʽ��ϴ�]\n");
						Sleep(2000);
						system("cls");
					}
				}
				else
				{
					system("cls");
					printf("[������ : ���� �����Ͻó׿�]\n");
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
					printf("[��������...]\n");
					Sleep(3000);
					printf("[������ : �����ϴ�. �ȳ���������~]\n");
					gold -= 9000;
					dex = 30;
					armor = 3;
					Sleep(2000);
					system("cls");
					}
					else
					{
						system("cls");
						printf("[������ ���� �ʽ��ϴ�]\n");
						Sleep(2000);
						system("cls");
					}
				}
				else
				{
					system("cls");
					printf("[������ : ���� �����Ͻó׿�]\n");
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
					printf("[��������...]\n");
					Sleep(3000);
					printf("[������ : �����ϴ�. �ȳ���������~]\n");
					gold -= 12000;
					dex = 35;
					armor = 4;
					Sleep(2000);
					system("cls");
					}
					else
					{
						system("cls");
						printf("[������ ���� �ʽ��ϴ�]\n");
						Sleep(2000);
						system("cls");
					}
				}
				else
				{
					system("cls");
					printf("[������ : ���� �����Ͻó׿�]\n");
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
				printf("[�߸��� �����Դϴ�]\n");
				system("cls");
			}
		}

