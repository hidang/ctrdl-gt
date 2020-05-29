//https://www.hackerrank.com/challenges/equal-stacks/problem
#include <iostream>
using namespace std;

int main()
{
    int m, n, o;
    int count1 = 0, count2 = 0, count3 = 0;
    cin >> m >> n >> o;
    int height1 = 0, height2 = 0, height3 = 0;

    int *a;
    int *b;
    int *c;
    a = new int[m];
    b = new int[n];
    c = new int[o];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
        height1 = height1 + a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        height2 = height2 + b[i];
    }

    for (int i = 0; i < o; i++)
    {
        cin >> c[i];
        height3 = height3 + c[i];
    }
    bool equalHeight = false;
    if (height1 == height2 && height2 == height3)
    {
        equalHeight = true;
    }
    while (equalHeight != true)
    {
        if (height1 >= height2 && height1 >= height3)
        {
            height1 = height1 - a[count1];
            count1++;
        }
        else if (height2 >= height1 && height2 >= height3)
        {
            height2 = height2 - b[count2];
            count2++;
        }
        else if (height3 >= height1 && height3 >= height2)
        {
            height3 = height3 - c[count3];
            count3++;
        }
        if ((height1 == height2 && height2 == height3) || (height1 == 0 && height2 == 0 && height3 == 0))
        {
            equalHeight = true;
        }
    }
    cout << height1;
    return 0;
}