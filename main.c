#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int answer=80;
	int num;
	int trials=0;
	
	do
	{
	printf("guess the number: ");
	scanf("%d", &num);
	
	trials++;
	
	if (num < answer)
		printf("low!\n");
		
	else if (num > answer)
		printf("high!\n");
	}
	
	while(num != answer);
	
	printf("congratulation! trials: %d\n", trials);
	
	
	
	
	
	return 0;
}