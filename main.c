#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



#define N 6

void gameboard(int a[N][N])
{
	int i,j;

	for(i=0;i<7;i++)
	{
		for(j=0;j<7;j++)
		{
			printf("-");
		}
		printf("\n");
		
		printf("|");
	}
	
}

int main(int argc, char *argv[]) {
	
	int image[6][6];
	gameboard(image);
	
	return 0;
}
