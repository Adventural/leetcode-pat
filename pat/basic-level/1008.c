#include <stdio.h>

int main()
{
    int a[101] = {0};
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    m %= n;
    for (int i=0; i<n-1; i++){
        if (n-m+i < n)
            printf("%d ", a[n-m+i]);
        else
            printf("%d ", a[(n-m+i)%n]);
    }
    printf("%d", a[n-m-1]);
}