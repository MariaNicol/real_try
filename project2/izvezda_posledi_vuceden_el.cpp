#include <iostream>
using namespace std;

struct Sp
{
        int inf;
        Sp *next;
};
Sp *top;

void input1(int x, Sp *&p)
{
        Sp *q;
        q=new Sp;
        q->inf=x;
        q->next=p;
        p=q;
}

void input2(int x, Sp *&p, Sp *q)
{
        Sp *r;
        r=new Sp;
        r->inf=x;
        r->next=q->next;
        q->next=r;
}

void input3(int x, Sp *&p, Sp *q)
{
        Sp *r;
        if(q==p) input1(x, p);
        else {
                r=p;
                while(r->next!=q) r=r->next;
                input2(x, p, r);
             }
}
void suzd(Sp *&p)  // използваме създаване 2 - от първи до последен --> 1 2 3 4 5 ; извежда 5 
// ако използвахме създаване 1 при вход 1 2 3 4 5 ; ще изведе 1  
{
        int x; Sp *q;
        p=NULL;
        cin>>x; input1(x, p);
        q=p; while(cin>>x)
             {
                    input2(x, p, q);
                        q=q->next;        
             }
}

void print(Sp *&p)
{
        while(p!=NULL)
        {
                cout<<p->inf<<" ";
                p=p->next;
        }
}

Sp *posl(Sp *p)
{
        if(p==NULL) return NULL;
        else {
                    while(p->next!=NULL) p=p->next;
                        return p;  
             }
}

int main()
{
        int x;
        Sp *top;
        Sp *r;
        suzd(top);
        r=posl(top);

        print(top);
        cout<<endl;
        cout<<r->inf;
}
