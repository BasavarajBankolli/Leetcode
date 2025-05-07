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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (k == 1 || !head || !head -> next) return head;

        ListNode dummy(-1); 
        dummy.next = head;
        ListNode *prev = &dummy, *tmp = head, *left = head;

        int cnt = 0;
        while (tmp){
            cnt++;
            if (cnt % k == 0){
                ListNode *right = tmp -> next;
                int t = k;
                ListNode* tmph = rev(left, t);
                prev -> next = tmph;

                prev = left;
                prev->next = right;
                tmp = right;
                left = tmp;
                continue;
            }
            tmp = tmp -> next; 
        }
        return dummy.next;
        
    }
private:
    ListNode* rev(ListNode* head, int &k){
        ListNode *cur = head, *prev = NULL;

        while(k){
            k--;
            ListNode *tmp = cur -> next;
            cur -> next = prev;
            prev = cur;
            cur = tmp;
        }

        return prev;
    }
};