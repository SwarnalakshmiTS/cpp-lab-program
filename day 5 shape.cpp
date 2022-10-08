#include <iostream>
using namespace std;

class shape{
  public:
  shape()
  {
  cout<<"\t This is Shape"<<endl; 
  }
};
class rectangle :public shape{
  public:
  rectangle()
  {
  cout<<"\t This is rectangular shape"<<endl;
  }
};
class square :public rectangle{
  public:
  square()
  {
  cout<<"\t Square is a rectangle"<<endl; 
  }
};
class circle :public shape{
  public:
  circle()
  {
   cout<<"\t This is circular shape"<<endl;
  }
};
int main()
{
 square s;
}
