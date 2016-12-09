switch(map[mapNum][i][j]){
case 0: printf("  "); // floor
break;
case 1: TC(0,2); printf(",,"); // grass
break;
case 2: TC(0,6); printf("▒"); // load
break;
case 3: TC(0,10); printf("▥"); // part of home
break;
case 4: TC(0,6); printf("#"); // fences
break;
case 5: TC(0,12); printf("▲"); // roof
break;
case 6: TC(9,11); printf("~~"); // river
break;
case 7: TC(0,9); printf("▼"); // potal
break;
}
TC(0,7);
