// Return the node where the cycle begins. If there is no cycle, return null.

// Time complexity: O(n), where n is the number of nodes in the linked list.

#include <iostream>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;

    ListNode(int val) : val(val), next(NULL) {}
};
ListNode *detectCycle(ListNode *head)
{
    ListNode *slow = head;
    ListNode *fast = head;

    bool hasCycle = false;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            hasCycle = true;
            break;
        }
    }

    if (!hasCycle)
    {

        return NULL;
    }

    slow = head;

    while (slow != fast)
    {
        slow = slow->next;

        fast = fast->next;
    }

    return slow;
}

int main()
{
    ListNode *head = new ListNode(3);
    head->next = new ListNode(2);
    head->next->next = new ListNode(0);
    head->next->next->next = new ListNode(-4);
    head->next->next->next->next = head->next;

    ListNode *cycleStart = detectCycle(head);

    if (cycleStart != NULL)
    {
        cout << cycleStart->val << endl;
    }
    else
    {
        cout << "No cycle\n";
    }

    return 0;
}