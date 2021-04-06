//
// Created by Yu4n on 2021-03-06.
//

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    auto *dummyHead = new ListNode(0);
    ListNode *curr = dummyHead;
    int carry = 0;
    while (l1 || l2) {
        int x = l1 ? l1->val : 0;
        int y = l2 ? l2->val : 0;
        int sum = x + y + carry;
        carry = sum / 10;
        curr->next = new ListNode(sum%10);
        curr = curr->next;
        if(l1)
            l1 = l1->next;
        if(l2)
            l2 = l2->next;
    }
    if (carry > 0) {
        curr->next = new ListNode(carry);
    }
    return dummyHead->next;
}