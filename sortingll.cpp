#include<bits/stdc++.h>
using namespace std;
void append();
void sorting();
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
    cout<<"2.sorting"<<endl;
    cout<<"3.display"<<endl;
    cout<<"enter choice:"<<endl;
    cin>>ch;

    switch(ch)
    {
        case 1: append();
                break;
        case 2: sorting();
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

 void sorting()
 {
    int t;
    struct node* t1,*t2;
    for(t1=root;t1!=NULL;t1=t1->link)
    {
        for(t2=t1->link;t2!=NULL;t2=t2->link)
        {
            if(t2->data<t1->data)
            {
              t=t1->data;
              t1->data=t2->data;
              t2->data=t;
            }
        }
    }

 }

 void display()
 {
     struct node* temp;
     temp=root;
     if(temp==NULL)
     {
        cout<<"linked list is empty";

     }
     else
    {
     while(temp!=NULL)
     {

         cout<<temp->data<<" --> ";
         temp=temp->link;
     }
    }


 }

