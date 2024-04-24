#include<bits/stdc++.h>
using namespace std;
class Queue{
        int *arr;
        int front;
        int rear;
        int size;
    public:
        Queue(int Size)
        {
            arr = new int[Size];
            size = Size;
            front = 0;
            rear = 0;
        }
        void push(int data){
            if(rear==size){
                cout << "Overloaded" << endl;
                return;
            }
            arr[rear] = data;
            rear++;
        }
        void pop(){
            if(empty()){
                cout << "Queue is already empty" << endl;
                return;
            }
            arr[front] = -1;
            front++;
            if(front==rear){
                front = 0;
                rear = 0;
            }
        }
        void top(){
            cout<< arr[front]<<endl;
        }
        bool empty(){
            if(front==rear)
            {
                return true;
            }else{
                return false;
            }
        }      
};
int main(){
    int N, S;
    cout<<"Enter the Size "<<endl;
    cin >> S;
    Queue *queue = new Queue(S);
    int x = 0;
    while (x!=5)
    {
    cout << "Enter the option \n 1:- push \n 2:- pop \n 3:- top \n 4:- isempty \n 5:- exit" << endl;
    cin >> x;
    switch (x)
    {
    case 1:
        cout << "enter the element ";
        cin >> N;
        queue->push(N);
        break;
    case 2:
        queue->pop();
        break;
    case 3:
        queue->top();
        break;
    case 4:
        queue->empty();
        break;
    case 5:
            cout << exit;
            break;
    default:
        cout << "error";
        break;
    }
    }
    return 0;
}