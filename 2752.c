#include <stdio.h>

int main()
{
    int A, B, C;
    
    scanf("%d %d %d", &A, &B, &C);
    
    if(A>B)
    {
        if(A>C)
        {
            if(B>C)
            {
                printf("%d %d %d", C, B, A);
            }
            else if(B<C)
            {
                printf("%d %d %d", B, C, A);
            }
        }
        else if(A<C)
        {
            printf("%d %d %d", B, A, C);
        }
    }
    else if(A<B)
    {
        if(A>C)
        {
            printf("%d %d %d", C, A, B);
        }
        else if(A<C)
        {
            if(B>C)
            {
                printf("%d %d %d", A, C, B);
            }
            else if(B<C)
            {
                printf("%d %d %d", A, B, C);
            }
        }
    }

    return 0;
}
