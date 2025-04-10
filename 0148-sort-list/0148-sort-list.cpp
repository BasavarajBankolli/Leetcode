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
    ListNode* sortList(ListNode* head) {
        vector <int> arr;
        ListNode* ll;
        for (ll = head; ll; ll = ll -> next) arr.push_back(ll -> val);

        sort(arr.begin(), arr.end());
        ll = head;

        for(int a: arr){
            ll -> val = a;
            ll = ll -> next;
        }

        return head;
    }


};