#include <bits/stdc++.h>
using namespace std;
class Stack
{
public:
    int *arr;
    int top;
    int size;
    Stack(int Size)
    {
        arr = new int[Size];
        top = -1;
        size = Size;
    }
    void push(int data)
    {
        if (top == size - 1)
        {
            cout << "Stack is full!" << endl;
        }
        else
        {
            top = top + 1;
            arr[top] = data;
            cout << "Data entered Sucefully!" << endl;
        }
    }
    void pop()
    {
        if (top == -1)
            cout << "Stack is Empty!" << endl;
        else
        {
            int item = arr[top];
            top = top - 1;
            cout << item << " deleted!" << endl;
        }
    }
};
int main()
{
    int data, size;
    cout << "Enter the size: " << endl;
    cin >> size;
    Stack *stack = new Stack(size);
    int x = 0;
    while (x != 3)
    {
        cout << "Enter \n1 to push \n2 to pop\n3 to exit" << endl;
        cin >> x;
        switch (x)
        {
        case 1:
            cout << "Enter the data: " << endl;
            cin >> data;
            stack->push(data);
            break;
        case 2:
            stack->pop();
            break;
        case 3:
            exit(0);
        default:
            break;
        }
    }
}
