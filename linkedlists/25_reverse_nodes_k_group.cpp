// Reverse nodes in k group

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

ListNode *reverseKGroup(ListNode *head, int k)
{
    ListNode *temp = head;
    // check if k nodes exist
    int count = 0;
    while (count < k)
    {
        if (temp == NULL)
        {
            return head;
        }

        temp = temp->next;
        count++;
    }

    // recursively call for rest of linked lsit

    ListNode *prevNode = reverseKGroup(temp, k);

    // reverse current group

    temp = head;
    count = 0;

    while (count < k)
    {

        ListNode *next = temp->next;
        temp->next = prevNode;

        prevNode = temp;
        temp = next;
        count++;
    }
    return prevNode;
}

int main()
{
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    int k = 2;

    ListNode *newHead = reverseKGroup(head, k);

    // Print the reversed linked list
    while (newHead != NULL)
    {
        cout << newHead->val << " ";
        newHead = newHead->next;
    }

    return 0;
}