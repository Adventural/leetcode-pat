#include <stdio.h>

void print_base(int num, int base)
{
    int a[33] = {0};
    int i = 0;
    if (num == 0){
        printf("0");
        return;
    }
    while(num){
        a[i++] = num % base;
        num /= base;
    }
    for (int j=i-1; j>=0; j--)
        printf("%d", a[j]);
}

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    print_base(a+b, c);
}