// Author: Shohidur Rahman
#include <bits/stdc++.h>
#define ll long long
#define num_floor(a, b) ((a) / (b) - (((a) % (b)) && (((a) ^ (b)) < 0)))
#define num_ceil(a, b) (num_floor((a) + (b) - 1, (b)))
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
using namespace std;

// Iterative Binary Exponentiation Function
ll binpow(ll a, ll b) {
  ll res = 1;         // Initialize result as 1
  while (b > 0) {     // Loop until exponent becomes 0
    if (b & 1)        // If current bit is 1
      res = res * a;  // Multiply result by current base
    a = a * a;        // Square the base
    b >>= 1;          // Shift exponent to right by 1 bit (divide by 2)
  }
  return res;  // Return final result
}

int main() {
  fast;
  ll a, b;
  cout << "Enter base and exponent: ";
  cin >> a >> b;
  cout << a << " raised to the power of " << b << " is " << binpow(a, b)
       << '\n';
  return 0;
}
