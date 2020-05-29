#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;

int calPoints(vector<string> &ops)
{
    stack<long int> spt, temp;
    long int sum = 0;
    int n = ops.size();
    for (int i = 0; i < n; i++)
    {
        if (ops[i] == "C")
        {
            //qne.pop();

            sum -= spt.top();
            spt.pop();
            temp.pop();
            //cout << spt.top() << endl;
        }
        else if (ops[i] == "D")
        {
            //qne.pop();

            long int t = (spt.top() * 2);
            sum += t;
            spt.push(t);
            temp.push(t);
            //cout << t << endl;
        }
        else if (ops[i] == "+")
        {
            //qne.pop();
            temp.pop();
            long int t = temp.top() + spt.top();
            sum += t;
            temp.push(spt.top());
            spt.push(t);
            temp.push(t);
        }
        else //input la number
        {
            long int t = stoi(ops[i]);
            //cout << qne.front() << endl;
            temp.push(t);
            spt.push(t);
            sum += t;
            //qne.pop();
        }
    }

    return sum;
}
int main()
{
    int n;
    cin >> n;
    vector<string> q;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        q.push_back(s);
    }
    cout << calPoints(q) << endl;
    return 0;
}