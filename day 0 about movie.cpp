#include<iostream>
using namespace std;
class movie
{
	char s[200];
	public:
		void aboutmovie()
		{
			cout<<"moviename:SITARAM"<<"\n";
			cout<<"ram"<<"\n";
			cout<<"sita mahalakshmi"<<"\n";
			cout<<"afreen"<<"\n";
        }
};
class casts:movie
{
	char r[100];
	public:
		void aboutmovie1()
		{
			aboutmovie();
			cout<<"who is my favouite character in this movie:"<<"\n";
			cin>>r;
		}
		void aboutmovie2()
		{
			cout<<"your favourite character:"<<r;
		}
};
main()
{
	casts sr;
	sr.aboutmovie1();
	sr.aboutmovie2();
	
}

