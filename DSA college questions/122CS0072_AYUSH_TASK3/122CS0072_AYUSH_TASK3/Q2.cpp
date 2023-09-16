
#include <iostream>

using namespace std;
struct node
{
    struct node *prev = NULL;
    int data;
    struct node *next = NULL;
    node(int x)
    {
        prev = NULL;
        data = x;
        next = NULL;
    }
};
struct node *insertatend(int x, struct node *head)
{
    struct node *temp = new struct node(x);
    head->next = temp;
    temp->prev = head;
    return temp;
}
void insort(struct node **node,int h)
    {
        struct node *head=*node;
        for (int i = 0; i < h; i++) {
           
        int key=head->next->data;
        while(head->data>key && head!=NULL)
        {
            head->next->data=head->data;
            head=head->prev;
        }
        if (head!=NULL)
        {
        head=head->next;
        head->data=key;
        }
        else{
            
        }
        
        }
        
    }
// void ensort(struct node *node, int h)
// {
//     struct node *head = node;

//     while (head->next != NULL)
//     {
//         head = head->next;
//     }

//     for (int i = 0; i < h; i++)
//     {

//         int key = head->prev->data;
//         while (key < head->data && head->next != NULL)
//         {
//             head->data = head->prev->data;
//             head = head->next;
//         }
//         head->prev->data = key;
//         head = head->prev;
//     }
// }

int main()
{
    struct node *mhead = new struct node(1);
    struct node *head = mhead;
    head = insertatend(9, head);
    head = insertatend(8, head);
    head = insertatend(4, head);
    head = insertatend(10, head);
    head = insertatend(3, head);
    head = insertatend(5, head);
    head = insertatend(12, head);

    struct node *head1 = mhead;

    while (head1 != NULL)
    {

        std::cout << head1->data << std::endl;
        head1 = head1->next;
    }
    insort(&mhead, 4);
    // ensort(mhead,4);
    std::cout << "............After sorting.........." << std::endl;
    head1 = mhead;
    while (head1 != NULL)
    {

        std::cout << head1->data << std::endl;
        head1 = head1->next;
    }

    return 0;
}
