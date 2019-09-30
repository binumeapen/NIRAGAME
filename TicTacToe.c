/* CREATED BY BINU M EAPEN 27/09/2019
 * NIRA GAME */
#include <stdio.h>
#include <stdlib.h>


//GAME STARTS
void start()
{
	int i,j;
	char NirArr[3][3];
	NirArr[0][0]='1';
	NirArr[0][1]='2';
	NirArr[0][2]='3';
	NirArr[1][0]='4';
	NirArr[1][1]='5';
	NirArr[1][2]='6';
	NirArr[2][0]='7';
	NirArr[2][1]='8';
	NirArr[2][2]='9';
	system("clear");
	printf("%c-----%c-----%c\n",NirArr[0][0],NirArr[0][1],NirArr[0][2]);
	printf("| \\   |  / | \n");
	printf("|  \\  | /  | \n");
	printf("%c-----%c-----%c\n",NirArr[1][0],NirArr[1][1],NirArr[1][2]);
	printf("|   / | \\  | \n");
	printf("|  /  |  \\ | \n");
	printf("%c-----%c-----%c\n",NirArr[2][0],NirArr[2][1],NirArr[2][2]);
	
}
	
void main()
{ 	//int a,b,c;
	char  n1[15],n2[15];
	char quit;
	printf("ENTER THE NAME OF PLAYER 1 ");
	scanf("%s",&n1);
	printf("ENTER THE NAME OF PLAYER 2 ");
	scanf("%s",&n2);
	printf("%s HAS BEEN ASSIGNED WITH 'O' AND %s WITH 'X'\n",n1,n2);
	printf("PRESS S TO START THE GAME AND Q TO QUIT THE GAME\n");
	scanf(" %c",&quit); //You have  to add a white space Before '<here>%c'
	//printf("%c",quit);
	if(quit=='s')
	{
		start();
	}
	else if(quit=='q')
	{
		printf("exited");
	}
	else
	{
		printf("invalid entry");
		
	}
}

