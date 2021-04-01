//
// Created by Yu4n on 2021-04-01.
//

bool hasCycle(ListNode *head) {
    ListNode* slow=head;
    ListNode* fast=head;
    while(fast && slow && fast->next){
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow)
            return true;
    }
    return false;
}