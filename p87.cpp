//Creating a binary tree

#include<iostream>
#include<queue>
using namespace std;

class node{
    public:

    int data;
    node* left;
    node* right;

    node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
};

node* BiTreeCreator(node* root){
    cout<<"Enter the data :"<<endl;
    int data;
    cin>>data;
    if(data==-1){
        return NULL;
    }
    root=new node(data);
    cout<<"Enter data for LEFT node of "<<data<<endl;
    
    root->left=BiTreeCreator(root->left);

    cout<<"Enter data for RIGHT node of "<<data<<endl;

    root->right=BiTreeCreator(root->right);

    return root;
}

void levelOrderTra(node* root){
    queue<node*> q; //queue is how we traverse within a level
    q.push(root);
    q.push(NULL);   //SEPARATOR
    int c=1;
    while(!q.empty()){
        
        node* temp=q.front();

        if(temp==NULL){
            q.pop();
            if(q.empty() || q.front()==NULL){
                break;
            }
            q.push(NULL);   //thinQ
            cout<<"\nLEVEL "<<c++<<": ";
        }

        temp=q.front();
        q.pop();
        cout<<temp->data<<" ";

        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
        
    }
}

//LNR
void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
//NLR
void preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
//LRN
void postorder(node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

void levelOrder2Tree(node* &root){
    queue<node*> q;
    //q.push(root);//
    cout<<"Enter data for root: ";
    int data;
    cin>>data;
    root=new node(data);
    q.push(root);//

    while(!q.empty()){
        node* temp=q.front();
        cout<<"Enter data for LEFT node for "<<temp->data<<": ";
        cin>>data;
        if(data==-1){
            temp->left=NULL;
        }
        else{
            temp->left=new node(data);
            q.push(temp->left);
        }

        cout<<"Enter data for RIGHT node for "<<temp->data<<": ";
        cin>>data;
        if(data==-1){
            temp->right=NULL;
        }
        else{
            temp->right=new node(data);
            q.push(temp->right);
        }

        q.pop();

    }

}

int main()
{
    node* root=NULL;
    //root=BiTreeCreator(root);

    levelOrder2Tree(root);
    levelOrderTra(root);

    cout<<"\nInorder :";
    inorder(root);  //iterative waala solve karo


 return 0;
}

//  1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1