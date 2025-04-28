// Flatten a doubly linked list

// Time Complexity: O(n)
// The function visits each node exactly once, where N is the total number of nodes in the multilevel doubly linked list.

#include <iostream>
using namespace std;

// Definition for a Node.
class Node
{
public:
    int val;
    Node *prev;
    Node *next;
    Node *child;

    Node(int _val) : val(_val), prev(nullptr), next(nullptr), child(nullptr) {}
};

class Solution
{
public:
    Node *flatten(Node *head)
    {
        if (head == NULL)
            return head;

        Node *curr = head;
        while (curr != NULL)
        {
            if (curr->child != NULL)
            {
                // Save the next node
                Node *next = curr->next;

                // Flatten the child list
                Node *child = flatten(curr->child);

                // Attach the flattened child list to the current node
                curr->next = child;
                child->prev = curr;
                curr->child = NULL;

                // Find the tail of the flattened child list
                while (curr->next != NULL)
                {
                    curr = curr->next;
                }

                // Reattach the next node
                if (next != NULL)
                {
                    curr->next = next;
                    next->prev = curr;
                }
            }
            curr = curr->next;
        }
        return head;
    }
};

// Helper function to print the doubly linked list
void printList(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->val << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main()
{
    // Create a sample multilevel doubly linked list
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->prev = head;
    head->next->next = new Node(3);
    head->next->next->prev = head->next;

    head->next->child = new Node(4);
    head->next->child->next = new Node(5);
    head->next->child->next->prev = head->next->child;

    Solution solution;
    Node *flattened = solution.flatten(head);

    // Print the flattened list
    printList(flattened);

    // Free allocated memory (optional, for cleanup)
    Node *curr = flattened;
    while (curr != NULL)
    {
        Node *temp = curr;
        curr = curr->next;
        delete temp;
    }

    return 0;
}