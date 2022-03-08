#include <stdio.h>

int main()
{
    int n;
    int hundreds, tens;
    scanf("%d", &n);
    if (n >= 100){
        hundreds = n / 100;
        n %= 100;
        tens = n / 10;
        n %= 10;
        for (int i=0; i<hundreds; i++)
            printf("B");
        for (int i=0; i<tens; i++)
            printf("S");
        for (int i=1; i<=n; i++)
            printf("%d", i);
    }
    else if (n >= 10){
        tens = n / 10;
        n %= 10;
        for (int i=0; i<tens; i++)
            printf("S");
        for (int i=1; i<=n; i++)
            printf("%d", i);
    }
    else {
        for (int i=1; i<=n; i++)
            printf("%d", i);
    }
}