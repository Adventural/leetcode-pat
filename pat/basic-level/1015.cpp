#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct student{
    string id;
    int score_d;
    int score_c;
    int level;
}stu[100000];

bool cmp(struct student &a, struct student &b)
{
    if(a.level == b.level){
        if (a.score_c+a.score_d != b.score_c+b.score_d)
            return (a.score_c+a.score_d < b.score_c+b.score_d);
        else if (a.score_d != b.score_d)
            return a.score_d < b.score_d;
        else
            return a.id > b.id;
    }
    else {
        return a.level > b.level;
    }
}

int main()
{
    int n, l, h;
    cin >> n >> l >> h;
    int i=0;
    for (i=0; i<n; i++){
        string id;
        int score_d, score_c;
        cin >> id >> score_d >> score_c;
        if (score_c < l || score_d < l){
            i--;
            n--;
            continue;
        }
        if (score_c >= h && score_d >= h)
            stu[i].level = 1;
        else if(score_d >= h)
            stu[i].level = 2;
        else if(score_c <= score_d)
            stu[i].level = 3;
        else
            stu[i].level = 4;
        stu[i].id = id;
        stu[i].score_c = score_c;
        stu[i].score_d = score_d;
    }
    sort(stu, stu+i, cmp);
    cout << i << endl;
    for (int j=i-1; j>=0; j--)
        cout << stu[j].id << " " << stu[j].score_d << " " << stu[j].score_c << endl;
}