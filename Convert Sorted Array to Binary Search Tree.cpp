class Solution {
    TreeNode* solve(vector<int>&arr,int low,int high){
        if(high<low){
            return nullptr;
        }
        int mid=(low+high)/2;
        TreeNode *root=new TreeNode(arr[mid]);
        root->left=solve(arr,low,mid-1);
        root->right=solve(arr,mid+1,high);
        return root;
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return solve(nums,0,nums.size()-1);
    }
};
