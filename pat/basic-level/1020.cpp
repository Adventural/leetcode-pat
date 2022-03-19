#include <iostream>
#include <algorithm>

using namespace std;

struct moon{
    float w;
    float p;
    float price;
}m[1000];

bool cmp(const struct moon &a, const struct moon &b)
{
    return a.price > b.price;
}

int main()
{
    int n;
    float d;
    cin >> n >> d;
    for (int i=0; i<n; i++)
        cin >> m[i].w;
    for (int i=0; i<n; i++){
        cin >> m[i].p;
        m[i].price = m[i].p / m[i].w;
    }
    sort(m, m+n, cmp);
    float profit = 0;
    int i = 0;
    while(d != 0 && i != n){
        if(m[i].w <= d){
            d = d - m[i].w;
            profit += m[i].p;
            i++;
        }
        else{
            profit += m[i].price*d;
            d = 0;
        }
    }
    printf("%.2f", profit);
}