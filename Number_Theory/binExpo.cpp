// Author: Shohidur Rahman
#include <bits/stdc++.h>
#define ll long long
#define num_floor(a, b) ((a) / (b) - (((a) % (b)) && (((a) ^ (b)) < 0)))
#define num_ceil(a, b) (num_floor((a) + (b) - 1, (b)))
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
using namespace std;

// Recursive function to perform binary exponentiation with modulo
long long binaryExponentiation(long long a, long long n, long long mod) {
  // Base case: any number raised to the power of 0 is 1
  if (n == 0) return 1;

  // Recursive call to compute a^(n/2)
  long long half = binaryExponentiation(a, n / 2, mod);

  // Compute (a^(n/2))^2 % mod
  long long result = (half * half) % mod;

  // If n is odd, multiply one more a
  if (n % 2 == 1) result = (result * a) % mod;

  return result;
}

// if modulo requires then use modulo

int main() {
  long long a, n, mod;
  cout << "Enter base a, exponent n, and mod: ";
  cin >> a >> n >> mod;

  long long result = binaryExponentiation(a, n, mod);
  cout << a << " raised to the power of " << n << " modulo " << mod << " is "
       << result << endl;

  return 0;
}

// trying to find a^n O(logn) times not using O(n) time