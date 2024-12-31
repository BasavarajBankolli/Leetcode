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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        bool ref[100001] = {false};

        for (const auto& v: nums) {
            ref[v] = true;
        }

        ListNode dummy(0, head);
        ListNode *slow = &dummy;
        ListNode *fast = head;

        ListNode* del = NULL;

        while (fast) {
            if (ref[fast -> val]){
                del = fast;
                slow -> next = fast -> next;
                fast = slow -> next;
            } 
            else {
                slow = fast;
                fast = fast -> next;
            }
        }

        return dummy.next;

    }
};