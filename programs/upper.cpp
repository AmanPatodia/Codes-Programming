#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "hy my self aman";
    s[0]=toupper(s[0]);
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            s[i+1]=toupper(s[i + 1]);
        }
    }
    cout << s << endl;
    return 0;
}