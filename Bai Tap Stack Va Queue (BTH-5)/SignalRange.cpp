#include <iostream>
#include <stack>
using namespace std;

void Calculate(int A[], int n, int ans[])
{
    // Giá trị khoảng cách của phần tử đầu tiên luôn là 1
    ans[0] = 1;
    int i;
    // Tính giá trị nhịp cho phần còn lại của các phần tử
    for (int i = 1; i < n; i++)
    {
        int tower = 1;
        while ((i - tower) >= 0 && A[i] >= A[i - tower])
        {
            tower = tower + ans[i - tower];
        }
        ans[i] = tower;
    }
}

// Dùng hàm để in các phần tử của mảng
void Print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++)
            cin >> a[i];

        int S[n];

        // Điền vào các giá trị trong mảng S[]
        Calculate(a, n, S);

        // in các giá trị tính toán ra
        Print(S, n);
    }
    return 0;
}