//https://www.geeksforgeeks.org/circular-queue-set-1-introduction-array-implementation/
class MyCircularQueue
{
public:
    int size, save, savefull;
    int rear, front;
    int *A;
    /** Initialize your data structure here. Set the size of the queue to be k. */
    MyCircularQueue(int k)
    {
        front = rear = -1;
        A = new int[k];
        this->size = k;
        save = size;
        savefull = save;
    }
    /** Insert an element into the circular queue. Return true if the operation is successful. */
    bool enQueue(int value)
    {
        if (save == 0)
            return 0;

        else if (front == -1) /* Insert First Element */
        {
            front = rear = 0;
            A[rear] = value;
        }
        else if (rear == size - 1 && front != 0) //
        {
            rear = 0;
            A[rear] = value;
        }
        else
        {
            rear++;
            A[rear] = value;
        }
        save--;
        return 1;
    }

    /** Delete an element from the circular queue. Return true if the operation is successful. */
    bool deQueue()
    {
        if (front == -1)
        {
            return 0;
        }

        A[front] = -1;
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else if (front == size - 1)
            front = 0;
        else
            front++;
        save++;
        return 1;
    }

    /** Get the front item from the queue. */
    int Front()
    {
        if (front == -1)
        {
            return -1;
        }
        return A[front];
    }

    /** Get the last item from the queue. */
    int Rear()
    {
        if (rear == -1)
        {
            return -1;
        }
        return A[rear];
    }

    /** Checks whether the circular queue is empty or not. */
    bool isEmpty()
    {
        if (save == savefull)
            return 1;
        return 0;
    }

    /** Checks whether the circular queue is full or not. */
    bool isFull()
    {
        if (save == 0)
            return 1;
        return 0;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */