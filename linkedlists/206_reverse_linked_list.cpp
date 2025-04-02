// Reverse a singly linked list

// Time complexity: O(n)

#include <iostream>
using namespace std;

class LinkedListNode
{
public:
    int value;
    LinkedListNode *next;

    LinkedListNode(int val) : value(val), next(NULL) {}
};


LinkedListNode *reverseLinkedList(LinkedListNode *head)
{
    LinkedListNode *prev = NULL;
    LinkedListNode *curr = head;
    LinkedListNode *next = NULL;

    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}

int main()
{
    LinkedListNode *head = new LinkedListNode(1);
    head->next = new LinkedListNode(2);
    head->next->next = new LinkedListNode(3);

    LinkedListNode *reversedHead = reverseLinkedList(head);

    LinkedListNode *temp = reversedHead;
    while (temp != NULL)
    {
        cout << temp->value << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";

    return 0;
}