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
    ListNode* oddEvenList(ListNode* head) {
        if (!head || !head -> next) return head;
        
        ListNode* dummy = head;
        ListNode* temp = new ListNode(-1);
        ListNode* head1 = temp;

        while (dummy) {
            temp -> next = new ListNode(dummy -> val);
            temp = temp -> next;

            if (dummy -> next && dummy -> next -> next){
                dummy = dummy -> next -> next;
            }
            else break;
        }

        dummy = head -> next;
        while (dummy) {
            temp -> next = new ListNode(dummy -> val);
            temp = temp -> next;

            if (dummy -> next && dummy -> next -> next){
                dummy = dummy -> next -> next;
            }
            else break;
        }
    
    
        return head1 -> next;
    }
};