#include <stdio.h>

int main()
{
    long a, b, c;
    int n;
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        scanf("%ld %ld %ld", &a, &b, &c);
        if (a + b > c)
            printf("Case #%d: true\n", i+1);
        else
            printf("Case #%d: false\n", i+1);
    }
}