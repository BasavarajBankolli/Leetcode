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
    void reorderList(ListNode* head) {
        
        ListNode *slow = head, *fast = head;

        while(fast && fast-> next){
            fast = fast -> next -> next;
            slow = slow -> next;
        }

        ListNode *first = head, *second = reverse(slow -> next);
        slow -> next = NULL;

        while(second){
            ListNode *tmp1 = first -> next, *tmp2 = second -> next;
            
            first -> next = second;
            second -> next = tmp1;

            first = tmp1;
            second = tmp2;
        }

    }

private:
    ListNode* reverse(ListNode* head){
        
        ListNode *cur = head, *prev = NULL, *temp;

        while(cur){
            temp = cur -> next;
            cur -> next = prev;
            prev = cur;
            cur = temp;
        }

        return prev;

    }
};