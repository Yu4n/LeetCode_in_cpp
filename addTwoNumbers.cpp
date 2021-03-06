//
// Created by Yu4n on 2021-03-06.
//

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    auto *head = new ListNode();
    static bool carry = false;
    if (l1->val + l2->val >= 10)
        carry = true;
    else
        carry = false;
    head->val = (l1->val + l2->val) % 10;
    head = head->next;
    l1 = l1->next;
    l2 = l2->next;
    head = addTwoNumbers(l1, l2);
    return head;
}