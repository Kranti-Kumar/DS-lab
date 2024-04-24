#include<bits/stdc++.h>
using namespace std;
class CircularQueue{
    
        int *arr;
        int front;
        int rear;
        int size;

    public:
        CircularQueue(int Size)
        {
            size = Size;
            arr = new int[Size];
            front = -1;
            rear = -1;
        }
        void push(int d){
            if(front==0 && rear==size-1 ||rear==(front-1)%(size-1)){
                cout << "Queue is full" << endl;
                return;
            }
            else if(front==-1){
                front = rear = 0;
            }else if(rear==(size-1)&& front!=0){
                rear = 0;
            }else{
                rear++;
            }
            arr[rear] = d;

        }
        void pop(){
            if(front==rear==-1){
                cout << "Queue is empty" << endl;
                return;
            }else if(front==rear){
                arr[front] = -1;
                front = rear = -1;
            }else if(front==size-1){
                arr[front] = -1;
                front = 0;
            }else{
                arr[front] = -1;
                front++;
            }
        }
};
int main(){
    int size, element,select;
    cout << "Enter the size of the queue : " ;
    cin >> size;
    CircularQueue *queue = new CircularQueue(size);
    char ch;
    do
    {
        cout << "\nEnter 1 to push "<< endl;
        cout << "Enter 2 to pop "<< endl;
        cin >> select;
        switch (select)
        {
        case 1:
            cout << "Enter the element to push "<< endl;
            cin >> element;
            queue->push(element);
            break;
        case 2: 
            queue->pop();
            break;
        default:
            cout << "invalid select"<<endl;
            break;
        }
        cout << "Do you want to continue(Y/N): " << endl;
        cin >> ch;
    } while (ch == 'Y');
    
    return 0;
}