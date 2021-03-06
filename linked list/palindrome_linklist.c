/* Program to check whether the give linked list is palindrome or not.
 *Assignment No -> (06) 
 *Assignment Name -> Linked_List
 */
bool recur(struct ListNode **start, struct ListNode *end){
    if(end == NULL)
        return true;
    
    bool isEqual;
    int num = end -> val;
    
    isEqual = recur(start, end -> next);
    
    if(isEqual == false)
        return false;
    if((*start) -> val == num){
        *start = (*start) -> next;
        return true;
    }else{
        return false;
    }
}
bool isPalindrome(struct ListNode* head){
    return recur(&head, head);
}
