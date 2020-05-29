#include <iostream>
#include <stack>
#include <string>
using namespace std;

int Slove(string s)
{
    stack<char> mystack;
    int n = s.length();
    int close = 0;
    int open = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            mystack.push(s[i]);
        }
        else
        {
            if (mystack.empty())
            {
                close++;
            }
            else
            {
                mystack.pop();
            }
        }
    }
    open = mystack.size();
    return open + close;
}

int main()
{
    string s;
    cin >> s;
    cout << Slove(s);
    return 0;
}