#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


#define N 6

struct boardinfo{
	unsigned char board[36];
	unsigned color[3];  //empty : 0 , black : 2, white : 1
}; struct boardinfo board;

int gameboard(int a[N][N])
{
	int i,j;
	system("cls"); //화면을 지운 후, 게임판 출력 
	int *ptr;
	
	ptr = &a[0][0];
	printf("     0    1    2    3    4    5    \n");
	printf("○: ●= %d : %d\n", board.color[2],board.color[1]);	
	for(i=0;i<6;i++)
	{
		printf("   +----+----+----+----+----+----+\n");
		printf(" %c |", i+'a'); //보드의 세로줄 번호  
		
		
		for(j=0;j<6;j++)
		{
			char k = board.board[i*6+j];
			if(k == 1)
				printf("  ●|"); 
			else if(k == 2)
				printf("  ○|");
			else if(k == 0)				// bound : 0 , black : 2, white : 1, empty : blank
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

	
	
	
	


}
