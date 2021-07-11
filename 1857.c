#include<stdio.h>

int choice(int n, int r)
{
    if(r == 1)
    	return n;
    else if(n == r)
    	return 1;
    else if(n < r)
    	return 0;
    else
        return choice(n - 1, r - 1) + choice(n - 1, r);
}

int main() {
    int n, r;
    
    scanf("%d %d", &n, &r);
    printf("%d\n", choice(n, r));  
    
    return 0;
}

