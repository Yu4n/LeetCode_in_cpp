//
// Created by Yu4n on 2021-04-06.
//

ListNode* deleteDuplicates(ListNode* head) {
    ListNode *dummy = head;
    while (head)
        if (head->next && head->val == head->next->val)
            head->next = head->next->next;
        else
            head = head->next;
    return dummy;
}