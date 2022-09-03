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
private:
    ListNode* insert(ListNode* node, int val) {
        ListNode* neww = new ListNode(val), * head = node;
        if (node->val > val) {
            neww->next = node;
            return neww;
        }

        while (node->next != NULL && node->next->val <= val) {
            node = node->next;
        }

        ListNode* temp = node->next;
        node->next = neww;
        neww->next = temp;
        return head;
    }

public:
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
        if (a == NULL)
            return b;

        while (b != NULL) {
            a = insert(a, b->val);
            b = b->next;
        }
        return a;
    }
};