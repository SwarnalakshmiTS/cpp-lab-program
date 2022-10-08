#include<iostream>
using namespace std;
class classA {
	public:
		classA() {
			cout << "class constructor called"<<endl;
		}
		~classA() {
			cout << "class destructor called"<<endl;
		}
};

int main() {
	classA a;
	int p=1;
		  if (p) {
			classA b;
		}
	
}
