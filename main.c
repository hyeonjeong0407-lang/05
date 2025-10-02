#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	
	printf(" input an integer : ");
	scanf("%d",&a);
	
	if (a>=0)
		printf("절댓값은 %d 입니다.\n", a);
	else
		printf("절댓값은 %d 입니다.\n", -a);
}