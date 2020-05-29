#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    int n;
    cin >> n;
    while (n--)
    {
        int mode;
        cin >> mode;
        if (mode == 1)
        {
            int temp;
            cin >> temp;
            q.push(temp);
        }
        if (mode == 2)
        {
            q.pop();
        }
        if (mode == 3)
        {
            cout << q.front() << endl;
        }
    }

    return 0;
}