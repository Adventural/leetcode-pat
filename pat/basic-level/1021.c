#include <stdio.h>

int main()
{
    int a[10] = {0};
    char num[1000] = {'\0'};
    scanf("%s", num);
    for(int i=0; num[i] != '\0'; i++)
        a[(int)(num[i] - '0')]++;
    for(int i=0; i<10; i++){
        if(a[i] != 0)
            printf("%d:%d\n", i, a[i]);
    }
}