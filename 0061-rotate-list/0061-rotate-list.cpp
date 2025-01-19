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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next || k == 0) return head;
        
        ListNode* dummy = head;
        int cnt = 1;
        while (dummy->next){
            cnt++;
            dummy = dummy-> next;
        }

        k %= cnt;
        if (k == 0) return head;
        k = cnt - k;

        ListNode* temp;
        ListNode* curhead = head;
    
        while (k){
            k--;
            temp = curhead;
            curhead = curhead -> next;
    
            temp -> next = NULL;
            dummy -> next = temp;
            dummy = dummy -> next;
    
        }
        return curhead;

    }
};