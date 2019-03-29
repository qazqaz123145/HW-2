#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int year,month,day;
	printf("請輸入您的出生年份(西元):");
	scanf("%d",&year);
	printf("請輸入您的出生月份:"); 
	scanf("%d",&month);
	printf("請輸入您的出生日期:");
	scanf("%d",&day);
	printf("您的出生年月日為:%d,%d,%d\n",year,month,day);
	system("pause");
	return 0;
}
