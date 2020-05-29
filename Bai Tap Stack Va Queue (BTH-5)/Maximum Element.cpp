//https://www.hackerrank.com/challenges/maximum-element/problem
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> mystack;
    stack<int> tempstack;
    long int n;
    tempstack.push(-1);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int thaotac;
        cin >> thaotac;

        if (thaotac == 1)
        {
            long int x;
            cin >> x;
            mystack.push(x);
            if (x >= tempstack.top())
            {
                tempstack.push(x);
            }
        }

        if (thaotac == 2)
        {
            if (mystack.top() == tempstack.top())
            {
                tempstack.pop();
            }
            mystack.pop();
        }

        if (thaotac == 3)
        {
            cout << tempstack.top() << endl;
        }
    }
    return 0;
}