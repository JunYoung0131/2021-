#include<stdio.h>

void star_2(int k)
{
	if(k <= 0) return;
  	star_2(k-1);
  	printf("*");
}

void star(int num)
{
	if(num <= 0) return;
  	star(num-1);
  	star_2(num);
  	printf("\n");
}

int main()
{
	int num;
	
  	scanf("%d", &num);
  	star(num);
  	
  	return 0;
}
