#include <stdio.h>

int prime_table[110000] = {0};

void mk_prime_table()
{
    for (int i=2; i<110000; i++){
        for (int j=2; j*i<110000; j++)
            prime_table[j*i] = 1;
    }
}

int main()
{
    int m, n;
    int count = 0;
    int print_count = 0;
    scanf("%d %d", &m, &n);
    mk_prime_table();
    for (int i=2; i<110000; i++)
        if(prime_table[i] == 0){
            count++;
            if(count >= m && count <= n){
                printf("%d", i);
                print_count++;
                if (print_count%10 == 0)
                    printf("\n");
                else if (count != n)
                    printf(" ");
                else
                    break;
            }
        }
}