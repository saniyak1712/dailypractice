class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        if (root == nullptr)
            return {};

        queue<TreeNode*> q;
        vector<int> ans;

        q.push(root);

        while (!q.empty()) {
            int n = q.size();

            while (n--) {
                TreeNode* curr = q.front();
                q.pop();

                // Last node of current level
                if (n == 0)
                    ans.push_back(curr->val);

                if (curr->left)
                    q.push(curr->left);

                if (curr->right)
                    q.push(curr->right);
            }
        }

        return ans;
    }
};
