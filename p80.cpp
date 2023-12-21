//linked list-nodes
//HOW WE CREATE A RANDOM POINTER TO OUR FAVOUR
//& CLEVERLY GET RID OF IT!!!

/* Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node *sortList(Node *head)
{

    Node *hZero = new Node(-1);
    Node *tZero = hZero;
    Node *hOne = new Node(-1);
    Node *tOne = hOne;
    Node *hTwo = new Node(-1);
    Node *tTwo = hTwo;

    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == 0)
        {
            tZero->next = temp;
            tZero = temp;
        }

        if (temp->data == 1)
        {
            tOne->next = temp;
            tOne = temp;
        }

        if (temp->data == 2)
        {
            tTwo->next = temp;
            tTwo = temp;
        }

        Node *prev = temp;
        temp = temp->next;
        prev->next = NULL;
    }
    tZero->next = hOne->next;
    tOne->next = hTwo->next;

    return hZero->next;
}