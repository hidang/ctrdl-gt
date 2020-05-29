#include <iostream>
#include <vector>
#include <string>
#include <stack>
using namespace std;

class Solution
{
public:
    bool backspaceCompare(string S, string T)
    {
        int nSs = 0, nTt = 0; //luu so luong chu cai de so sanh
        stack<char> ChuCaiS, ChuCaiT;
        int nS = S.length(), nT = T.length();
        for (int i = 0; i < nS; i++)
        {
            if (S[i] == '#')
            {
                if (!ChuCaiS.empty())
                {
                    ChuCaiS.pop();
                    nSs--;
                }
            }
            else
            {
                ChuCaiS.push(S[i]);
                nSs++;
            }
        }
        for (int i = 0; i < nT; i++)
        {
            if (T[i] == '#')
            {
                if (!ChuCaiT.empty())
                {
                    ChuCaiT.pop();
                    nTt--;
                }
            }
            else
            {
                ChuCaiT.push(T[i]);
                nTt++;
            }
        }

        if (nTt != nSs)
            return false;
        else
        {
            for (int i = 0; i < nTt; i++)
            {

                if (ChuCaiT.top() != ChuCaiS.top())
                    return false;
                ChuCaiT.pop();
                ChuCaiS.pop();
            }
        }
        return true;
    }
};

int main()
{
    Solution A;
    string s, t;
    cin >> s >> t;
    cout << A.backspaceCompare(s, t);
    return 0;
}