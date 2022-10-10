#include <iostream>
using namespace std;

int main() {
    int x[] = {2, 4, 6, 8, 0, 1}; 
    int len = sizeof(x) / sizeof(x[0]); 
    if ( len > 0 ) {
        int smallest = x[0]; 
        
        for ( int i = 1; i < len; i++ ) {
            if ( smallest > x[i] ) {
                smallest = x[i]; 
            }
        }
        
        cout << "Smallest : " << smallest << endl;
    } else {
        cout << "No elements in the array." << endl;
    }
}
