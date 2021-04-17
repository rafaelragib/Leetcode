#include<bits/bits/stdc++.h>
using namespace std;

class SinglyLinkedListNode{
public:
    int data;
    SinglyLinkedListNode *next;
    SinglyLinkedListNode(int data)
    {
        this->data=data;
        this->next=nullptr;
    }

};
SinglyLinkedListNode* rev(SinglyLinkedListNode* head)
{
    SinglyLinkedListNode* rhead;
    if(head->next!=nullptr)
        rhead=rev(head->next);
    if(head->next==nullptr)
    {
        rhead=head;
        return rhead;
    }
    else
    {
        SinglyLinkedListNode* newnode=new SinglyLinkedListNode(head->data);
        SinglyLinkedListNode* node=rhead;
        while(node->next!=nullptr)
            node=node->next;
        node->next=newnode;
        return rhead;
    }
}

int main()
{
    SinglyLinkedListNode* head;
    SinglyLinkedListNode* rhead;

    SinglyLinkedListNode* n=new SinglyLinkedListNode(10);
    head=n;
    SinglyLinkedListNode* n1=new SinglyLinkedListNode(20);
    n->next=n1;
    print(head);
    rhead=rev(head);
    print(rhead);
}
