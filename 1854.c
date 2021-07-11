#include<stdio.h>

long long sum(long long num)
{	
	printf("test: %lld\n", num);
	
	switch(num/10)
	{
		case 0:	//num이 한자리 수 
			return num; 
		
		default:
			return (num % 10) + sum(num/10);
	}
}

int main()
{
	long long num;

	scanf("%lld", &num);
	
	printf("%lld", sum(num));
	
	return 0;
}

