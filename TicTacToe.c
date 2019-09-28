/* CREATED BY BINU M EAPEN 27/09/2019
 * TIC TAC TOE GAME */
#include <stdio.h>
#include <stdlib.h>


//GAME STARTS
void start()
{
	system("clear");
	printf("welcome");
	
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

