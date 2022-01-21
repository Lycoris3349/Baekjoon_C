#include <stdio.h>

int main()
{
    int K, Q, R, B, N, P;
    int K_1, Q_1, R_1, B_1, N_1, P_1;
    
    scanf("%d %d %d %d %d %d", &K, &Q, &R, &B, &N, &P);
    
    //킹 개수
    if(K>1)
    {
        K_1 = 1 - K;
    }
    else if(K==1)
    {
        K_1 = 0;
    }
    else if(K==0)
    {
        K_1 = 1;
    }
    
    //퀸 개수
    if(Q>1)
    {
        Q_1 = 1 - Q;
    }
    else if(Q==1)
    {
        Q_1 = 0;
    }
    else if(Q==0)
    {
        Q_1 = 1;
    }
    
    //룩 개수
    if(R>2)
    {
        R_1 = 2 - R;
    }
    else if(R==2)
    {
        R_1 = 0;
    }
    else if(R<2 && R>=0)
    {
        R_1 = 2 - R;
    }
    
    //비숍 개수
    if(B>2)
    {
        B_1 = 2 - B;
    }
    else if(B==2)
    {
        B_1 = 0;
    }
    else if(B<2 && B>=0)
    {
        B_1 = 2 - B;
    }
    
    //나이트 개수
    if(N>2)
    {
        N_1 = 2 - N;
    }
    else if(N==2)
    {
        N_1 = 0;
    }
    else if(N<2 && N>=0)
    {
        N_1 = 2 - N;
    }
    
    //폰 개수
    if(P>8)
    {
        P_1 = 8 - P;
    }
    else if(P==8)
    {
        P_1 = 0;
    }
    else if(P<8 && P>=0)
    {
        P_1 = 8 - P;
    }
    
    printf("%d %d %d %d %d %d", K_1, Q_1, R_1, B_1, N_1, P_1);

    return 0;
}
