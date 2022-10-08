#include<iostream>
using namespace std;
class wall {
	private:
		double length;
	public:
		wall() {
			length = 5.5;
			cout << "creating a wall." << endl;
			cout << "length = " << length << endl;
				
				
		}	
			
};

int main() {
	wall wall1;
	return 0;
}
