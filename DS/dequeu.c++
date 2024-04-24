#include<bits/stdc++.h>
using namespace std;
class Queue{
    int *arr;
    int front;
    int rear;
    int size;
    public:
    Queue(int n){
        this->size = n;
        this->arr = new int[n];
        this->front = this->rear = -1;
    }
    void push_back(int n){
        if(this->rear=this->front==-1){
            this->rear = this->front = 0;
        }else if(this->rear==(this->size-1)&& this->front!=-1){
            this->rear = 0;
        }else if((this->rear==(this->size-1)&& this->front==-1) || (this->rear+1)==this->front){
            cout << "Queue is full\n";
            return;
        }else{
            this->rear++;
        }
        this->arr[this->rear] = n;
    }
    void push_front(int n ){
        if(this->rear=this->front==-1){
            this->rear = this->front = 0;
        }else if(this->front==-1&&this->rear!=(this->size-1)){
            this->front = this->size - 1;
        }else if((this->rear==(this->size-1)&& this->front==-1) || (this->rear+1)==this->front){
            cout << "Queue is full\n";
            return;
        }else{
            this->front--;
        }
        this->arr[this->front] = n;
    }
    int pop_front(){
        if(this->front==this->rear==-1){
            cout << "Queue is empty\n";
            return 0;
        }
        int value = this->arr[this->front];
        if(this->rear==this->front){
            this->rear = this->front = -1;
        }else if((this->front==(this->size-1))){
            this->front = 0;
        }else{
            this->front++;
        }
        return value;
    }
    int pop_back(){
        if(this->front==this->rear==-1){
            cout << "Queue is empty\n";
            return 0;
        }
        int value = this->arr[this->rear];
         if(this->rear==this->front){
            this->rear = this->front = -1;
        }else if(this->rear==0){
            this->rear = this->size - 1;
        }else{
            this->rear--;
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
