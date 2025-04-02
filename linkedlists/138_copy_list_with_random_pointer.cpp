// Copy List with Random Pointer

// Time Complexity: O(n)

#include <iostream>
#include <unordered_map>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *random;

    Node(int val) : val(val), next(NULL), random(NULL) {}
};
Node *copyRandomList(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }

    unordered_map<Node *, Node *> m;

    Node *newHead = new Node(head->val);
    Node *oldTemp = head->next;
    Node *newTemp = newHead;
    m[head] = newHead;

    while (oldTemp != NULL)
    {
        Node *copyNode = new Node(oldTemp->val);
        m[oldTemp] = copyNode;

        newTemp->next = copyNode;

        oldTemp = oldTemp->next;
        newTemp = newTemp->next;
    }

    oldTemp = head;
    newTemp = newHead;

    while (oldTemp != NULL)
    {
        newTemp->random = m[oldTemp->random];
        oldTemp = oldTemp->next;
        newTemp = newTemp->next;
    }
    return newHead;
}
int main()
{
    Node *head = new Node(7);
    head->next = new Node(13);
    head->next->random = head;
    head->next->next = new Node(11);
    head->next->next->random = head->next;
    head->next->next->next = new Node(10);
    head->next->next->next->random = head->next->next;
    head->next->next->next->next = new Node(1);
    head->next->next->next->next->random = head;

    Node *newHead = copyRandomList(head);

    return 0;
}