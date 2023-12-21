//SINGLE LINKED LIST
// use of "map" technology demonstration
#include <bits/stdc++.h>
#include<map>

using namespace std;

class Node
{
public:
    int data;
    Node *next; // agle node ki location store karega
    //      NEXT=NULL BY DEFAULT???????????????
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void print(Node *&head)
{ //(node*  head) ko bulana hai pass by ref
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}
void insertAt(Node *&head, Node *&tail, int pos, int d)
{

    if (pos == 1)
    {
        Node *temp = new Node(d);
        temp->next = head;
        head = temp;
        return;
    }

    // //WHY WRONG?? PONDER LATER
    // Node* temp=head;
    // if(pos==1){
    //         cout<<head->data<<endl;
    //     temp->data=head->data;
    //         cout<<temp->data<<endl;
    //     head->data=d;
    //         cout<<temp->data<<endl;
    //     temp->next=head->next;
    //     head->next=temp;
    //     return;
    // }

    Node *temp = head;  //traverser's index
    for (int i = 1; i < pos-1; i++)
    {
        temp = temp->next;  //this is how we traverse in LL
    }
    Node* toInsert=new Node(d);
    toInsert->next=temp->next;
    temp->next=toInsert;

    if(toInsert->next==NULL){
        tail=toInsert;
    }


    // temp->next=temp;
    // swap(temp,head);
    // cout<<temp->data<<endl;
    // cout<<head->data<<endl;
    // cout<<temp<<endl;
}

Node* tailFinder(Node *&node){
    while(node->next!=NULL){
        node=node->next;
    }
    return node;
}

void reverseLL(Node*&head){
    Node* curr=head;
    Node* nxt=curr->next;
    Node* pre=NULL;
    while(curr!=NULL){
        nxt=curr->next;
        curr->next=pre;
        pre=curr;
        curr=nxt;
    }
    head=pre;
}


//in FLOYDS CYCLE ALGO, slow=head when slow==fast   *
//& then fast moves with normal pace.               *
Node *removeLoop(Node *head)
{
    map<Node*, bool> visited;
    Node* temp=head;
    Node* prev=NULL;
    while(temp!=NULL){
        if(visited[temp]==0){
            visited[temp]=1;
        }
        else{
            prev->next=NULL;
            return head;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}

int main()
{
    Node *one = new Node(5);
    Node* head=one;
    Node* tail=one;
    insertAt(head, tail, 1, 3);
    insertAt(head, tail, 2, 7);
    insertAt(head, tail, 4, 2);
    insertAt(head, tail, 4, 1);
    
    print(head);
    reverseLL(head);
    print(head);
    // Node head(5);
    // cout<<tailFinder(one)->data<<endl;
    // cout<<tail->data<<endl;

    return 0;
}