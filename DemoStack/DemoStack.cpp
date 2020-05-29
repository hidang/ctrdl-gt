#include <iostream>
#include <stack>
using namespace std;

// class NODE
// {
//     public:
//         int Data;
//         NODE* pNext;

//         NODE(int _data){
//             Data = _data;
//             pNext = NULL;
//         }
// };


// class Stack{
//     private:
//         NODE* pHead;

//     public:
//         Stack(){
//             pHead =NULL;
//         }
//         bool isEmpty(){
//             return (pHead==NULL);
//         }
//         // int size(){
//         //  return
//         // }
//         void push(int _data){
//             NODE* p = new NODE(_data);
//             p->pNext = pHead;
//             pHead = p;
//         }
//         int pop(){
//             NODE* p = pHead;
//             int t = pHead->Data;
//             pHead = pHead->pNext;
//             delete p;
//             return t;
//         }
//         int top(){
//             return pHead->Data;
//         }
// };

int main(){
    stack<int> s;
    s.push(1);
    cout<<s.top()<<endl; s.pop();
    return 0;
}