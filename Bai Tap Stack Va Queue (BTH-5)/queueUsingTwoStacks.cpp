#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> a, b;
    int n;
    cin >> n;

    while (n--)
    {
        int thaotac, x;
        cin >> thaotac;
        if (thaotac == 1)
        {
            cin >> x;
            b.push(x);
        }
        else
        {
            if (a.empty())
            {
                while (!b.empty())
                {
                    a.push(b.top());
                    b.pop();
                }
            }
            if (!a.empty())
            {
                if (thaotac == 2)
                    a.pop();
                if (thaotac == 3)
                    cout << a.top() << endl;
            }
        }
    }
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     queue<int> s;
//     int n,t,x;
//     cin>>n;
//     for (int i=0;i<n;i++){
//         cin>>t;
//         if (t==1){
//             cin>>x;
//             s.push(x);
//         }
//         if (t==2){
//             s.pop();
//         }
//         if (t==3){
//             cout<<s.front()<<endl;
//         }
//     }
// }