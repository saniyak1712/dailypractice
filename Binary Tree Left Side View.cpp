class Solution {
  public:
    vector<int> leftView(Node *root) {
        // code here
        if(root == nullptr)
        return{};
        vector<int>ans;
        
        queue<Node*> q;
         q.push(root);
         
         while(!q.empty()){
             Node* curr = q.front();
             ans.push_back(curr -> data);
             int n = q.size();
             while(n--){
                 curr = q.front();
                 q.pop();
                 
                 if(curr -> left)
                 q.push(curr -> left);
                 
                 if(curr -> right)
                 q.push(curr -> right);
             }
         }
         return ans;
    }
};
