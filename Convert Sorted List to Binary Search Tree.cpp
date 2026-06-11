class Solution {
public:
    TreeNode* Build(ListNode* head, ListNode* tail){
        if(head == tail)
        return nullptr;

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != tail && fast -> next != tail){
            slow = slow -> next;
            fast = fast -> next -> next;


        }
        TreeNode* root = new TreeNode(slow -> val);

        root -> left = Build(head, slow);
        root -> right = Build(slow -> next, tail);
        return root;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        return Build(head, nullptr);

    }
};
