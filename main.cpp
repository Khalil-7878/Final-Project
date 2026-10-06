#include <iostream>

using namespace std;

struct LinkedNode
{
    int data;
    LinkedNode *next;
};

int main()
{
    LinkedNode * node1 = NULL;
    LinkedNode * node2 = NULL;
    LinkedNode * node3 = NULL;

    node1 = new LinkedNode();
    node2 = new LinkedNode();
    node3 = new LinkedNode();


    node1->data = 1;
    node2->data = 2;
    node3->data = 3;


    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

    LinkedNode * head;

    head = node1;

    while(head != NULL)
    {
        cout << head->data << endl;
        head = head->next;
    }


    return 0;
}