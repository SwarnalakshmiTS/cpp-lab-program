#include<iostream>
using namespace std;

class convert {
		int dec;

	public:
		convert(int d) {
			dec = d;
		}

		void dec_to_bin() {
			int temp = dec;
			int rem[20], i = 0, j;

			while(temp > 0) {
				rem[i] = temp % 2;
				i++;
				temp = temp / 2;
			}

			cout << "Binary Number = ";

			for(j = i - 1; j >= 0; j--) {
				cout << rem[j];
			}
			cout <<"\n";

		}

		void dec_to_oct() {
			int temp = dec;
			int rem[20], i = 0, j;

			while(temp > 0) {
				rem[i] = temp % 8;
				i++;
				temp = temp / 8;
			}

			cout << "Octal = ";

			for(j = i - 1; j >= 0; j--) {
				cout << rem[j];
			}
			cout <<"\n";
		}
};

int main() {
	int d;
	cout <<"Decimal Number: ";
	cin >> d;

	convert c(d);

	c.dec_to_bin();
	c.dec_to_oct();

	return 0;
}
