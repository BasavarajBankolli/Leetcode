 #include <bits/stdc++.h>
using namespace std;
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    
    /*
        int num1 = 0, num2 = 0;
        int i = 0;

        // Convert the linked lists to numbers
        while (l1 || l2) {
            if (l1) {
                num1 = num1 + l1->val * pow(10, i);
                l1 = l1->next;
            }
            if (l2) {
                num2 = num2 + l2->val * pow(10, i);
                l2 = l2->next;
            }
            i++;
        }

        // Sum the two numbers
        int sum = num1 + num2;
        ListNode* head = new ListNode(sum % 10);
        sum /= 10;

        ListNode* cur = head;

        //linked list for the result
        while (sum > 0) {
            cur->next = new ListNode(sum % 10);
            cur = cur->next;
            sum /= 10;
        }

        return head;
    }
    */

        ListNode* t1 = l1;
        ListNode* t2 = l2;

        ListNode* dummy = new ListNode(-1); 
        int carry = 0,sum;
        ListNode* cur = dummy;

        while (t1 || t2) {
            sum = carry;

            if (t1) {
                sum += t1 -> val;
                t1 = t1 -> next;
            }
            if (t2) {
                sum += t2 -> val;
                t2 = t2 -> next;
            }

            carry = sum / 10;
            cur -> next = new ListNode(sum % 10);
            cur = cur -> next;
        }

        if (carry) {
            cur -> next = new ListNode(carry);
        }

        return dummy -> next;
    }
};