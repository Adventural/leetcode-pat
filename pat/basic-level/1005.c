#include <stdio.h>
#include <string.h>

int main()
{
    int a[101];
    int b[101];
    int n;
    memset(a, 0, sizeof(int)*101);
    memset(b, 0, sizeof(int)*101);
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        int d;
        scanf("%d", &d);
        b[d] = 1;
        if (a[d] == 0) {
            while(d != 1) {
                if (d % 2 == 0) {
                    d /= 2;
                }
                else {
                    d = d*3+1;
                    d /= 2;
                }
                if (d <= 100) {
                    if (a[d] != 0)
                        break;
                    else
                        a[d] = 1;
                }
            }
        }
    }
    int cnt=0;
    for (int i=100; i>=0; i--) {
        if (b[i] == 1 && a[i] == 0)
            cnt++;
    }
    for (int i=100; i>=0; i--) {
        if (b[i] == 1 && a[i] == 0) {
            if (cnt > 1){
                printf("%d ", i);
                cnt--;
            }
            else{
                printf("%d", i);
                return 0;
            }
        }
    }
}