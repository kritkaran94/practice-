/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 *
 * typedef struct ListNode listnode;
 *
 * listnode* listnode_new(int val) {
 *     listnode* node = (listnode *) malloc(sizeof(listnode));
 *     node->val = val;
 *     node->next = NULL;
 *     return node;
 * }
 */
/**
 * @input A : Head pointer of linked list
 *
 * @Output head pointer of list.
 */


/*


Given a linked list, return the node where the cycle begins. If there is no cycle, return null.

Try solving it using constant additional space.

Example :

Input :

                  ______
                 |     |
                 \/    |
        1 -> 2 -> 3 -> 4

Return the node corresponding to node 3.

*/


listnode* detectCycle(listnode* A)
{
    if(!A) return NULL;
    listnode* p = A; // slow pointer
    listnode* q = A; // fast pointer
    while(1)
    {
      if(p->next!=NULL)p = p->next;else return NULL;
      if(q->next!=NULL && q->next->next!=NULL) q = q->next->next;else return NULL;
      if(p==q)
      {
        q = A;
        while(p!=q)
        {
          p = p->next;
          q = q->next;
        }
        return q;
      }
    }

}
