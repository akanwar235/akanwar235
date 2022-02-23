#include<iostream>
using namespace std;

struct node
{
 struct node *prev;
 int data ;
 struct node *next ;
};

struct node * add_at_start(struct node *ptr,int data)
{
   struct node * temp =(struct node *)malloc(sizeof(struct node));
   temp->prev = NULL;
   temp->data = data;
   temp->next = ptr;
   
   ptr->prev = temp ;
   return temp;
}

struct node *del_at_pos(struct node*ptr,int pos)
{  
  struct node * temp = NULL,*p = ptr;
  int count = 1;
  if(pos == 1)
  {
    p = p->next;
  }
  else
  {
    while(count<pos)
    {
      if(count == pos-1)
      {
         temp = ptr;
      }
      count++;
      ptr = ptr->next;
    }
    if(ptr->next == NULL)
    {
       temp->next = NULL;
    }
    else
    {
       temp->next =ptr->next;
       ptr->next->prev = temp;
    }
    free(ptr);
    ptr = NULL;
    return p;
  }
}
void display(struct node *ptr)
{
  struct node *p =ptr ;
  while(p != NULL)
  {
    cout<<p->data<<endl;
    p = p->next;
  }

}
int main()
{
    int n ;
    struct node *head = NULL,*start,*head2 = NULL ;
    head =(struct node*)malloc(sizeof(struct node));
    head->prev = NULL;
    head->data = 6;
    head->next = NULL;

    struct node *ptr = head ;
    head = add_at_start(head,5);
    head = add_at_start(head,4);
    head = add_at_start(head,3);
    head = add_at_start(head,2);
    head = add_at_start(head,1);
   
    cout<<"list is :\n";
    display(head);
    head = del_at_pos(head,6);
    cout<<"list after deletion is : \n";
    display(head);
   
    return 0;
}
