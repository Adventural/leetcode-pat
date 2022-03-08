#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    int maxscore = 0;
    int minscore = 100;
    char maxname[11], maxnum[11];
    char minname[11], minnum[11];
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        char name[11], num[11];
        int score;
        scanf("%s %s %d", name, num, &score);
        if (minscore > score) {
            minscore = score;
            strncpy(minname, name, strlen(name)+1);
            strncpy(minnum, num, strlen(num)+1);
        }
        if (maxscore < score) {
            maxscore = score;
            strncpy(maxname, name, strlen(name)+1);
            strncpy(maxnum, num, strlen(num)+1);
        }
    }
    printf("%s %s\n%s %s", maxname, maxnum, minname, minnum);
}