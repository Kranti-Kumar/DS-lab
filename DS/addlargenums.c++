#include <iostream>
#include <stack>
using namespace std;
class Node
{
private:
    int num;
    Node *next;

public:
    Node(int n) : num(n), next(nullptr) {}

    void insert(Node *&root, int num)
    {
        Node *newNode = new Node(num);
        if (root == nullptr)
        {
            root = newNode;
        }
        else
        {
            Node *temp = root;
            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void sum(Node *root1, Node *root2, stack<int> &st)
    {
        int carry = 0;
        while (root1 != nullptr || root2 != nullptr || carry != 0)
        {
            int sumNo = carry;
            if (root1 != nullptr)
            {
                sumNo += root1->num;
                root1 = root1->next;
            }
            if (root2 != nullptr)
            {
                sumNo += root2->num;
                root2 = root2->next;
            }
            carry = sumNo / 10;
            sumNo %= 10;
            st.push(sumNo);
        }
    }
};

int main()
{
    Node *root1 = nullptr;
    Node *root2 = nullptr;
    int num1, num2;
    cout << "Enter two number ";
    cin >> num1 >> num2;
    while (num1 > 0)
    {
        int n1 = num1 % 10;
        root1->insert(root1, n1);
        num1 /= 10;
    }
    while (num2 > 0)
    {
        int n1 = num2 % 10;
        root2->insert(root2, n1);
        num2 /= 10;
    }
    stack<int> stk;
    Node *node = NULL;
    node->sum(root1, root2, stk);

    cout << "Sum of linked lists: ";
    while (!stk.empty())
    {
        cout << stk.top();
        stk.pop();
    }
    cout << endl;

    return 0;
}