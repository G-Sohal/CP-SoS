#include <bits/stdc++.h>
using namespace std;

vector<int> sieve(int n) {
    vector<bool> is_prime(n+1, true);
    vector<int> primes;
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
            if ((long long)i * i <= n)
                for (int j = i*i; j <= n; j += i)
                    is_prime[j] = false;
        }
    }
    return primes;
}