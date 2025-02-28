/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        
        ListNode *cur = head, *prev = NULL, *tmp;
        while(cur) {
            tmp = cur -> next;
            cur -> next = prev;
            prev = cur;
            cur = tmp;
        }
        
        stack <int> st;
        vector <int> res;
        ListNode *h = prev;
        
        while (h) { 
            while (!st.empty() && h -> val >= st.top())
                st.pop();

            if (st.empty())
                res.push_back(0);
            else
                res.push_back(st.top());

            st.push(h->val);
            h = h-> next;
        }

        reverse(res.begin(), res.end());
        return res;
    }
};