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
    ListNode* deleteMiddle(ListNode* head) {
        if (!head || !head -> next) return NULL;

        int cnt = 0;

        ListNode* temp;
        for (temp = head; temp != nullptr; temp = temp->next){
            cnt++;
        }
        
        cnt /= 2;
        temp = head;

        for (int i = cnt; i > 1; i--){
            temp = temp -> next;
        }

        ListNode* remove = temp -> next;
        temp -> next = temp -> next -> next;
        
        delete remove;
        return head;

    }
};