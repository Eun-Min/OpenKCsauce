int insystem (void)
{
	mainroop=1;
	while(mainroop==1)
	{
		system ("cls");
		printf("\n\n\n\n");
		printf(" 			  ┏━━━━━━━━━━━━━━━━━━━━┓\n");
		printf("			     ┃                    ┃\n");
		printf("			     ┃      ◆ 메 뉴 ◆    ┃\n");
		printf("			     ┃                    ┃\n");
		printf("			     ┠─────────━━━━━━━━━ ─┨\n");
		printf("			     ┃                    ┃\n");
		printf("			     ┃     [1] 저 장      ┃\n");
		printf("			     ┃                    ┃\n");
		printf("			     ┃    [2] 로    드    ┃\n");
		printf("			     ┃                    ┃\n");
		printf("	 		     ┃    [3] 종    료    ┃\n");
		printf("			     ┃                   ┃\n");
		printf("			     ┃    [4] 게임으로    ┃\n");
		printf("			     ┃                   ┃\n");
		printf("			     ┃    [5] 메인메뉴    ┃\n");
		printf("			     ┃                   ┃\n");
		printf("			     ┗━━━━━━━━━━━━━━━━━━━┛\n");

		select=getch();
		if (select=='1')
		{
			savegame();
		}
		else if (select=='2')
		{
			if (loadgame()==1)
				return 0;
			getch();
		}
		else if (select=='3')
		{
			printf("\n감사합니다\n");
			getch();
			exit(0);
		}
		else if (select=='4')
		{
			printf("\n게임으로 돌아갑니다\n");
			getch();
			return 0;
		}
		else if (select=='5')
		{
			main();
			return 1;
		}
		else
		{
			printf("\nWrong keyword Press any key");getch();
		}


	}

	return 0;
}
