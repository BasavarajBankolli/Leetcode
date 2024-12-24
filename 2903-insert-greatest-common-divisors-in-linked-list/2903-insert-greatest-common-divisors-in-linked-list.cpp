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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        
        ListNode* temp = head;

        while (temp && temp -> next) {
            auto nxtadd = temp -> next;
            int gcdv = gcd(temp -> val, temp -> next -> val);
            ListNode* ref = new ListNode(gcdv);
            temp -> next = ref;
            ref -> next = nxtadd;
            temp = nxtadd;
        }

        return head;
    }

private: 
    int gcd(int a, int b){
        while (b != 0){
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
};