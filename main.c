#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


#define N 6
int gameboard(int a[N][N])
{
	int i,j;
	int *ptr;
	
	ptr = &a[0][0];
	
	printf("    0    1    2    3    4    5    ");
	for(i=0;i<6;i++)
	{
		printf("+----+----+----+----+----+----+\n");
		printf(" %c |", i+'a');
		
		for(j=0;j<6;j++)
		{
			unsigned char k;
			if(k==1)
				printf("●|"); 
			else if(k==2)
				printf("○|");
			else if(k==0)				// empty : 0 , black : 1, white : 2
				printf("X |"); 
			else
				printf("  |");
		}
		purtchar('\n');
	}
	printf("+----+----+----+----+----+----+\n");
}




void main(int argc, char *argv[]) {
	
	int gameboardinitboard[N][N] = //게임초기화   
	{
		
		{3, 3, 3, 3, 3, 3},     
		{3, 3, 3, 3, 3, 3},			
		{3, 3, 1, 2, 3, 3},	
		{3, 3, 2, 1, 3, 3},	
		{3, 3, 3, 3, 3, 3},
		{3, 3, 3, 3, 3, 3},	
		
			
	};
	
	
void putboard(gameboard, int put, int turn)
{
	int p,t;
	int ant_i = (turn^0*3);
	int dxy[N] = {}
		
}	
	

	

	return 0;
}
