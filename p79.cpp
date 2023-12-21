// Doubly Circular LINKED LIST

#include <iostream>
#include <map>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next; // node ki location store karega
    //      NEXT=NULL BY DEFAULT???????????????
    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void print(Node *&head)
{ //(node*  head) ko bulana hai pass by ref
    Node *temp = head;
    // sticker
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);

    cout << endl;
}
void insertAt(Node *&head, Node *&tail, int pos, int d)
{

    if (pos == 1)
    {
        Node *temp = new Node(d);
        temp->next = head;
        temp->prev = tail;
        head = temp;
        tail->next=head;
        return;
    }

    Node *temp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        temp = temp->next;
    }

    Node *toInsert = new Node(d);
    toInsert->next = temp->next;
    toInsert->prev = temp;
    temp->next = toInsert;
    (temp->next)->prev = toInsert;

    // Check if the new node is being inserted at the end of the list.
    if (toInsert->next == head)
    {
        tail = toInsert;
    }
}

Node *tailFinder(Node *&head)
{
    Node *node = head;
    do
    {
        node = node->next;
    } while (node->next != head);
    return node;
}

int main()
{
    Node *one = new Node(5);
    Node *head = one;
    Node *tail = one;
    
    insertAt(head, tail, 1, 3);
    insertAt(head, tail, 2, 7);
    insertAt(head, tail, 4, 2);
    insertAt(head, tail, 4, 1);

    print(head);
    
    // Node head(5);
    cout<<tailFinder(head)->data<<endl;
    return 0;
}