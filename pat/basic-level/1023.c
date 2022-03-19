#include <stdio.h>

int main()
{
    int a[10] = {0};
    int is_first_output = 1;
    for(int i=0; i<10; i++){
        scanf("%d", &a[i]);
        if(a[i] != 0 && i>=1){
            if(is_first_output){
                printf("%d", i);
                for(int j=0; j<a[0]; j++)
                    printf("0");
                is_first_output = 0;
                for (int j=0; j<a[i]-1; j++)
                    printf("%d", i);
            }
            else{
                for(int j=0; j<a[i]; j++)
                    printf("%d", i);
            }
        }
    }
}