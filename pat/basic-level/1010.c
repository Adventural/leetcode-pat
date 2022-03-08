#include <stdio.h>

int main()
{
    int a[4000] = {0};
    int index = 0;
    int b, c;
    char splite = ' ';
    while(splite != '\n'){
        scanf("%d %d", &b, &c);
        scanf("%c", &splite);
        if (b==0 || c==0)
            continue;
        else{
            a[index++] = b*c;
            a[index++] = c-1;
        }
    }
    if (index > 0){
        index = index - 1;
        for (int i=0; i<index; i++)
            printf("%d ", a[i]);
        printf("%d", a[index]);
    }
    else 
        printf("0 0");
}