#include <stdio.h>

char a[][5] = {"ling", "yi", "er", "san", "si", "wu",
    "liu", "qi", "ba", "jiu"};

int main()
{
    char b[101];
    int count = 0;
    scanf("%s", b);
    for(int i=0; b[i]!='\0'; i++){
        count += b[i] - '0';
    }
    if (count >= 100){
        int one = count / 100;
        count %= 100;
        int two = count / 10;
        count %= 10;
        printf("%s %s %s", a[one], a[two], a[count]);
    }
    else if(count >= 10){
        int one = count / 10;
        count %= 10;
        printf("%s %s", a[one], a[count]);
    }
    else{
        printf("%s", a[count]);
    }
    
}