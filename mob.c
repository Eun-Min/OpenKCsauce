// 몬스터 정보
{
		printf("[몬스터 체력 : %d / %d]\n",mobhp,mobmhp);
		printf("[나의 체력 : %d / %d]\n",hp,mhp);
		printf("[포션 개수 : %d]\n",potion);
		printf("[1]공격\n[2]도망\n[3]포션\n"); if(job >= 1){printf("[4]스킬\n");}
		scanf("%d",&choose);
}