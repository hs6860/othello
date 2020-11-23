#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


#define N 6

int gameboard(int a[N][N])
{
	int i,j;
	int *ptr;
	
	ptr = &a[0][0];
	printf("     0    1    2    3    4    5    \n");
	for(i=0;i<6;i++)
	{
		printf("   +----+----+----+----+----+----+\n");
		printf(" %c |", i+'a'); //보드의 세로줄 번호  
		
		for(j=0;j<6;j++)
		{
		
			if(ptr==1)
				printf("  1 |"); 
			else if(ptr==2)
				printf("  ○|");
			else if(ptr==0)				// empty : 0 , black : 1, white : 2
				printf("  X |"); 
			else
				printf("    |");
		}
		printf("\n");
	}
	printf("   +----+----+----+----+----+----+\n");
}




void main(int argc, char *argv[]) {
	
	int initboard[N][N] =    
	{
		
		{3, 3, 3, 3, 3, 3},     
		{3, 3, 3, 3, 3, 3},			
		{3, 3, 1, 2, 3, 3},	
		{3, 3, 2, 1, 3, 3},	
		{3, 3, 3, 3, 3, 3},
		{3, 3, 3, 3, 3, 3}
		
			
	};
	
	gameboard(initboard);
	

	return 0;
}
