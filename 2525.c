#include <stdio.h>

int main()
{
    int H, M, C;
    int res_H, res_M;
    int C_H, C_M;
    
    scanf("%d %d", &H, &M);
    scanf("%d", &C);

    if(C > 59)
    {
        C_H = (M + C) / 60;
        C_M = (M + C) % 60;
        
        res_H = H + C_H;
        res_M = C_M;
        
        if(res_H > 23)
        {
            res_H = res_H - 24;
        }
    }
    else
    {
        res_H = H;
        res_M = M + C;
        
        if(res_M > 59)
        {
            res_H = H + 1;
            res_M = res_M - 60;
            
            if(res_H > 23)
            {
                res_H = res_H - 24;
            }
        }
    }
    
    printf("%d %d", res_H, res_M);
    
    return 0;
}
