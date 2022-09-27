#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	
	printf("input year: ");
	scanf("%i", &x);
	
	if ((x%4 == 0 && x%100 != 0) ||
		x%400 == 0
		)
	printf("%x is leap year!\n",x);
	else 
	printf("%x is not leap year!\n",x);
	
	return 0;
}
