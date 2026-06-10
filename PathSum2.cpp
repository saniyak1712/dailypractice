class Solution {
    void solve(TreeNode* root, int target, vector<int>& path, vector<vector<int>> & ans){
        if(root == NULL)
        return;

        path.push_back(root -> val);

        if(root -> left == NULL && root->right == NULL && target == root->val){
            ans.push_back(path);
        }
        solve(root -> left, target - root->val,path,ans);
        solve(root -> right, target - root->val,path,ans);

        path.pop_back();
    }
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        vector<int>path;

        solve(root, targetSum,path, ans);

        return ans;
    }
};
