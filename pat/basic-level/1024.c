#include <stdio.h>
#include <string.h>

int main()
{
    char s[10000];
    int e_index = 0;
    int ind = 0;
    int s_length;
    scanf("%s", s);
    s_length = strlen(s);

    for (e_index = s_length-1; e_index >=0; e_index--){
        if(s[e_index] == 'E') 
            break;
    }
    for (int i=e_index+2; i<s_length; i++)
        ind = ind * 10 + (int)(s[i] - '0');
    if(s[0] == '-')
        printf("-");
    
    if (s[e_index+1] == '-'){
        for (int i=0; i<ind; i++){
            printf("0");
            if ( i == 0 )
                printf(".");
        }
        for (int i=1; i<e_index; i++){
            if (s[i] != '.')
                printf("%c", s[i]);
        }
    }
    else {
        printf("%c", s[1]);
        int i=0;
        for (i=3; i<e_index && i-3<ind; i++)
            printf("%c", s[i]);
        if (i < e_index){
            printf(".");
            for (int j=i; j<e_index; j++)
                printf("%c", s[i]);
        }
        else {
            for (int j=i-3; j<ind; j++)
                printf("0");
        }
    }
}