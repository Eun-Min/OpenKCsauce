if(select=='1')
			{
				mainroop=0;
			}
			else if(select=='2')
			{
				system("cls");
				chogi();
				system("cls");
				if (loadgame()==1)
					main();
				inter();
				getch();
			}
			else if(select=='3')
			{
				exit(0);
			}
      	return 0;
}

//내정 관련
int ininjob (void)
{
	system("cls");
	printf("\n   ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
	printf("                     [%d년]   [%d/4분기]   [행동치 %d]",year,tpart,tp);
	printf("\n   ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
	mainmap();
	printf("┏━━━━━━━━━━━━━━━━━━━━━━┓\n");
	printf("┃         [1] 복지  [2] 개발  [3] 뒤로       ┃\n");
	printf("┗━━━━━━━━━━━━━━━━━━━━━━┛\n");

	select=getch();
	if (select=='1')
		bokji();
	else if (select=='2')
		gaibal();
	else
		return 0;

	return 0;
}

//복지 함수
int bokji (void)
{
	if (tp==0)
	{
		printf("   ▷ 행동력이 부족합니다");getch();
		return 0;
	}
	printf("\n어느 성의 복지를 실행 하겠습니까?\n");

	mapguide();

	select=getch();

	if(select=='1')
		select=0;
	else if(select=='2')
		select=1;
	else if(select=='3')
		select=2;
	else if(select=='4')
		select=3;
	else if(select=='5')
		select=4;
	else if(select=='6')
		select=5;
	else if(select=='7')
		select=6;
	else if(select=='8')
		select=7;
	else if(select=='9')
		select=8;
	else
	{
		printf("   ▷ 잘못 입력 하셨습니다");getch();
		return 0;
	}

	if (m[select].mind==120)
	{
		printf("   ▷ 최대치 입니다.");getch();
		return 0;
	}

	if (m[select].own==1)
	{
		if (gold>=200)
		{
			printf("   ▶ 복지를 수행 합니다\n\n");
			gold=gold-200;
			printf("   ▷ 금이 200원 줄었습니다.\n");
			m[select].mind=m[select].mind+5;
			printf("   ▷ 민심이 +5올랐습니다!\n\n");
			printf("   ▷ %s의 민심이 [%d]입니다\n",m[select].mapname,m[select].mind);
			printf("   ▷ %s의 금이 [%d]입니다\n",m[select].mapname,gold);
			tp--;
			getch();
		}
		else
		{
			printf("   ▷ 돈이 부족합니다\n");
			getch();
		}
	}

	else
	{
		printf ("   ▷ 당신의 지역이 아닙니다\n");
		getch();
	}
	return 0;
}


//개발 함수
int gaibal (void)
{
	if (tp==0)
	{
		printf("   ▷ 행동력이 부족합니다");getch();
		return 0;
	}

	if (gold<1000)
	{
		printf("   ▷ 금이 부족합니다");getch();
		return 0;
	}

	printf("\n어느 성의 개발을 실행 하겠습니까?\n");

	mapguide();

	select=getch();

	if(select=='1')
		select=0;
	else if(select=='2')
		select=1;
	else if(select=='3')
		select=2;
	else if(select=='4')
		select=3;
	else if(select=='5')
		select=4;
	else if(select=='6')
		select=5;
	else if(select=='7')
		select=6;
	else if(select=='8')
		select=7;
	else if(select=='9')
		select=8;
	else
	{
		printf("   ▷ 잘못 입력 하셨습니다");getch();
		return 0;
	}
	if (m[select].own==1)
	{
		if (gold>=200)
		{
			printf("   ▶ 개발을 수행 합니다\n\n");
			gold=gold-1000;
			printf("   ▷ 금이 1000원 줄었습니다.\n");
			m[select].civil=m[select].civil+1000;
			printf("   ▷ 인구가 +1000올랐습니다!\n\n");
			printf("   ▷ %s의 인구가 [%d]입니다\n",m[select].mapname,m[select].civil);
			printf("   ▷ %s의 금이 [%d]입니다\n",m[select].mapname,gold);
			tp--;
			getch();
		}
		else
		{
			printf("   ▷ 돈이 부족합니다\n");
			getch();
		}
	}

	else
	{
		printf ("   ▷ 당신의 지역이 아닙니다\n");
		getch();

	}
	return 0;
}
//외교 함수
int inoutt (void)
{
	system("cls");
	printf("\n   ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
	printf("                     [%d년]   [%d/4분기]   [행동치 %d]",year,tpart,tp);
	printf("\n   ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
	mainmap();
	printf("┏━━━━━━━━━━━━━━━━━━━━━━┓\n");
	printf("┃    [1] 군사혼란                [2] 뒤로    ┃\n");
	printf("┗━━━━━━━━━━━━━━━━━━━━━━┛\n");

	select=getch();
	if(select=='1')
	{
		armyfuse();
	}
	else
		return 0;

	return 0;
}
//군사 혼란 함수
int armyfuse (void)
{
	int i=1,seltar,tarcnt;

	if (tp<1)
	{
		printf("   ▷ 행동력이 부족합니다");getch();
		return 0;
	}

	if (gold<500)
	{
		printf("   ▷ 자금이 부족합니다");getch();
		return 0;
	}




	wartarget();
	seltar=getch();
	if(seltar=='1')
		seltar=0;
	else if(seltar=='2')
		seltar=1;
	else if(seltar=='3')
		seltar=2;
	else if(seltar=='4')
		seltar=3;
	else if(seltar=='5')
		seltar=4;
	else if(seltar=='6')
		seltar=5;
	else if(seltar=='7')
		seltar=6;
	else if(seltar=='8')
		seltar=7;
	else if(seltar=='9')
		seltar=8;
	else
	{
		printf("   ▷ 잘못 입력 하셨습니다");getch();
		return 0;
	}

	tarcnt=0;

	for(i=0;i<9;i++)
	{
		if (m[i].own==1)
		{
			tarcnt++;
		}
	}

	if (seltar<tarcnt)
	{
		printf("   ▷ 자신의 지역 입니다\n");getch();
		return 0;
	}

	if (m[seltar-1].own==1)
	{
		printf("   ▷ %s에 군사혼란을 실행합니다\n",m[seltar].mapname);
	}
	else
	{
		printf("   ▷ 실행 가능한 지역이 아닙니다\n");getch();
		return 0;
	}

	m[seltar].power=m[seltar].power-2;
	gold=gold-500;
	tp--;
	printf("   ▷ 적군사의 사기가 약간 떨어졌습니다.\n");
	printf("   ▷ 자금이 %d가 되었습니다\n",gold);
	getch();
	return 0;
}

//시스템 메뉴 함수
int insystem (void)
{
	mainroop=1;
	while(mainroop==1)
	{
		system ("cls");
		printf("\n\n\n\n");
		printf(" 			     ┏━━━━━━━━━━━━━━━━━━━━┓\n");
		printf("			     ┃                    ┃\n");
		printf("			     ┃      ◆ 메 뉴 ◆     ┃\n");
		printf("			     ┃                    ┃\n");
		printf("			     ┠─────────━━━━━━━━━ ─┨\n");
		printf("			     ┃                    ┃\n");
		printf("			     ┃     [1] 저 장      ┃\n");
		printf("			     ┃                    ┃\n");
		printf("			     ┃    [2] 로    드    ┃\n");
		printf("			     ┃                    ┃\n");
		printf("	 		     ┃    [3] 종    료    ┃\n");
		printf("			     ┃                    ┃\n");
		printf("			     ┃    [4] 게임으로    ┃\n");
		printf("			     ┃                    ┃\n");
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

int savegame (void) //세이브 함수
{
	int i;
	char snm1[7],snm2[7],snm3[7];
	FILE *savman,*savmap,*lman1,*lman2,*lman3;

	if((lman1=fopen("ssavman.s01","r"))==NULL)
	{
		strcpy(snm1,"EMPTY");
	}
	else
	{
		fscanf(lman1,"%s",snm1);
		fclose(lman1);
	}
