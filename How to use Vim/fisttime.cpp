#include <iostream>
#include <stack>

using namespace std;
int main()
{
    stack <int> s;
    stack <int> z;
    z.push(0);
    int i = 1, n, m;
    long long int x;
    cin >>n;
    while (n--){
        cin >> m;
        if ( m == 1 ){
            cin >> x;
            s.push(x);
            if ( x >= z.top() ){ //lon hon OR bằng // bằng không cho vào à
                z.push(x);
            }
        }
        if ( m == 2 ){
            if (s.top() == z.top()){
                z.pop();à
            }
            s.pop();
        }
        if ( m == 3 ){
            cout << z.top()<<endl;
        }
    }
    return 0;
}