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
        if (!head->next or !head) { return nullptr; }

        ListNode* target = head;
        ListNode* current = head;

        // Loop to move the Current pointer n times!
        for (int i = 0; i < n; i++) {
            current = current->next;
        }

        if (!current) {
            return head->next;
        }

        while (current->next) {
            // Moving the Current in the Linked list!
            current = current->next;
            target = target->next;
        }
        target->next = target->next->next;

        return head;
    }
};