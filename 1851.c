#include<stdio.h>

void star(int num)
{
	if(num>0){
		printf("*");
		star(--num);
	}
}

int main()
{
	int num;
	
	scanf("%d", &num);
	
	star(num);
	
	return 0;
}
