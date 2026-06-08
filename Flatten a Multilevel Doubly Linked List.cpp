class Solution {
public:
    Node* flatten(Node* head) {
        if (!head) return head;

        stack<Node*> st;
        st.push(head);

        Node* prev = nullptr;

        while (!st.empty()) {
            Node* curr = st.top();
            st.pop();

            if (prev) {
                prev->next = curr;
                curr->prev = prev;
            }

            if (curr->next)
                st.push(curr->next);

            if (curr->child)
                st.push(curr->child);

            curr->child = nullptr;
            prev = curr;
        }

        return head;
    }
};
