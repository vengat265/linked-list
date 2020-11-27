#include<iostream>
using namespace std;
void addappend(void);
void addatlast(void);
void addatpos(void);
void display(void);
int lengthofll(void);
struct node
{
    int data;
    struct node* link;
};
struct node* root=NULL;
int main()
{
    while(1){
    int choice;
    cout<<endl;
    cout<<"linked list operations:"<<endl;
    cout<<"1.append"<<endl;
    cout<<"2.add at a pos"<<endl;
    cout<<"3.display"<<endl;
    cout<<"4.length"<<endl;
    cout<<"enter choice";
    cin>>choice;
    
    switch(choice)
    {
        case 1: addappend();
                break;
        case 2: addatpos();
                break;
        case 3: display();
                break;
        case 4: cout<<"length is "<<lengthofll()<<endl;
                break;
        default: exit(1);
                 cout<<"invalid input";
    }
    }
    
}
void addappend()
    {
        struct node* temp;
        temp=new node();
        cout<<"enter data value: ";
        cin>>temp->data;
        temp->link=NULL;
        if(root==NULL)
        {
            root=temp;
        }
        else{
            struct node* p;
            p=root;
            while(p->link!=NULL)
            {
                p=p->link;
            }
            p->link=temp;
        }
        
        
    }
void addatpos()
{
    int loc,i=1;
    struct node* temp,*p=root;
    temp=new node();
    cout<<"enter data value:";
    cin>>temp->data;
    temp->link=NULL;
    cout<<"enter loc:";
    cin>>loc;
    if(loc > lengthofll())
    {
        cout<<"invalid loc";
    }
    else
    {
    while(i<loc)
    {
        p=p->link;
        i++;
    }
    temp->link=p->link;
    p->link=temp;
    }
    
}

void addatbegin()
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
        temp->link=root->link;
        root=temp;
    }
}

int lengthofll()
{
    int count=0;
    struct node* temp;
    temp=root;
    while(temp!=NULL)
    {
        temp=temp->link;
        count++;
    }
    return count;
}

void display()
{
    struct node* temp;
    temp=root;
    if(temp==NULL)
    {
        cout<<"linked list is empty"<<endl;
        
    }
    else
    {
        while(temp!=NULL)
        {
            cout<<temp->data<<"-->";
            temp=temp->link;
        }
    }
}