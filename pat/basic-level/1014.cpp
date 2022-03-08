#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> day_map = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};

int main()
{
    string s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    int day = -1;
    int hour = -1;
    int min = -1;
    for (int i=0; i<s1.length()&&i<s2.length(); i++){
        if (day == -1 && s1[i] == s2[i] && s1[i]<='G' && s1[i]>='A'){
            day = s1[i] - 'A';
            continue;
        }
        if (day != -1 && hour == -1){
            if (s1[i]== s2[i]){
                if(s1[i]<='9' && s1[i]>='0')
                    hour = s1[i] - '0';
                else if(s1[i]<='N' && s1[i]>='A')
                    hour = s1[i] - 'A' + 10;
            }
        } 
    }
    for (int i=0; i<s3.length()&&i<s4.length(); i++){
        if (min == -1 && s3[i] == s4[i]){
            if (s3[i] <= 'Z' && s3[i] >= 'A')
                min = i;
            else if (s3[i] <= 'z' && s3[i] >= 'a')
                min = i;
        }
    }
    cout << day_map[day] << " ";
    printf("%02d:", hour);
    printf("%02d", min);
}
