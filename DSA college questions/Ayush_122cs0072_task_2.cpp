

#include <iostream>
using namespace std;
struct student
{

    string name;
    int roll_no;
    int marks[5];
    int average;
    struct student *next;
};
void takedata(struct student **head, string h, int n, int a, int b, int c, int d, int e, int avg)
{
    struct student *new_node = (struct student *)malloc(sizeof(struct student));
    new_node->name = "Ayush";
    new_node->roll_no = n;
    new_node->marks[0] = a;
    new_node->marks[1] = b;
    new_node->marks[2] = c;
    new_node->marks[3] = d;
    new_node->marks[4] = e;
    new_node->average = avg;
    new_node->next = (*head);
    (*head) = new_node;
}
void printdata(struct student *node, int n)
{
    while (node != NULL)
    {
        if (node->roll_no == n)
        {
            cout << "Name :" << node->name << endl;
            cout << "Roll no :" << node->roll_no << endl;
            cout << "average :" << node->average << endl;
            cout << ".............................."  << endl;
        }
        node = node->next;
    }
}
void print(struct student *node)
{
    while (node != NULL)
    {
            cout << "Name :" << node->name << endl;
            cout << "Roll no :" << node->roll_no << endl;
            cout << "average :" << node->average << endl;
      cout << ".............................."  << endl;
        
        node = node->next;
    }
}
int add(struct student *node)
{
    int x = 0;
    while (node != NULL)
    {
        x = x + node->average;

        node = node->next;
    }
    return x;
}

struct student *swap(struct student *ptr1, struct student *ptr2)
{
    struct student *tmp = ptr2->next;
    ptr2->next = ptr1;
    ptr1->next = tmp;
    return ptr2;
}

/* Function to sort the list */
void Sort(struct student **head, int count)
{
    struct student **h;
    int i, j, swapped;

    for (i = 0; i < count-1; i++)
    {

        h = head;
        swapped = 0;

        for (j = 0; j < count - i - 1; j++)
        {

            struct student *p1 = *h;
            struct student *p2 = p1->next;

            if (p1->average > p2->average)
            {

                /* update the link after swapping */
                *h = swap(p1, p2);
                swapped = 1;
            }

            h = &(*h)->next;
        }

        /* break if the loop ended without any swap */
        if (swapped == 0)
            break;
    }
}
void del(struct student  *&head ,int n)
{
  
  // struct student *x;
  struct student *temp=head;
  if(n==1){
    head=head->next;
    temp->next=NULL;
    free(temp);
  }
  else if(n>1)
  {
    n=n-2;
    while (n--) {
  
    if(temp->next != NULL) { temp = temp->next; }
}}
temp->next = temp->next->next;
}
void swapdata(student *a, student *b)
{
    
    int temp_roll = a->roll_no;
    a->roll_no = b->roll_no;
    b->roll_no = temp_roll;

    double temp_avg = a->average;
    a->average = b->average;
    b->average = temp_avg;
}
void swap_position(student *head,int p1,int p2){
        student *pos1=head;
        student *pos2=head;
        for (int i = 1; i < p1; i++)
        {
            pos1=pos1->next;
        }
        for (int i = 1; i < p2; i++)
        {
            pos2=pos2->next;
        }
        swapdata(pos1,pos2);
        
}

int main()
{
    struct student *head = (struct student *)malloc(sizeof(struct student));

    head->name = "Ayush";
    head->roll_no = 1;
    head->marks[0] = 32;
    head->marks[1] = 2;
    head->marks[2] = 23;
    head->marks[3] = 34;
    head->marks[4] = 3;
    head->average = 24;
    head->next = NULL;
    for (int i = 2; i <= 25; i++)
    {
        takedata(&head, "name", i, 34, 34, 23, 32, 43, 75 - 2 * i);
    }
    // for program  confirmation
    std::cout << "...........printing some  students data after inserting ......" << std::endl;
    int n = 25;
    for (int i = 0; i < n; i++)
    {
        printdata(head, i + 1);
    }

    // for program a
    std::cout << "...........printing sum of aver......" << std::endl;
    int x = add(head);
    std::cout << "Addition of numbers is : " << x << std::endl;

    // for program b
  std::cout << "displaying of roll number : "  << std::endl;
    printdata(head, 1);
    printdata(head, 4);
    printdata(head, 23);
    printdata(head, 25);
    // for program c

    Sort(&head, 25);
    std::cout << ".............. After sorting it........... " << std::endl;
    print(head);
  print(head);
  int p;
  
  cout<<"enter no. to be delted : ";
  cin>>p;
  del(head, p);
  std::cout << ".............. After deleting it........... " << std::endl;
   print(head);
  swap_position(head,1,2);
  std::cout << ".............. After swapinging it........... " << std::endl;
  swap_position(head,4,17);
  swap_position(head,21,1);
  print(head);
    return 0;
}
