#include <iostream>
using namespace std;

struct Node
{
    int coefficient;
    int exponent;
    Node *next;

    Node(int coeff, int exp) {
        coefficient=coeff;
        exponent=exp;
        next=nullptr;
    }
};

Node *addPolynomials(Node *poly1, Node *poly2)
{
    Node *dummy = new Node(0, 0);
    Node *current = dummy;

    while (poly1 && poly2)
    {
        if (poly1->exponent > poly2->exponent)
        {
            current->next = new Node(poly1->coefficient, poly1->exponent);
            poly1 = poly1->next;
        }
        else if (poly1->exponent < poly2->exponent)
        {
            current->next = new Node(poly2->coefficient, poly2->exponent);
            poly2 = poly2->next;
        }
        else
        {
            int sum = poly1->coefficient + poly2->coefficient;
            if (sum != 0)
            {
                current->next = new Node(sum, poly1->exponent);
            }
            poly1 = poly1->next;
            poly2 = poly2->next;
        }
        current = current->next;
    }

    while (poly1)
    {
        current->next = new Node(poly1->coefficient, poly1->exponent);
        poly1 = poly1->next;
        current = current->next;
    }

    while (poly2)
    {
        current->next = new Node(poly2->coefficient, poly2->exponent);
        poly2 = poly2->next;
        current = current->next;
    }

    return dummy->next;
}

void displayPolynomial(Node *poly)
{
    while (poly)
    {
        cout << poly->coefficient << "x^" << poly->exponent;
        poly = poly->next;
        if (poly)
        {
            cout << " + ";
        }
    }
    cout << endl;
}

int main()
{
    Node *poly1 = new Node(5, 2);
    poly1->next = new Node(4, 1);
    poly1->next->next = new Node(2, 0);

    Node *poly2 = new Node(3, 2);
    poly2->next = new Node(6, 1);
    poly2->next->next = new Node(1, 0);

    
    Node *result = addPolynomials(poly1, poly2);

    
    cout << "Resultant polynomial: ";
    displayPolynomial(result);

    return 0;
}
