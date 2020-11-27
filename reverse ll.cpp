#include<bits/stdc++.h>
using namespace std;
void append();
void reversell();
void display();
struct node
{
    int data;
    struct node* link;
};
struct node* root;
int main()
{
    while(1)
    {
    int ch;
    cout<<endl;
    cout<<"linked list operations:";
    cout<<"1.append:"<<endl;
    cout<<"2.reverse:"<<endl;
    cout<<"3.display"<<endl;
    cout<<"enter choice:"<<endl;
    cin>>ch;
    
    switch(ch)
    {
        case 1: append();
                break;
        case 2: reversell();
                break;
        case 3: display();
                break;
        default: exit(1);
                 cout<<"invalid input";
    }
}
}
void append()
 {
    struct node* temp;
    temp=new node();
    cout<<"enter data value:";
    cin>>temp->data;
    temp->link=NULL;
    if(root==NULL)
    {
        root=temp;    
        
    }
    else
    {
      struct node* p;
      p=root;
      while(p->link!=NULL)
      {
          p=p->link;
      }
      p->link=temp;
      
    }
    
 }
void reversell()
 {
    struct node* curr,*prev,*next;
    curr=root;
    next=NULL;
    prev=NULL;
    while(curr!=NULL)
    {
        next=curr->link;
        curr->link=prev;
        prev=curr;
        curr=next;
    }
    root=prev;
    
 }

void display()
 {
    struct node* temp;
    temp=root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" --> ";
        temp=temp->link;
    }
    
 }
