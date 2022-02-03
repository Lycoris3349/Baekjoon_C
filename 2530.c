#include <stdio.h>

int main()
{
    int H, M, S, C;
    int res_H, res_M, res_S;
    int C_M, C_S;
    
    scanf("%d %d %d", &H, &M, &S);
    scanf("%d", &C);
    
    C_M = (S+C) / 60;
    C_S = (S+C) % 60;
    
    res_H = H;
    res_M = M + C_M;
    res_S = C_S;
    
    if(res_M >= 60)
    {
        res_H = H + (res_M / 60);
        res_M = res_M % 60;
        
        while(res_H > 23)
        {
            res_H = res_H - 24;
        }
    }
    
    printf("%d %d %d\n", res_H, res_M, res_S);
    return 0;
}
