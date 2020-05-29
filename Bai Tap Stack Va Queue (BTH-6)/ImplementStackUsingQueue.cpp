// #include <iostream>
// #include <stack>
// using namespace std;

// int main()
// {
//     stack<int> Stack;
//     int n;
//     cin >> n;
//     while (n--)
//     {
//         int mode;
//         cin >> mode;
//         if (mode == 1)
//         {
//             int temp;
//             cin >> temp;
//             Stack.push(temp);
//         }
//         if (mode == 2)
//         {
//             Stack.pop();
//         }
//         if (mode == 3)
//         {
//             cout << Stack.top() << endl;
//         }
//         if (mode == 4)
//         {
//             if (Stack.empty())
//             {
//                 cout << "1" << endl;
//             }
//             else
//                 cout << "0" << endl;
//         }
//     }

//     return 0;
// }

#include <iostream>
#include <queue>
#define MAXN 100
using namespace std;
int main()
{
    int n, arr[MAXN];
    queue<int> myqueue1, myqueue2;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int x;
            cin >> x;
            while (!myqueue1.empty())
            {
                myqueue2.push(myqueue1.front());
                myqueue1.pop();
            }
            myqueue1.push(x);
            while (!myqueue2.empty())
            {
                myqueue1.push(myqueue2.front());
                myqueue2.pop();
            }
        }
        if (type == 2)
        {
            myqueue1.pop();
        }
        if (type == 3)
        {
            cout << myqueue1.front() << endl;
        }
        if (type == 4)
        {
            if (myqueue1.empty())
            {
                cout << "1" << endl;
            }
            else
                cout << "0" << endl;
        }
    }
}