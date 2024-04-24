#include<bits/stdc++.h>
using namespace std; 
class NStack
{
    int *arr;
    int *top;
    int *next;
    int freeIndex;
public:
    NStack(int N, int S)
    {
        int n=N;
        int s=S;
        arr = new int[s];
        next = new int[s];
        top = new int[n];
        for(int i=0;i<n;i++){
            top[i]=-1;
        }
        for(int i=0;i<s;i++){
            next[i]=i+1;
        }
        next[s-1]=-1;
        freeIndex=0;
    }
    bool push(int x, int m)
    {
        if(freeIndex==-1){
            cout << "stack overflow \n\n"<<endl;
            return false;
        }
        int index= freeIndex;
        freeIndex=next[index];
        arr[index]=x;
        next[index]=top[m-1];
        top[m-1]=index;
        return true;
    }
    int pop(int m)
    {
        if(top[m-1]==-1){
            cout << "stack is empty" << endl;
            return -1;
        }
        int index = top[m-1];
        top[m-1]=next[index];
        next[index]=freeIndex;
        freeIndex=index;
        return arr[index];
    }
};
int main(){
    int N, S, M,x,a;
    cout<<"Enter the number of stack u want "<<endl;
    cin >> N;
    cout<<"Enter the Size of stack "<<endl;
    cin >> S;
    NStack *stk = new NStack(N, S);
    x = 0;
    while (x!=3)
    {
    cout << "Enter the option \n 1:- push \n 2:- pop \n 3:- exit" << endl;
    cin >> x;
    switch (x)
    {
    case 1:
        cout << "enter the stack no";
        cin >> a;
        cout << "enter the element ";
        cin >> M;
        stk->push(M,a);
        break;
    case 2:
        cout << "enter the stack no";
        cin >> a;
        stk->pop(a);
        break;
    case 3:
        cout << " Exit ";
    default:
        cout << "error";
        break;
    }
    }
    return 0;
}