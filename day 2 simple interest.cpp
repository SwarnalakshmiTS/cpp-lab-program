#include <iostream>
using namespace std;
float simpleInterest(float, float, float);

int main(){
    float p, r, t, SI;
    cout << "Enter the principal amount: ";
    cin >> p;
    cout << "Enter the rate of interest: ";
    cin >> r;
    cout << "Enter the time period: ";
    cin >> t;
    SI = simpleInterest(p, r, t);
    cout << "Simple interest is:" << SI << endl;
    
    return 0;
}
float simpleInterest(float a, float b, float c){
    return (a * b * c) / 100;
}
