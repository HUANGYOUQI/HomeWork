#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int HomeWork,SumAll;/*�ܼƫŧi*/ 
int main(int argc, char *argv[]) {
	for(HomeWork=0;HomeWork<10;HomeWork++)/*For�j��q0��9*/
	{
		SumAll=SumAll+HomeWork;/*�p��q0�[��9*/ 
	}
	printf("SumAll=%d",SumAll);/*�L�X�`�M*/ 
	return 0;
}
