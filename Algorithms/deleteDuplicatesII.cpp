//
// Created by Yu4n on 2021-04-06.
//

ListNode* deleteDuplicatesII(ListNode* curr) {
    if (!curr){
        return nullptr;
    }
    ListNode *sentinel = new ListNode(0, curr);
    auto prev = sentinel;
    while (curr){
        if (curr->next && curr->val == curr->next->val){
            while (curr->next && curr->val == curr->next->val){
                curr = curr->next;
            }
            prev->next = curr->next;
        } else{
            prev = prev->next;
        }
        curr = curr->next;
    }
    return sentinel->next;
}