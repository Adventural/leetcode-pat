#include <stdio.h>

int main()
{
    char a[1000] = {'\0'};
    int ans[1000] = {0};
    int b;
    int tmp;
    int index = 0;
    scanf("%s %d", a, &b);
    tmp = a[0] - '0';
    for (int i=1; a[i] != '\0';){
        ans[index++] = tmp / b;
        tmp = tmp % b;
        tmp = tmp*10 + a[i++] - '0';
    }
    ans[index++] = tmp / b;
    tmp = tmp %b;
    int zero_flag = 0;
    for (int i=0; i<index-1; i++){
        if(ans[i] == 0 && zero_flag == 0)
            continue;
        else{
            printf("%d", ans[i]);
            zero_flag = 1;
        }
    }
    printf("%d %d", ans[index-1], tmp);
}