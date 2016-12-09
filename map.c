mapArray[65][35] = {
111111111111111
100202120202011
111111111111111
}
for(i=0;i<3;i++) { // column
for(j=0;j<16;j++) { // ROW
if(mapArray[i][j] == 0) printf(" ");
else if(mapArray[i][j] == 1) printf("■");
else if(mapArray[i][j] == 2) printf("♠");
else if(mapArray[i][j] == 3) printf(",,");
}
}
