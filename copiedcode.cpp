#include<iostream>
using namespace std;

struct node
{
 int cof ;   
 int data ;
 struct node *link ;
};

struct node * create(struct node * head)
{   
    int n;
    cout<<"Enter the no of terms in polynomial:\n";
    cin>>n;
    while(n != 0)
    {
     struct node *p;    
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    if(head == NULL)
    {
        head = temp;
        cout<<"Enter the degree(make sure that you go for the term with the largest degree first):";
        cin>>temp->data;
        cout<<"Enter the coefficient:";
        cin>>temp->cof;
        p = temp;
    }else{
        p->link = temp;
        p = temp;
        cout<<"Enter the degree(make sure that you go for the term with the largest degree first):";
        cin>>temp->data;
        cout<<"Enter the coefficient:";
        cin>>temp->cof;
    }  
    n--;
    if(n == 0 )
    {
        p->link = NULL;
    } 
    }
    return head ;
}

struct node * add(struct node*p,struct node *q,struct node *ptr)
{   
    cout<<"Addition polynomial is :";
    struct node * a;
    while( p != NULL && q != NULL)
    {
        if( ptr == NULL)
        {
            struct node * ptr=(struct node *)malloc(sizeof(struct node));
            a = ptr;
        }else{
            a->link = (struct node *)malloc(sizeof(struct node));
            a = a->link;
        }
        
        if(p->data > q->data)
        {
           a->data = p->data;
           a->cof = p->cof;   
           p = p->link;  
           cout<<a->cof<<"x^"<<a->data<<" + ";              
        }
        else if(p->data < q->data)
        {
            a->data = q->data;
            a->cof = q->cof;
            q = q->link;
            cout<<a->cof<<"x^"<<a->data<<" + ";  
        }else
        {
            a->data = p->data;
            a->cof = p->cof + q->cof;
            p = p->link;
            q = q->link;
             cout<<a->cof<<"x^"<<a->data<<" + ";  
        }
    }
    while(p != NULL)
    {
            a->link = (struct node *)malloc(sizeof(struct node));
            a = a->link;
            a->data = p->data ;
            a->cof = p->cof ;
            p = p->link;
            cout<<a->cof<<"x^"<<a->data<<" + "; 
    }
    while(q != NULL)
    {
            a->link = (struct node *)malloc(sizeof(struct node));
            a = a->link;
            a->data = q->data ;
            a->cof = q->cof ;
            q = q->link;
            cout<<a->cof<<"x^"<<a->data<<" + ";   
    }
    a->link = NULL;
    cout<<endl<<endl;
    return ptr ;
}
struct node * subtract(struct node*p,struct node *q,struct node *ptr)
{   
    cout<<"Subtraction polynomial is : ";
    struct node * a;
    while( p != NULL && q != NULL)
    {
        if( ptr == NULL)
        {
            struct node * temp=(struct node *)malloc(sizeof(struct node));
            a = temp;
            ptr = temp;
        }else{
            a->link = (struct node *)malloc(sizeof(struct node));
            a = a->link;
        }
        
        if(p->data > q->data)
        {
           a->data = p->data;
           a->cof = p->cof;   
           p = p->link;  
           cout<<" + "<<a->cof<<"x^"<<a->data;
        }
        else if(p->data < q->data)
        {
            a->data = q->data;
            a->cof = q->cof;
            q = q->link;
            cout<<" - "<<a->cof<<"x^"<<a->data;
        }else
        {
            a->data = p->data;
            a->cof = p->cof - q->cof;
            p = p->link;
            q = q->link;
            cout<<" + "<<a->cof<<"x^"<<a->data;
        }
    }
    while(p != NULL)
    {
            a->link = (struct node *)malloc(sizeof(struct node));
            a = a->link;
            a->data = p->data ;
            a->cof = p->cof ;
            p = p->link;
            cout<<" + "<<a->cof<<"x^"<<a->data;
    }
    while(q != NULL)
    {
            a->link = (struct node *)malloc(sizeof(struct node));
            a = a->link;
            a->data = q->data ;
            a->cof = q->cof ;
            q = q->link; 
            cout<<" - "<<a->cof<<"x^"<<a->data;
    }
    a->link = NULL;
    cout<<endl<<endl;
    return ptr ;
}
struct node * multiply(struct node *ptr,struct node*p,struct node *q)
{   
    struct node * a,*d = q;
    while( p != NULL)
    {   
        q = d;
        while ( q != NULL)
        {
            if( ptr == NULL)
            {
                struct node * temp=(struct node *)malloc(sizeof(struct node));
                ptr = temp;
                a = temp;
            }else{
                a->link = (struct node *)malloc(sizeof(struct node));
                a = a->link;
            }
            a->data = p->data + q->data;
            a->cof = (p->cof)*(q->cof);
            q = q->link;
        }
        p = p->link;
    }
    a->link = NULL;
    return ptr;
}
struct node * sortedlist(struct node *ptr)
{ 
  struct node *temp,*t,*p;
  p = ptr ;
  while(ptr->link != NULL)
  {  int n = 0 , min = ptr->data , coef = ptr->cof;
     t = ptr ;
    
    while(t->link != NULL)
    {
        t = t->link;
        if(min > t->data)
        {   
            n = 1;
            min = t->data  ;
            coef = t->cof ;
            temp = t;
        }
    }
     if( n != 0)   
     {
       temp->cof = ptr->cof;
       temp->data = ptr->data;
       ptr->data = min;
       ptr->cof = coef;
     } 
     ptr = ptr->link;
  }
  return p;
}
int display(struct node *p)
{   
    int count = 0 ;
    struct node *ptr = p;
    while(ptr != NULL)
    {
       count++;
       cout<<ptr->cof<<"x^"<<ptr->data;
       if(ptr->link != NULL)
       {
            cout<<" + ";
       }
         ptr = ptr->link; 
    }
    cout<<"\n\n";
    return count ;
}
void Final(struct node*gamma ,int n)
{
    struct node *temp = gamma ;
    struct node *temp2 = temp->link ;
    while(n != 0)
    {
        while(temp->link != NULL)
        {
           struct node *t ;
           if(temp->data == temp2->data)
           {   
               temp->cof = temp->cof + temp2->cof;
               t = temp2;
               temp2 = temp2->link ;
               temp->link = temp2 ;
               free(t);
               t = NULL;
            }else
            {    
               temp = temp->link ;
               temp2 = temp2->link ;
            }   
        } 
        n--;  
    }    
}
int main()
{
    int n = 0 ;
    struct node *head = NULL,*start = NULL,*alpha = NULL,*beta = NULL,*gamma = NULL,*ptr ;
    head = create(head);
    start = create(start);
    alpha = add(head,start,alpha);
    beta = subtract(head,start,beta);
    gamma = multiply(gamma,head,start);
    gamma = sortedlist(gamma);
    cout<<"polynomial after multiplication is :";
    n = display(gamma);
    cout<<"Final polynomial after multiplication is :\n\n";
    Final(gamma,n);
    n = display(gamma); 
    return 0; 
}