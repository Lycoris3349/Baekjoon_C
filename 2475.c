#include <stdio.h>

int main()
{
    int Num[250];
    int result, i;
    int sum = 0;
    
    for(i=0; i<5; i++)
    {
        scanf("%d", &Num[i]);
        
        sum = Num[i]*Num[i] + sum;
    }
    
    result = sum%10;
    
    printf("%d", result);

    return 0;
}
