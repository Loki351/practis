#include <bits/stdc++.h>





using namespace std;
typedef long long ll;
typedef long double ld;



int main() {
    int n; cin >> n;
    vector <int> a (n, 0);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int summ = 0;
    int couunt = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] > 0) {
            summ += a[i];
            couunt++;
        }
    }
    cout << "count of array:" << couunt << endl;
    cout << "summ of array:" << summ << endl;




}
