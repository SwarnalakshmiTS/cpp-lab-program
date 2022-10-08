#include<iostream>
using namespace std;
class time {
	int m,s,h;
	public:
		void get(int p,int q,int r)
		{
			h=p;
			m=q;
			s=r;
		}
		void display()
		{
			cout<<"time is "<<h<<":"<<m<<":"<<s;
			
		}
};
int main()
{
	int p,q,r;
	time t;
	
	cout<<"enter hour:";
	cin>>p;
	cout<<"enter minute:";
	cin>>q;
	cout<<"enter seconds:";
	cin>>r;
	t.get(p,q,r);
	t.display();
}
