		if(menu == 9)
		{
			if(jobs == 1 || jobs == 2)
			{
                    system("cls");
                    printf("[무슨 스킬을 찍으시겠습니까?]\n");
                    printf("[SP : %d]\n",sp);
                    printf("[GOLD : %d]\n",gold);
                    printf("[1]skill name1 <SP 3 , GOLD 2000>\n");
                    printf("[2]skill name2 <SP 5 , GOLD 5000>\n");
                    printf("[3]skill name3 - 각성 <SP 7 , GOLD 20000>\n"); 
                    scanf("%d",&skill);
                    
                    if(skill == 1)
                    {
                             if(sp >= 3)
                             {
                                   if(gold >= 2000)
                                   {
                                           system("cls");
                                           printf("[스킬을 배웠습니다]\n");
                                           twoattack = 1;
                                           sp -= 3;
                                           gold -= 2000;
                                           Sleep(2000);
                                           system("cls");
                                   }
                                   else
                                   {
                                       system("cls");
                                       printf("[골드가 부족합니다]\n");
                                       Sleep(2000); 
                                       system("cls");
                                   }
                             }
                             else
                             {
                                 system("cls");
                                 printf("[스킬포인트가 부족합니다]\n");
                                 Sleep(2000); 
                                 system("cls");
                             }
                    }
                    
