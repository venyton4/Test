
#include<iostream>
using namespace std;
struct item
{
    int val;
    item* next;
    item* link;
};
class list
{
    private:

    public: item* first;
    item* last;
    list()
    {
        first=NULL;
        last=NULL;
    }
    void push_front(int a)
    {
        item* p=new item;
        p->val=a;
        p->next=NULL;
        if(first==NULL)
        {
            p->link=NULL;
            first=p;
            last=first;
        }
        else
        {
            p->link=first;
            first->next=p;
            first=p;
        }
    }
    void push_back(int a)
    {
        item* p=new item;
        p->val=a;
        p->link=NULL;
        p->next=last;
        last->link=p;
        last=p;
    }
    int front()
    {
        return first->val;
    }
    int back()
    {
        return last->val;
    }
    bool empty()
    {
        return first==NULL;
    }
    void pop_front()
    {
        first=first->link;
    }
    void pop_back()
    {
        last=last->next;
    }

};

void vhod(list &a,int n)
{
    int p;
    for(int i=0;i<n;i++)
    {
        cin>>p;
        a.push_front(p);
    }
}

void izhod(list a)
{
    while(!a.empty())
    {
        cout<<a.front()<<" ";
        a.pop_front();
    }
}

 void create(list &a,int n)
    {
        for(int i=0;i<n;i++)
        a.push_front(i);
        }
int main()
{int b,n;item *q=new item;
    list a;
    cout<<"n=";cin>>n;
   create(a,n);

  for(int i=0;i<n;i++)
    {
cout<<a.front()<<" ";a.pop_front();
}}
