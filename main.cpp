#include <iostream>
#include <vector>
#include "mergeTwoLists.h"
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main(){
    ListNode l13(4);
    ListNode l12(3, &l13);
    ListNode l11(1, &l12);
    ListNode l23(4);
    ListNode l22(2, &l23);
    ListNode l21(1, &l22);
    ListNode *head = mergeTwoLists(&l11,&l21);
    while (head != nullptr){
        cout << head->val << endl;
        head = head->next;
    }
}