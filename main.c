#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;
	char c;
	printf("enter the calculation  : ");
	scanf("%d %c %d", &a, &c, &b);
	
	switch(c){
		
		case'+':
			printf("= %d\n", a+b);
			break;
			
		case'-':
			printf("= %d\n", a-b);
			break;
			
		case'*':
			printf("= %d\n", a*b);
			break;
			
		default:
			printf("= %d\n", a/b);
			break;
	}
	
	
	
	return 0;
}