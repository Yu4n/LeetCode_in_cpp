//
// Created by Yu4n on 2021-04-01.
//

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    ListNode *a = headA, *b = headB;
    while (a != b) {
        a = !a ? headB : a->next;
        b = !b ? headA : b->next;
    }
    return a;
}