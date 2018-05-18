#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int homework,sumall;
int main(int argc, char *argv[]) {
	for(homework=0;homework<10;homework++){
		sumall=sumall+homework;
	}
	printf("sumall=%d",sumall);
	return 0;
}
