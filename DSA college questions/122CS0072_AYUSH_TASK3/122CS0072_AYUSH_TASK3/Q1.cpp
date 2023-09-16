
#include <iostream>

using namespace std;
struct node
{
    struct node*prev=NULL;
    int data;
    struct node*next=NULL;
    node(int x)
    {
        prev=NULL;
    data=x;
    next=NULL;
    }
   
};
 struct node *insertatend(int x,struct node *head)
    {
        struct node *temp =new struct node(x);
        head->next=temp;
        temp->prev=head;
        return temp;
    }



int main ()
{
  struct node *mhead=new struct node (1);
  struct node *head=mhead;
  head=insertatend(4,head);
  head=insertatend(8,head);
  head=insertatend(9,head);
  head=insertatend(10,head);
  head=insertatend(3,head);
  head=insertatend(5,head);
  head=insertatend(12,head);

 struct node *head1=mhead;
 cout<<"...............printing after inserting //..............."<<endl;

 while(head1!=NULL){
      
  std::cout << head1->data << std::endl;
  head1=head1->next;
  }


  return 0;
}

