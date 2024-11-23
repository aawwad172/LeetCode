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

#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(): val(0), next(nullptr) { }
    ListNode(int x): val(x), next(nullptr) { }
    ListNode(int x, ListNode *next): val(x), next(next) { }
};

/*
* @why this solution is not working:
* it's not working because of the integer overflow when we adding the 2 numbers
* after getting them from the 2 linked lists!

class Solution {
public:
    int getNum(ListNode *list) {
        // This function takes a singly-linked list of digits, where each node contains a single digit.
        // It recursively traverses the list and computes the integer value represented by the digits.
        // Starting at the last digit, the function multiplies each digit by a power of 10 and accumulates
        // the resulting values to compute the final integer value. The function returns this integer value.

        ListNode *current = list;
        if (current->next == nullptr) { return current->val; }

        return current->val + (getNum(current->next) * 10);
    }

    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        int num1 = getNum(l1);
        int num2 = getNum(l2);

        int answer = num1 + num2;

        ListNode *answerList = new ListNode();
        ListNode *current = answerList;

        while (answer != 0) {
            int n = answer % 10;
            answer /= 10;

            current->val = n;
            if (answer != 0) {
                current->next = new ListNode();
                current = current->next;
            }
        }
        return answerList;
    }
};
*/


class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        ListNode *answerList = new ListNode();
        ListNode *current = answerList;
        int carry = 0;
        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int num = (l1 != nullptr ? l1->val : 0) + (l2 != nullptr ? l2->val : 0) + carry;
            carry = num / 10;
            current->val = num % 10;
            if ((l1 != nullptr && l1->next != nullptr) || (l2 != nullptr && l2->next != nullptr) || carry != 0) {
                current->next = new ListNode();
                current = current->next;
            }
            if (l1 != nullptr) { l1 = l1->next; }
            if (l2 != nullptr) { l2 = l2->next; }
        }
        return answerList;
    }
};