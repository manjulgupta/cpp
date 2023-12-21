/********************************************************************
MERGE SORT IN LINKED LIST:::::
    class node{
        public:
            int data;
            node * next;
            node(int data){
                this->data=data;
                this->next=NULL;
            }
    };    
********************************************************************/
node* midFinder(node* head){
    node*slow=head;
    node*fast=head->next;//   HEAD KA NEXT????

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=(fast->next)->next;
    }

    return slow;
}

node* merge(node* l, node* r){
    if(l==NULL)
        return r;
    if(r==NULL)
        return l;

    node* temp=new node(-1);//NINJA TEKNIK: dummy node created
    node* t=temp;
    while(l!=NULL || r!=NULL){
        if(l==NULL){
            t->next=r;
            r=r->next;
        }
        else if(r==NULL){
            t->next=l;
            l=l->next;
        }
        else if(l->data<=r->data){
            t->next=l;
            l=l->next;
        }
        else{
            t->next=r;
            r=r->next;
        }
        t=t->next;
    }

    return temp->next;
}

node* mergeSort(node *head) {

    if(head==NULL || head->next==NULL){
        return head;
    }
    node* mid=midFinder(head);
    node* left=mid->next;
    mid->next=NULL;
    left=mergeSort(left);
    head=mergeSort(head);

    return merge(head,left);
}