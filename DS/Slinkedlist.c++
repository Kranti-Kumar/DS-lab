#include<bits/stdc++.h>
using namespace std;
struct node{
    public:
    int data;
    node *next;
};
class Sll{
    public:
    node *start=NULL;
    
    void insert_b(int item){
    node *n = new node();
    n->data = item;
    if(start==NULL){
        start = n;
        cout << " insert B1" << endl;
    }else{
        n->next = start;
        start = n;
        cout << " insert B2" << endl;
    }
    }
    
    void insert_e(int item){
        node *temp = start;
        node *n = new node();
        n->data = item;
        if (start == NULL)
    {
        start = n;
        cout << " insert E1" << endl;
    }
        else{
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = n;
        n->next = NULL;
        cout<<" insert E2"<<endl;
        }
    }
    void display(){
        node *temp = start;
        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp = temp->next;
        }
    }
};
int main(){
    int item;
    Sll *obj = new Sll();
    
    int x = 0;
    while (x!=3)
    {
        cout << "element " << endl;
        cin >> item;
        obj->insert_b(item);
        obj->insert_e(item);
        obj->display();
        cout<<"x "<<endl;
        cin >> x;
    }
    
    
    return 0;
}