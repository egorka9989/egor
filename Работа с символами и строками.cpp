#include <bits/stdc++.h>
using namespace std;
int main()
{
    int lat = 0, rus = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] >= 'a' && s[i] <= 'z')
            ++lat;
        if (s[i] >= 'а' && s[i] <= 'я')
            ++rus;
    }
    cout << lat << " " << rus << endl;
    return 0;
}