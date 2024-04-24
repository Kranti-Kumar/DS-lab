#include<bits/stdc++.h>
using namespace std;
class Queue{
    int *arr;
    int front;
    int rear;
    int size;
    public:
    Queue(int n){
        size = n;
        arr = new int[n];
        front = rear = -1;
    }
    void push_back(int n){
        if(rear==front==-1){
            rear = front = 0;
        }else if(rear==(size-1)&& front!=-1){
            rear = 0;
        }else if((rear==(size-1)&& front==-1) || (rear+1)==front){
            cout << "Queue is full\n";
            return;
        }else{
            rear++;
        }
        arr[rear] = n;
    }
    void push_front(int n ){
        if(rear==front==-1){
            rear = front = 0;
        }else if(front==-1 && rear!=(size-1)){
            front = size - 1;
        }else if((rear==(size-1)&& front==-1) || (rear+1)==front){
            cout << " Queue is full \n";
            return;
        }else{
            front--;
        }
        arr[front] = n;
    }
    int pop_front(){
        if(front&&rear==-1){
            cout << " Queue is empty \n";
            return 0;
        }
        int value = arr[front];
        if(rear==front){
            rear = front = -1;
        }else if((front==(size-1))){
            front = 0;
        }else{
            front++;
        }
        return value;
    }
    int pop_back(){
        if(front&&rear==-1){
            cout << "Queue is empty\n";
            return 0;
        }
        int value = arr[rear];
        if(rear==front){
            rear = front = -1;
        }else if(rear==0){
            rear = size - 1;
        }else{
            rear--;
        }
        return value;
    }
};
int main(){
    int size, element,select;
    cout << "Enter the size of the queue : " ;
    cin >> size;
    Queue *queue = new Queue(size);
    char ch;
    do
    {
        cout << "\nEnter 1 to push_front "<< endl;
        cout << "Enter 2 to push_back "<< endl;
        cout << "Enter 3 to pop_front "<< endl;
        cout << "Enter 4 to pop_back "<< endl;
        cin >> select;
        switch (select)
        {
        case 1:
            cout << "Enter the element to push "<< endl;
            cin >> element;
            queue->push_front(element);
            break;
        case 2:
            cout << "Enter the element to push "<< endl;
            cin >> element;
            queue->push_back(element);
            break;
        case 3: 
            queue->pop_front();
            break;
        case 4: 
            queue->pop_back();
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