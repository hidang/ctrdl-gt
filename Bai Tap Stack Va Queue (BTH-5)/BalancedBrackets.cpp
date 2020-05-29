#include <iostream>
#include <string>
#include <stack>
using namespace std;

string isBalanced(string s)
{
    int n;
    stack<char> a;
    n = s.length();
    a.push('0');
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            a.push(s[i]);
        }
        else if (s[i] == ')')
        {
            if (a.top() == '(')
            {
                a.pop();
            }
            else
            {
                return "NO";
            }
        }
        else if (s[i] == ']')
        {
            if (a.top() == '[')
            {
                a.pop();
            }
            else
            {
                return "NO";
            }
        }
        else if (s[i] == '}')
        {
            if (a.top() == '{')
            {
                a.pop();
            }
            else
            {
                return "NO";
            }
        }
    }
    if (a.size() == 1)
    {
        return "YES";
    }
    else
    {
        return "NO";
    }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        string s;
        getline(cin, s);

        string result = isBalanced(s);
        cout << result << "\n";
    }
    return 0;
}
