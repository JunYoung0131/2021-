#include<stdio.h>

int sum(int num)
{
	int total;
	
	if(num==1){
		return 1;
	}
	else{
		return num+sum(num-1);
	}
}

int main()
{
	int num;
	int result;
	
	scanf("%d", &num);
	
	result=sum(num);
	
	printf("%d", result);
	
	return 0;
}
