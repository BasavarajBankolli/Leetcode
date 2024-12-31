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
        unordered_set <int> s(nums.begin(), nums.end());
        if (!head -> next && s.find(head->val) != s.end()) return NULL;

        ListNode* dummy = head;
        ListNode* temp = NULL;

        while (dummy && s.find(dummy -> val) != s.end()) {
            dummy = dummy -> next;
        }

        temp = dummy;
        ListNode* del = NULL;
        while (temp -> next) {
            if (s.find(temp -> next -> val) != s.end() && temp -> next -> next) {
                del = temp -> next;
                temp -> next = temp -> next -> next;
                delete del;
            }
            else if (s.find(temp -> next -> val) != s.end()) {
                del = temp -> next;
                temp -> next = NULL;
                delete del; 
            }
            else
                temp = temp -> next;
        }

        return dummy;

    }
};