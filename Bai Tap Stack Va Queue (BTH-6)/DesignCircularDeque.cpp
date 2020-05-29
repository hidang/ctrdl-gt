//https://leetcode.com/problems/design-circular-deque/
//https://nguyenvanhieu.vn/hang-doi-queue/#4-2-hang-doi-vong
//http://www.cplusplus.com/reference/deque/deque/insert/
#include <iostream>
#include <deque>
using namespace std;
class MyCircularDeque
{
    int count, dequeSize;
    deque<int> mydeque;

public:
    /** Initialize your data structure here. Set the size of the deque to be k. */
    MyCircularDeque(int k)
    {
        count = 0, dequeSize = k;
    }

    /** Adds an item at the front of Deque. Return true if the operation is successful. */
    bool insertFront(int value)
    {

        if (count == this->dequeSize) // Queue is full
            //cout<<"OverFlow"<<endl;
            return 0;
        else
        {
            count++;
            // deque<int>::iterator it = mydeque.begin();
            // mydeque.insert(it, 1, temp);
            mydeque.push_front(value);
            return 1;
        }
    }

    /** Adds an item at the rear of Deque. Return true if the operation is successful. */
    bool insertLast(int value)
    {
        if (count == this->dequeSize) // Queue is full
            //cout<<"OverFlow"<<endl;
            return 0;
        else
        {
            count++;
            mydeque.push_back(value);
            return 1;
        }
    }

    /** Deletes an item from the front of Deque. Return true if the operation is successful. */
    bool deleteFront()
    {
        if (mydeque.empty())
        {
            return 0;
        }
        else
        {
            count--;
            mydeque.pop_front();
            return 1;
        }
    }

    /** Deletes an item from the rear of Deque. Return true if the operation is successful. */
    bool deleteLast()
    {
        if (mydeque.empty())
        {
            return 0;
        }
        else
        {
            count--;
            mydeque.pop_back();
            return 1;
        }
    }

    /** Get the front item from the deque. */
    int getFront()
    {
        if (count != 0)
            return mydeque.front();
        return -1;
    }

    /** Get the last item from the deque. */
    int getRear()
    {
        if (count != 0)
            return mydeque.back();
        return -1;
    }

    /** Checks whether the circular deque is empty or not. */
    bool isEmpty()
    {
        if (mydeque.empty())
            return 1;
        return 0;
    }

    /** Checks whether the circular deque is full or not. */
    bool isFull()
    {
        if (count == dequeSize)
            return 1;
        return 0;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */
int main()
{
    int k, n;
    cin >> k >> n;
    MyCircularDeque A(k);
    while (n--)
    {
        int mode;
        cin >> mode;
        if (mode == 1)
        {
            int temp;
            cin >> temp;
            cout << A.insertFront(temp) << endl;
        }
        if (mode == 2)
        {
            int temp;
            cin >> temp;
            cout << A.insertLast(temp) << endl;
        }
        if (mode == 3)
        {
            cout << A.deleteFront() << endl;
        }
        if (mode == 4)
        {
            cout << A.deleteLast() << endl;
        }
        if (mode == 5)
        {
            cout << A.getFront() << endl;
        }
        if (mode == 6)
        {
            cout << A.getRear() << endl;
        }
        if (mode == 7)
        {
            cout << A.isEmpty() << endl;
        }
        if (mode == 8)
        {
            cout << A.isFull() << endl;
        }
    }

    return 0;
}