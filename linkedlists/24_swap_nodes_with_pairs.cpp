// Swap Nodes in Pairs

// Time Complexity: O(n)

#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *swapPairs(ListNode *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    ListNode *first = head;
    ListNode *second = head->next;
    ListNode *prev = NULL;

    while (first != NULL && second != NULL)
    {
        ListNode *third = second->next;

        second->next = first;
        first->next = third;

        if (prev != NULL)
        {
            prev->next = second;
        }
        else
        {
            head = second;
        }

        prev = first;
        first = third;

        if (third != NULL)
        {
            second = third->next;
        }
        else
        {
            second = NULL;
        }
    }
    return head;
}

int main()
{
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);

    ListNode *newHead = swapPairs(head);

    // Print the swapped list
    ListNode *curr = newHead;
    while (curr != NULL)
    {
        std::cout << curr->val << " ";
        curr = curr->next;
    }

    return 0;
}