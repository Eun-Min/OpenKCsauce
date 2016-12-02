#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<fcntl.h>
void main()
{
z:clrscr();
char a[20];

cout<<"Classmate Inventory";

/*This program is supposed to show
the picture of my classmate when i
choose their name from the choices*/

cout<<"\n\nclassmate a, classmate b, classmate c, classmate d, classmate e";
cout<<"\nnote: these are the only names accepted.please choose from these names";
cout<<"\n\nChoose the letter of the name of the person you want to view";
cin>>a;

if(a[20]=='a')
{goto aa;}

if(a[20]=='b')
{goto bb;}

if(a[20]=='c')
{goto cc;}

if(a[20]=='d')
{goto dd;}

if(a[20]=='e')
{goto ee;}

/*This is where i need help, i want
to show dsthe picture of classmate a
but i don't know how to do it. i dont
know how to add pictures to my c++
program.. by the way. its turbo c++ ide 3.0 its dos based*/

switch(a[20])
{
aa:
case 'a':
/*show the picture of classmate a*/
break;

bb:
case 'b':
/*show the picture of classmate b*/
break;

cc:
case 'c':
/*show the picture of classmate c*/
break;

dd:
case 'd':
/*show the picture of classmate d*/
break;

ee:
case 'e':
/*show the picture of classmate e*/
break;

goto z;
}

getch();
}
