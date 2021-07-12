#include<stdio.h>

int pascal(int n, int r)
{
    if(n == 1 || r == 1 || n == r) return 1;
    return pascal(n - 1, r-1) + pascal(n - 1, r);
}

int main() {
    int n, r;
    
    scanf("%d %d", &n, &r);
    printf("%d\n", pascal(n, r));  
    
    return 0;
}

