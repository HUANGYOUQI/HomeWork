#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int HomeWork,SumAll;
int main(int argc, char *argv[]) {
	for(HomeWork=0;HomeWork<10;HomeWork++){
		SumAll=SumAll+HomeWork;
	}
	printf("SumAll=%d",SumAll);
	return 0;
}
