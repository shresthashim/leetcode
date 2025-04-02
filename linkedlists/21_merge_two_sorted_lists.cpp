// Merge two sorted linked lists and return it as a new list. The new list should be made by splicing together the nodes of the first two lists.

// Time complexity: O(n + m), where n is the number of nodes in the first linked list and m is the number of nodes in the second linked list.

#include <iostream>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;

    ListNode(int val) : val(val), next(NULL) {}
};

ListNode *mergeTwoLists(ListNode *h1, ListNode *h2)
{
    if (h1 == NULL || h2 == NULL)
    {
        return h1 == NULL ? h2 : h1;
    }

    if (h1->val <= h2->val)
    {
        h1->next = mergeTwoLists(h1->next, h2);
        return h1;
    }
    else
    {
        h2->next = mergeTwoLists(h1, h2->next);
        return h2;
    }
}

int main()
{
    ListNode *head1 = new ListNode(1);
    head1->next = new ListNode(2);
    head1->next->next = new ListNode(4);

    ListNode *head2 = new ListNode(1);
    head2->next = new ListNode(3);
    head2->next->next = new ListNode(4);

    ListNode *mergedHead = mergeTwoLists(head1, head2);

    ListNode *temp = mergedHead;
    while (temp != NULL)
    {
        cout << temp->val << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";

    return 0;
}