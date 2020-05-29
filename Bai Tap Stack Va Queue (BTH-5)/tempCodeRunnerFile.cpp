#include <iostream>
#include <string>
#include <stack>
using namespace std;
void superReducedString(string s)
{
    char kq[100000];
    int j = 0;
    stack<char> mystack;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (mystack.empty())
        {
            mystack.push(s[i]);
            kq[j] = mystack.top();
            j++;
        }
        else if (s[i] != mystack.top())
        {
            mystack.push(s[i]);
            kq[j] = mystack.top();
            j++;
        }
        else
        {
            mystack.pop();
        }
    }

    if (mystack.empty())
    {
        cout << "Empty String";
    }
    else
    {
        for (int i = 0; i < mystack.size(); i++)
        {
            cout << kq[i];
        }
    }
}
int main()
{
    char s[10000];

    cin >> s;
    superReducedString(s);
    return 0;
}