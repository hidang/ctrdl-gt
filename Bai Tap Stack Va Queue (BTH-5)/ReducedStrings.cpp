#include <iostream>
#include <string>
#include <stack>
using namespace std;
void superReducedString(string s)
{
    char kq[100000];
    int pt = 0;
    stack<char> mystack;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (mystack.empty())
        {
            mystack.push(s[i]);
            kq[pt] = mystack.top();
            pt++;
        }
        else if (s[i] != mystack.top())
        {
            mystack.push(s[i]);
            kq[pt] = mystack.top();
            pt++;
        }
        else
        {
            mystack.pop();
            pt--;
        }
    }

    if (mystack.empty())
    {
        cout << "Empty String";
    }
    else
    {
        for (int i = 0; i < mystack.size(); i++)
        {
            cout << kq[i];
        }
    }
}
int main()
{
    char s[10000];
    cin >> s;
    superReducedString(s);
    return 0;
}

//using namespace std;
// int main(){
//     int n,d=1;
//     string s;
//     char ss[10000];
//     stack<char> mystack;
//     mystack.push('1');
//     getline(cin,s); n=s.length();
//     for (int i=0;i<n;i++){
//         if (s[i]==mystack.top()) mystack.pop();
//         else mystack.push(s[i]);
//     }
//     if (mystack.size()==1) cout<<"Empty String";
//     else{
//     ss[mystack.size()]=mystack.top();
//     mystack.pop();
//     while (mystack.size()>1){
//         ss[mystack.size()]=mystack.top();
//         mystack.pop();
//         ++d;
//     }
//     for (int i=2;i<=d+1;i++)
//      cout<<ss[i];
//     }
// }