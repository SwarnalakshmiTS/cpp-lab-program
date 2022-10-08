#include<iostream>
using namespace std;
void findPermutation(int n, int k) {
   int permutation[n + 1];
   for (int i = 1; i <= n; i++)
   permutation[i] = i;
   for (int i = 1; i < n - k; i++)
   permutation[i + 1] = i;
   permutation[1] = n - k;
   for (int i = 1; i <= n; i++)
   cout << permutation[i] << " ";
}
int main() {
   int n = 8, k = 6;
   cout << "The permutation is: ";
   findPermutation(n, k);
}
