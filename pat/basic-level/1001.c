#include <stdio.h>

int main()
{
    int n;
    int step = 0;
    scanf("%d", &n);
    while(n != 1){
        if (n % 2 == 0) {
            n /= 2;
            step++;
        }
        else {
            n = 3 * n + 1;
            n /= 2;
            step++;
        }
    }
    printf("%d", step);
}