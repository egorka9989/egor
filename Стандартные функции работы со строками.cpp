#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int pos = s.find(" ");
    int pos1 = s.rfind(" ");
    if (pos1 + 1 && pos != pos1) {
        cout << s.substr(pos + 1, pos1 - pos);
    }
    return 0;
}