#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class Solution
{
public:
    int leastInterval(vector<char> &tasks, int n)
    {
        //int *hmm = new int[26];
        //int *hmm = (int *)calloc(10, sizeof(int)); // mỗi phần tử được taoj bằng calloc sẽ có giá trị ban đầu =0
        int hmm[26] = {0}; //vay cho no mau
        int N = tasks.size();
        for (int i = 0; i < N; i++) //https://leetcode.com/problems/task-scheduler/solution/
        {                           //A:65 -> Z:90
            int c = int(tasks[i]);
            hmm[c - 65]++;
        }
        sort(begin(hmm), end(hmm)); //sap xep theo thu tu tang
        // for (int i = 0; i < n; i++)//TEST MANG
        // {
        //     cout << hmm[i] << endl;
        // }
        //Using Sorting
        int time = 0;
        while (hmm[25] > 0)
        {
            for (int j = 0; j <= n; j++)
            {
                if (hmm[25] == 0)
                {
                    break;
                }
                if (j < 26 && hmm[25 - j] > 0)
                {
                    hmm[25 - j]--;
                }
                time++;
            }
            sort(begin(hmm), end(hmm));
        }

        return time;
    }
};

int main()
{
    Solution A;
    vector<char> s;
    string S;
    cin >> S;

    int n = S.length();

    for (int i = 0; i < n; i++)
    {
        s.push_back(S[i]);
    }

    cin >> n;
    cout << A.leastInterval(s, n);
    return 0;
}