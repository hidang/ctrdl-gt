
//test your code in there -> https://www.lintcode.com/problem/moving-average-from-data-stream/description

#include <iostream>
#include <queue>
using namespace std;

class MovingAverage
{
public:
    queue<double> q;
    int nsize;
    MovingAverage(int size)
    {
        this->nsize = size;
    }

    int sum = 0;
    double next(int val)
    {
        int qsize = q.size();
        if (qsize >= nsize)
        {
            sum -= q.front();
            q.pop();
        }
        sum += val;
        q.push(val);
        return (double)sum / (double)q.size();
    }
};

int main()
{
    int n, N;
    cin >> n >> N;
    MovingAverage A(N);

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        //http://www.cplusplus.com/reference/iomanip/setprecision/
        cout << fixed;
        cout.precision(5);
        cout << A.next(temp) << " ";
    }

    return 0;
}