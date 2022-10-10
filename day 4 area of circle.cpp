#include <iostream>
#include<conio.h>
using namespace std;
void area_of_circle(float *value, float *result) {
   *result = 3.14 * (*value) * (*value);
}
int main() {
   float radius, area;

   cout << "Pointer Example C++ Program : Area Of Circle Using Pointer and Functions\n";

   cout << "\nEnter the radius of Circle : ";
   cin>>radius;
   area_of_circle(&radius, &area);

   cout << "\nArea of Circle : " << area;

   getch();
   return 0;
}
