#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int HomeWork,SumAll;/*變數宣告*/ 
int main(int argc, char *argv[]) {
	for(HomeWork=0;HomeWork<10;HomeWork++)/*For迴圈從0到9*/
	{
		SumAll=SumAll+HomeWork;/*計算從0加到9*/ 
	}
	printf("SumAll=%d",SumAll);/*印出總和*/ 
	return 0;
}
