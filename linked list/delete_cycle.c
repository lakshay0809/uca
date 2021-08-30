/* Program to find the position/ index in the list where cycle starts or return NULL if no cycle detected.
 *
 *Assignment No -> (06) 
 *Assignment Name -> Linked_List.
 *Id: 1910991116
 */

struct ListNode *detectCycle(struct ListNode *head) {

if(head == NULL || head -> next == NULL)
        return NULL;

//we take two pointer as slow and fast which works as their name suggests, fast moves two steps while slow moves one step
//at a point of time the points at the same location, now we reset one pointer to head and move then normally by one step
//now when they meet each other that node will be the point if cycle.
    struct ListNode *slow = head -> next;
    struct ListNode *fast = head -> next -> next;

    while(slow != fast){

//it will check at a point of time if we were at NULL that means no cycle hence return NULL.
        if(slow -> next == NULL || fast -> next == NULL || fast -> next -> next == NULL)
            return NULL;
        slow = slow -> next;
        fast = fast -> next -> next;
    }

    fast = head;

    while(fast != slow){
        fast = fast -> next;
        slow = slow -> next;
    }

    return slow;
}
