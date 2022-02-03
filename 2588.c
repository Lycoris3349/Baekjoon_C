#include <stdio.h>

int main()
{
    int A, B;
    
    scanf("%d",&A);
    scanf("%d",&B);
    
    int C = B / 100;
    int D = B / 10 - C * 10;
    int E = B - (C*100 + D*10);
    
    printf("%d \n", A*E);
    printf("%d \n", A*D);
    printf("%d \n", A*C);
    
    printf("%d \n", (A*E)+(A*D*10)+(A*C*100));
    
}
