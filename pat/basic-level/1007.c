#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int mk_prime_table(int max, int* a)
{
    for (int i=2; i<=max; i++) {
        for(int j=2; j*i<=max; j++)
            a[j*i]=1;
    }
    return 0;
}

int main()
{
    int n;
    int count = 0;
    scanf("%d", &n);
    int* a = malloc(sizeof(int)*(n+1));
    memset(a, 0, sizeof(int)*(n+1));
    mk_prime_table(n, a);
    for (int i=2; i+2<=n; i++) {
        if (a[i]==0 && a[i+2]==0)
            count++;
    }
    free(a);
    printf("%d", count);
    return 0;
}