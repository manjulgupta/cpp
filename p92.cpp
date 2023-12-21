//bottom view in binarytree
class Solution {
  public:
    vector <int> bottomView(Node *root) {
        map<int,int> node;// neeche ka node store karega
        queue<pair<Node*, int>> q;//node store karega distance k saath
        vector<int> ans;
        if(root==NULL){
            return ans;
        }
        
        q.push(make_pair(root,0));
        
        while(!q.empty()){
            pair<Node*, int> curr=q.front();
            q.pop();
            int h=curr.second;
            Node* temp=curr.first;
            node[h]=temp->data;
            
            if(temp->left){
                q.push(make_pair(temp->left,h-1));
            }
            if(temp->right){
                q.push(make_pair(temp->right,h+1));
            }
        }
        
        for(auto i:node){
            ans.push_back(i.second);
        }
        return ans;
    }
};