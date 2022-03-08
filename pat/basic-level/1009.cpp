#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> a;
    string input;
    char spite = ' ';
    while(spite != '\n'){
        cin >> input;
        a.push_back(input);
        scanf("%c", &spite);
    }
    for (int i=a.size()-1; i>0; i--)
        cout << a[i] << ' ';
    cout << a[0];
}