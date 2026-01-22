#include <bits/stdc++.h>

using namespace std;

void pal(string s)
{
    int start = 0;
    int end = s.size() - 1;

    while (start < end)
    {
        if (tolower(s[start]) == tolower(s[end]))
        {
            start++;
            end--;
        }
        else
        {
            cout << "Not a Palindrome";
            return;
        }
    }
    cout << "Palindrome!!";
}

int main()
{
    string s;
    cin >> s;
    pal(s);
    return 0;
}