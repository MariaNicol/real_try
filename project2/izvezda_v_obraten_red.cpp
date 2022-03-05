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

void suzd(Sp *&p)
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
void inv ( Sp*&p )

{ Sp*r, *q; r=NULL;
while ( p!= NULL)
{ q= p->next; p->next=r; r=p; p=q; }
p=r;

}






  void br ( Sp*p )
  { 
  int b=0;  
  while (p!=NULL)  	b++; 
   cout << b<<endl; 
  }

int main ()
{
        int x;                                              
//        wd
        Sp *top;
        Sp *r;
		//int (top);
		suzd(top); 
        //print(top);
        inv (top); 
        int br;
        br (top);
		print(top);        
        cout<<endl;
       
}

