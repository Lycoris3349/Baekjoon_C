#include <stdio.h>

int main()
{
    int N, i;
    int sum=0;
    
    scanf("%d", &N);
    
    for(i=1; i<N+1; i++)
    {
        sum = sum + i;
    }
    
    printf("%d", sum);
    
    return 0;
}
