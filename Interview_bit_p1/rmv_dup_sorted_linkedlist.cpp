/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

/*

Given a sorted linked list, delete all duplicates such that each element appear only once.

For example,
Given 1->1->2, return 1->2.
Given 1->1->2->3->3, return 1->2->3

*/

ListNode *Solution::deleteDuplicates(ListNode *head)
{
        ListNode *origin = head;
            while (origin != NULL) {
                    while(origin->next != NULL && origin->val == origin->next->val) {
                            origin->next = origin->next->next;
                    }
                    origin = origin->next;
            }
            return head;
}
