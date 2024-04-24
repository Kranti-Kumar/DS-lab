#include<bits/stdc++.h>
using namespace std;
class N_Queue{
    int *arr;
    int *front;
    int *rear;
    int *next;
    int freeSpace;
    int n;
    public:
    N_Queue(int size,int no_of_array){
        arr = new int[size];
        next = new int[size];
        rear = new int[no_of_array];
        front = new int[no_of_array];
        freeSpace = 0;
        for (int i = 0; i < size-1; i++)
        {
            next[i] = i + 1;
        }
        next[size - 1] = -1;
        for (int i = 0; i < no_of_array; i++)
        {
            front[i] = -1;
            rear[i] = -1;
        }
    }
    void check_front(int which_queue){
        if(rear[which_queue] == -1){
            cout << " Queue is empty " << endl;
            return;
        }
        cout << " Element at front " << front[which_queue] << endl;
    }
void enqueue(int which_queue, int which_element) {
    if (freeSpace == -1) {
        cout << "Queue is full!" << endl;
        return;
    }
    int index = freeSpace;
    freeSpace = next[index];
    if (front[which_queue] == -1) {
        front[which_queue] = index;
    } else {
        next[rear[which_queue]] = index;
    }
    next[index] = -1;
    rear[which_queue] = index;
    arr[index] = which_element;
    cout << "Element Added " << endl;
}

    void dequeue(int which_queue){
        if(front[which_queue]==-1){
            cout << "Queue is empty" << endl;
            return;
        }
        int index = front[which_queue];
        front[which_queue] = next[index];
        int temp = freeSpace;
        freeSpace = index;
        next[index] = temp;
        cout << "Element poped" << endl;
    }
};

int main(){
int size, element,select,number,which_queue;
    cout << "Enter the size of the queue : " ;
    cin >> size;
    cout << "Enter the number of queues : " ;
    cin >> number;
    N_Queue *queue = new N_Queue(size , number);
    char ch;
    do
    {
        cout << "\nEnter 1 to enqueue "<< endl;
        cout << "Enter 2 to dequeue "<< endl;
        cout << "Enter 3 to front_element "<< endl;
        cin >> select;
        switch (select)
        {
        case 1:
            cout << "Enter the element to push "<< endl;
            cin >> element;
            cout << "Enter the queue number in which you want to enqueue "<< endl;
            cin >> which_queue;
            queue->enqueue(element , --which_queue);
            break;
        case 2:
            cout << "Enter the queue number in which you want to dequeue "<< endl;
            cin >> which_queue;
            queue->dequeue(--which_queue);
            break;
        case 3: 
            cout << "Enter the queue number"<< endl;
            cin >> which_queue;
            queue->check_front(which_queue);
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