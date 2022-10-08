#include<iostream>
using namespace std;
class A {
	public:
		void display() {
			cout << "SWARNALAKSHMI ,SHAKS,BHAVANI,MURAJA,VINAYA,SRUTHI";
		}	
};
class B : public A {};
class C : public B {};
int main(){
	C obj;
	obj.display();
	return 0;
}



