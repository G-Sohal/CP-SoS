#include <bits/stdc++.h>
using namespace std;

vector<int> mobius(int n) {
    vector<int> mu(n+1, 1), primes;
    vector<bool> is_comp(n+1, false);
    for (int i = 2; i <= n; i++) {
        if (!is_comp[i]) {
            primes.push_back(i);
            mu[i] = -1;
        }
        for (int p : primes) {
            if ((long long)i * p > n) break;
            is_comp[i*p] = true;
            if (i % p == 0) {
                mu[i*p] = 0;
                break;
            } else {
                mu[i*p] = -mu[i];
            }
        }
    }
    return mu;
}