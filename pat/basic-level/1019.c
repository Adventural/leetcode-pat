#include <stdio.h>

void re_sort(int *a)
{
    for(int i=0; i<4; i++){
        for (int j=0; j<4-i-1; j++){
            if(a[j] > a[j+1]){
                int tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }
}

void convert_array(int n, int a[])
{
    a[0] = n / 1000;
    n %= 1000;
    a[1] = n / 100;
    n %= 100;
    a[2] = n / 10;
    n %= 10;
    a[3] = n;
}

int main()
{
    int a[4];
    int n;
    scanf("%d", &n);
    convert_array(n, a);
    int result = -1;
    while(result != 0 && result != 6174){
        re_sort(a);
        int max = a[3]*1000+a[2]*100+a[1]*10+a[0];
        int min = a[0]*1000+a[1]*100+a[2]*10+a[3];
        result = max - min;
        printf("%04d - %04d = %04d\n", max, min, result);
        convert_array(result, a);
    }
}