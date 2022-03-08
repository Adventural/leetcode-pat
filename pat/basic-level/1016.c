#include <stdio.h>

int main()
{
    char a[10]={'\0'}, b[10]={'\0'};
    int da, db;
    scanf("%s %d %s %d", a, &da, b, &db);
    long count = 0;
    int base_a = 1, base_b = 1;
    for (int i=0; i<10; i++){
        if (a[i] != '\0' && a[i] == '0'+da){
            count += base_a * da;
            base_a *= 10;
        }
        if (b[i] != '\0' && b[i] == '0'+db){
            count += base_b * db;
            base_b *= 10;
        }
    }
    printf("%ld", count);
}