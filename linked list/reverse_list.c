/* Program to reverse a linked list from given left to right.
 *
 *Assignment No -> (06) 
 *Assignment Name -> Linked_List
 *Id -> 1911981022
 */

struct ListNode* reverseBetween(struct ListNode* head, int left, int right){
    struct ListNode *start = head, *end = head;


    if(right - left <= 0)
        return head;

//traverse till left node.
    while(--left){
        start = start -> next;
    }

//traverse till right node.
    while(right--){
        end = end -> next;
    }
    
//temp node which will store the node just previous of start node.
    struct ListNode *temp = head;
    
    if(start == head)
        temp = start;
    else{
        while(temp -> next != start){
            temp = temp -> next;
        }
    }
    
//prev and curr node for reversing the list from left to right.
    struct ListNode *prev = start;
    struct ListNode *curr = start -> next;
    
    while(curr != end){
        struct ListNode *a = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = a;
    }


    if(start == head){
        temp = prev;
        head = temp;
    }

    else
        temp -> next = prev;

    start -> next = curr;


    return head;
}