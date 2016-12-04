if(menu == 7)
        {
                system("cls");
                printf("[what job do you want to have?]\n");
                printf("[1]전사 - 1차전직[5level]\n[2]파이터 - 각성[20level]\n[3]궁수 - 1차전직[5level]\n[4]헌터 - 각성[20level]\n[5]마법사 - 1차전직[5level]\n[6]힐러 - 각성[20level");
                scanf("%d",&jobs);
                         
                if(jobs == 1)
                {
                        if(level >= 5)
                        {
                                 system("cls");
                                 printf("[전사로 전직하였습니다]\n");
                                 job = 1;
                                 Sleep(2000);
                                 printf("[스킬을 찍으실 수 있습니다]\n"); 
                        }
                        else
                        {
                            system("cls");
                            printf("[you need more levels]\n");
                            Sleep(2000);
                            system("cls");
                        } 
                }            
                
                if(jobs == 2)
                {
                        if(level >= 20)
                        {
							if(job == 1)
							{
                                 system("cls");
                                 printf("[파이터로 각성하였습니다]\n");
                                 job = 2;
                                 Sleep(2000);
                                 printf("[각성스킬을 찍으실 수 있습니다]\n"); 
							}
							else
							{
								 system("cls");
								 printf("[Change job first.]\n");
								 Sleep(2000);
								 system("cls");
							}
                        }
                        else
                        {
                            system("cls");
                            printf("[you need more levels]\n");
                            Sleep(2000);
                            system("cls");
                        } 
                }      
                
                if(jobs == 3)
                {
                        if(level >= 5)
                        {
                                 system("cls");
                                 printf("[궁수로 전직하였습니다]\n");
                                 job = 3;
                                 Sleep(2000);
                                 printf("[스킬을 찍으실 수 있습니다]\n"); 
                        }
                        else
                        {
                            system("cls");
                            printf("[you need more levels]\n");
                            Sleep(2000);
                            system("cls");
                        } 
                }       
                
                if(jobs == 4)
                {
                        if(level >= 20)
                        {
							if(job == 3)
							{
                                 system("cls");
                                 printf("[헌터로 각성하였습니다]\n");
                                 job = 4;
                                 Sleep(2000);
                                 printf("[각성스킬을 찍으실 수 있습니다]\n"); 
							}
							else
							{
								 system("cls");
								 printf("[]\n");
								 Sleep(2000);
								 system("cls");
							}
                        }
                        else
                        {
                            system("cls");
                            printf("[you need more levels]\n");
                            Sleep(2000);
                            system("cls");
                        } 
                }     
                
                if(jobs == 1 && jobs == 2 && jobs == 3 && jobs == 4)
                {
                        system("cls");
                        printf("[wrong choice]");
                        Sleep(2000);
                        system("cls");
                } 
        }
