#include <stdio.h>

int main()
{
    int n;
    int a_win = 0, a_same = 0;
    char _csrf;
    // C J B win times
    int a[3] = {0};
    int b[3] = {0};
    scanf("%d", &n);
    scanf("%c", &_csrf);
    for (int i=0; i<n; i++){
        char _a, _b;
        scanf("%c %c%c", &_a, &_b, &_csrf);
        if (_a == 'C'){
            if(_b == 'C')
                a_same++;
            else if (_b == 'J'){
                a_win++;
                a[0]++;
            }
            else if (_b == 'B')
                b[2]++;
        }
        else if(_a == 'J'){
            if(_b == 'C')
                b[0]++;
            else if (_b == 'J')
                a_same++;
            else if (_b == 'B'){
                a_win++;
                a[1]++;
            }
        }
        else{
            if(_b == 'C'){
                a_win++;
                a[2]++;
            }
            else if (_b == 'J')
                b[1]++;
            else if (_b == 'B')
                a_same++;
        }
    }
    printf("%d %d %d\n", a_win, a_same, n-a_win-a_same);
    printf("%d %d %d\n", n-a_win-a_same, a_same, a_win);
    if(a[2] >= a[0] && a[2] >= a[1])
        printf("B ");
    else if(a[0] >= a[1])
        printf("C ");
    else
        printf("J ");
    if(b[2] >= b[0] && b[2] >= b[1])
        printf("B");
    else if(b[0] >= b[1])
        printf("C");
    else
        printf("J");
}