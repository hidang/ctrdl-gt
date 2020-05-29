//how are youuuu
#include <iostream>
#include <string>
#include <stack>

using namespace std;

class Solution
{
public:
    string removeOuterParentheses(string S, int n)
    {
        int Open = 0, Close = 0;

        string kq = S;
        int pt = -1;
        for (int i = 0; i < n; i++)
        {
            if (S[i] == '(')
            {
                Open++;
            }
            else
            {
                Close++;
            }

            if (Open == Close && Open != 0)
            {
                int temp = i + 1 - Open * 2;
                for (int j = (temp + 1); j < i; j++)
                {
                    ++pt;
                    kq[pt] = S[j];
                }
                Open = 0;
                Close = 0;
            }
        }
        kq.resize(++pt);
        return kq;
    }
};

int main()
{
    int n;
    cin >> n;
    Solution A;
    string s;
    cin >> s;
    cout << A.removeOuterParentheses(s, n);
    return 0;
}
