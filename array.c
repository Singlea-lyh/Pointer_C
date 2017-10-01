#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	long a[][4] = {1, 2, 3, 4, 5, 6};
	int c = 1;
	int **p = (int **)a;
	int i = 0, j = 0;
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("%-4d", a[i][j]);
		}
		printf("\n");
	}
	
	printf("%d\n", p[1]);
	return 0;
} 
