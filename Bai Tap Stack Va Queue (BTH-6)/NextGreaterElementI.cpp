#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    bool flag = false;
    int nA, nB;
    cin >> nA >> nB;
    vector<int> A, B;

    for (int i = 0; i < nA; i++)
    {
        int temp;
        cin >> temp;
        A.push_back(temp);
    }
    for (int i = 0; i < nB; i++)
    {
        int temp;
        cin >> temp;
        B.push_back(temp);
    }
    vector<int> BB = B;

    //sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    for (int i = 0; i < nA; i++)
    {
        if (A[i] == B.back() || A[i] == BB.back())
        {
            cout << "-1";
            if (i != (nA - 1))
            {
                cout << " ";
            }
        }
        else
        {
            for (int j = 0; j < nB; j++)
            {
                if (A[i] == BB[j])
                {
                    for (int jj = j; jj < nB; jj++)
                    {
                        if (A[i] < BB[jj])
                        {
                            cout << BB[jj];
                            if (i != (nA - 1))
                            {
                                cout << " ";
                            }
                            flag = true;
                            break;
                        }
                        else
                            flag = false;
                    }
                }
            }

            if (flag == false)
            {
                cout << "-1";
                if (i != (nA - 1))
                {
                    cout << " ";
                }
            }
            else
                flag == false; //wrong
        }
        flag = false;
    }

    return 0;
}
