#include <iostream>
#include <stdio.h>
#include <stdib.h>
#include <conio.h>
#include <windows.h>
// 아 모르겟다..
using namespace std;

void gotoxy(int x, int y);

void main(){

	char ch;
	int x,y;
	int i;
	int j;
	int nEndcount = 0;

	char b[8][15] ={
		0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
		0,1,5,1,5,1,5,1,5,5,5,5,5,5,1,
		0,1,5,1,1,1,1,1,1,1,1,1,1,1,1,
		0,1,5,1,5,1,5,5,5,5,5,1,1,5,1,
		0,1,5,5,5,1,5,5,1,1,5,1,5,5,1,
		0,1,5,1,1,1,5,5,1,5,5,1,1,5,1,
		0,3,5,1,1,5,5,5,5,5,5,5,5,5,1,
		1,1,1,1,1,1,1,1,1,1,1,1,1,1,1, };

	x=1;
	y=6;
	do{
		nEndcount =0;
		gotoxy(0,0);

		}
		for(i=0,i<8,i=i+1){
			for(j=0; j<15; j=j+1){
				switch(b[i][j]){

				case 0:
				cout << " ";
				break;

				case 1:
				cout << "□";
				break;

				case 3:
				cout << "○" ;

				case 5:
				{
					cout << "*";
					nEndcount++;
				}

				break;

				}
				cout << endl;
			}
		}
	}
