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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (!head) return head;
        if (!head -> next && n == 1) return NULL;

        int cnt = 0;
        ListNode* temp = head;

        while (temp) {
            cnt++;
            temp = temp -> next;
        }

        cnt -= n;
        int cur = 0;
        temp = head;

        if (cnt == 0) {
            temp = head; 
            head = head->next;         
            delete(temp);                
            return head;               
        }
        
        while (temp) {
            cur++;
            if (cur == cnt && temp-> next) {
                temp -> next = temp -> next -> next;
            }
            temp = temp -> next;
        }

        return head;
    }
};