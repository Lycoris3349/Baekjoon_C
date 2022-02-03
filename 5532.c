#include <stdio.h>

int main()
{
    int L, A, B, C, D;
    int i1, i2;
    
    scanf("%d", &L);
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);
    
    i1 = A / C;
    i2 = B / D;
    
    if(A % C > 0)
    {
        i1 = i1 + 1;
    }
    
    if(B % D > 0)
    {
        i2 = i2 + 1;
    }

    if(i1 >= i2)
    {
        printf("%d", L - i1);
    }
    else
    {
        printf("%d", L - i2);
    }

    return 0;
}
