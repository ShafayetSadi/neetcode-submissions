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
    ListNode* reverse(ListNode* curr, ListNode* next) {
        if (next == nullptr) return curr;
        ListNode *temp = next->next;
        if (curr->next == next) curr->next = nullptr;
        next->next = curr;
        return reverse(next, temp);
    }

    ListNode* reverseList(ListNode* head) {
        if (head == nullptr) return head;

        // ListNode *temp = new ListNode(head->val);
        // while (head->next != nullptr) {
        //     head = head->next;
        //     ListNode *new_temp = new ListNode(head->val);
        //     new_temp->next = temp;
        //     temp = new_temp;
        // }
        // return temp;
        return reverse(head, head->next);
    }
};
