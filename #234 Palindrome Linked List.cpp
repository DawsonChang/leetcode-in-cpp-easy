/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 //**********************************************************************************
 // https://www.educative.io/collection/page/5642554087309312/5679846214598656/70003
 // the algorithm of reversing linked list
 //**********************************************************************************
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        int length = 0;
        ListNode *curr = head;
        if (head == NULL)
            return true;
        if (head -> next == NULL)
            return true;
        while (curr) {
            length++;
            curr = curr -> next;
        }
        ListNode* current = head -> next;
        ListNode* temp;
        ListNode* reverse = head;
        reverse -> next = NULL;
        for (int i = 0; i < length/2-1; i++) {
            temp = current;
            current = current -> next;
            temp -> next = reverse;
            reverse = temp;
        }

        if (length % 2 == 0) {
            while (current) {
                if (current -> val != reverse -> val) {
                    return false;
                }
                current = current -> next;
                reverse = reverse -> next;
            }
        }

        else {
            current = current -> next;
            while (current) {
                if (current -> val != reverse -> val) {
                    return false;
                }

                current = current -> next;
                reverse = reverse -> next;
            }
        }
        
        return true;
    }
};
