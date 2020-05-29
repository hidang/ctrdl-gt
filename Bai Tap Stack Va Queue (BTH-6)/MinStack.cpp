#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> Stack, MinStack;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int mode;
        cin >> mode;
        if (mode == 1)
        {
            int temp;
            cin >> temp;
            Stack.push(temp);
            if (MinStack.empty())
            {
                MinStack.push(temp);
            }
            else
            {
                if (temp < MinStack.top())
                {
                    MinStack.push(temp);
                }
            }
        }
        if (mode == 2)
        {
            if (MinStack.top() == Stack.top())
            {
                MinStack.pop();
                Stack.pop();
            }
            else
            {
                Stack.pop();
            }
        }
        if (mode == 3)
        {
            cout << Stack.top() << endl;
        }
        if (mode == 4)
        {
            cout << MinStack.top() << endl;
        }
    }

    return 0;
}