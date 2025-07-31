#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    vector<int> b(m);
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    // Example operation: print the product of both arrays
    long long product_a = accumulate(a.begin(), a.end(), 1LL, multiplies<long long>());
    long long product_b = accumulate(b.begin(), b.end(), 1LL, multiplies<long long>());
    
    cout << "Product of first array: " << product_a << endl;
    cout << "Product of second array: " << product_b << endl;

    return 0;
}