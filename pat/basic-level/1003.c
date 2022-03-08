#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        char s[101];
        scanf("%s", s);
        int len1 = 0, len2 = 0, len3 = 0;
        int flag = 1;
        int cnt_P = 0, cnt_T = 0;
        for (int j=0; s[j]!='\0'; j++) {
            if(s[j]!='P' && s[j]!='A' && s[j]!='T') {
                len2 = 0;
                break;
            }
            if(s[j] == 'P') {
                flag = 2;
                cnt_P++;
            }
            else if(s[j] == 'T') {
                flag = 3;
                cnt_T++;
            }
            else {
                if (flag == 1)
                    len1++;
                else if (flag == 2)
                    len2++;
                else if (flag == 3)
                    len3++;
            } 
        }
        if (len2>0 && (len3==len1*len2) && cnt_T==1 && cnt_P==1)
            printf("YES\n");
        else 
            printf("NO\n");
    }
    return 0;
}