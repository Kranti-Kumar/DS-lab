#include<bits/stdc++.h>
using namespace std;
class Stack{
    

    public: 
    // property
        int top;
        int size;
        int *arr;
        
    // Construture 
    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    
    // data member
    void push(int d){
        if(this->top<this->size){
            this->top++;
            this->arr[this->top] = d;
        }else{
            cout << " Stack is full < - : - >\n";
        }       
    }
    void pop(){
        if(this->top == -1){
            cout << "Stak is already empty \n";  
        }else{
            //this->arr[this->top] = NULL;
            this->top--;
        }
    }
    int tos(){
        if(this->top == -1){
            cout << "Stak is empty \n";
        }else{
            return arr[top];
        }
    }
    bool empty(){
        if(this->top == -1){
            return 0;
        }else{
            return 1;
        }
    }
    int sizeOfStack(){
        return (this->top);
    }
    void peek(){
        if(empty()==0){
            cout << "Can't peek as stack is empty"<<endl;
        }else
        cout << "TOP : " << arr[top]<<endl;
    }
};
int main(){
    int n;
        cout << "enter size of stack"<<endl;

    cin >> n;
    Stack* s = new Stack(n);
    int m = 1;
    while (m!=0)
    {
        cout << "enter value"<<endl;
        cin >> m;
    switch (m)
    {
    case 1:
        int x;
        cin >> x;
        s->push(x);
        cout << "item pushed"<<endl;
        break;
    case 2:
        s->pop();
        cout << "item poped"<<endl;
        break;
    case 3:
        s->peek();
        break;
    default:
        break;
    }
    }
    
    
    cout << "Is stack is empty ? : " << s->empty()<<endl;
    cout << "Is stack is empty ? : " << s->empty()<<endl;
    cout << "Printing the top element : " << s->tos() << endl;
    cout << "Size of stack : " << s->sizeOfStack() << endl;
    return 0;
}