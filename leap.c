#include<stiod.h>

int main()
{
	int year;
	
	pritnf("년도 입력:");
	scanf("%d", &year);
	
	if(year%4==0 && year%100!=0 || year%400==0)
	{
		printf("%d년은 윤년(leap year) 입니다.\n", year);
	}else
	{
		printf("%d년은 평년(common year) 입니다.\n", year);
	}
	
	
	
	return 0;
}
