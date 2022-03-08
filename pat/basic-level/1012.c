#include <stdio.h>

int main()
{
    int a0=0, a1=0, a2=0, a4=0, a3_count=0;
    int a0_ = 0, a1_ = 0, a4_ = 0;
    int a1_flag = 0;
    float a3 = 0;
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        int num;
        scanf("%d", &num);
        switch (num%5)
        {
        case 0:
            if (num%2 == 0){
                a0_ = 1;
                a0 += num;
            }
            break;
        case 1:
            a1_ = 1;
            if (a1_flag == 0){
                a1 += num;
                a1_flag = 1;
            }
            else{
                a1 -= num;
                a1_flag = 0;
            }
            break;
        case 2:
            a2++;
            break;
        case 3:
            a3 += num;
            a3_count++;
            break;
        case 4:
            a4_ = 1;
            if (num > a4)
                a4 = num;
            break;
        }
    }
    if(a0_ == 0)
        printf("N ");
    else
        printf("%d ", a0);
    if(a1_ == 0)
        printf("N ");
    else
        printf("%d ", a1);
    if(a2 == 0)
        printf("N ");
    else
        printf("%d ", a2);
    if(a3_count == 0)
        printf("N ");
    else
        printf("%.1f ", a3/a3_count);
    if(a4_ == 0)
        printf("N");
    else
        printf("%d", a4);
}