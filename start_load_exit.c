// ** start_load_exit


printf("[1.시작하기]\n[2.불러오기]\n[3.종료하기]\n");
	scanf("%d",&a);

	if(a == 1)
	{
		system("cls");
		Sleep(2000);
		printf("게임을 불러옵니다.\n");
		Sleep(1000);
		system("cls");
		printf("게임을 불러옵니다..\n");
		Sleep(1000);
		system("cls");
		printf("게임을 불러옵니다...\n");
		Sleep(1000);
		system("cls");
		printf("게임을 불러옵니다....\n");
		Sleep(1000);
		system("cls");
		printf("게임을 불러옵니다.....\n");
		Sleep(1000);
		system("cls");
		Sleep(1000);
		level = 1;
		hp = 100;
		mhp = 100;
		str = 10;
		dex = 10;
		exp = 0;
		weapon = 0;
		armor = 0;
		gold = 2000;
		b = 1;
		a = 0;
		f = 0;
		lev = 0;
		potion = 0;
		starting = 0;
		job = 0;
		sp = 0;
	}
	else
	{
		void exit();
	}
	
	if(a == 2)
    {
         printf("[저장했을 때 얻은 코드를 입력해주세요]\n");
         scanf("%d",&load);
	}
	

