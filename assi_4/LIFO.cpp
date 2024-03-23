
#include <iostream>

using namespace std;

class Stack
{
    int stack;
    static int top;

public:
    void push(int value)
    {
        stack = value;
        top++;
    }
    void pop()
    {
        stack = 0;
        top--;
    }
    int peek()
    {
        // if(top!=0)
        return stack;
        // else
        // cout<<"Stack is Empty"<<endl;
        // return 0;
    }
    int isEmpty()
    {
        if (top == 0)
        {
            return 1;
        }
        else
            return 0;
    }
    int isFull(int size)
    {
        if (top >= size)
        {
            return 1;
        }
        else
            return 0;
    }
    void print()
    {
        if (top != 0)
        {
            cout << stack << endl;
        }
        else
            cout << "stack is empty" << endl;
    }
    int getTop()
    {
        return top;
    }
};
int Stack::top = 0;
int main()
{
    int size;
    cout << "Enter the size for stack creation" << endl;
    cin >> size;
    int choice;
    Stack *ptr = new Stack[size];
    // const size;
    // int index = 0;
    do
    {
        cout << "Enter 0 for exit" << endl;
        cout << "Enter 1 for push element on stack" << endl;
        cout << "Enter 2 for pop element on stack" << endl;
        cout << "Enter 3 for peek element on stack" << endl;
        cout << "Enter 4 for print stack on console" << endl;
        cout << "Enter your choice " << endl;
        cin >> choice;

        switch (choice)
        {
        case 0:
            cout << "Thank you..............." << endl;
            break;
        case 1:
            if (!ptr->isFull(size))
            {
                int num;
                cout << "Enter the number to push on stack" << endl;
                cin >> num;
                ptr[ptr->getTop()].push(num);
                // index++;
            }
            else
                cout << "Stack is Full" << endl;
            break;
        case 2:
            if (!ptr->isEmpty())
            {
                ptr[ptr->getTop()].pop();
                // index--;
            }
            else
                cout << "Stack is Empty" << endl;
            break;
        case 3:
            if (ptr->getTop() != 0)
                cout << "Element-" << ptr[ptr->getTop() - 1].peek() << endl;
            else
                cout << "Stack is Empty" << endl;
            break;
        case 4:
        {
            if (ptr->getTop() != 0)
            {
                for (int i = 0; i < ptr->getTop(); i++)
                {
                    ptr[i].print();
                }
            }
            else
                cout << "The stack is empty" << endl;
        }
        break;
        default:
            cout << "Enter the choice as per menu" << endl;
            break;
        }
    } while (choice != 0);

        delete[] ptr;
    return 0;
}