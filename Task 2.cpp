#include <bits/stdc++.h>





using namespace std;
typedef long long ll;
typedef long double ld;




int main() {
    int n, b;
    cin >> n >> b;
    vector<int> a(n, 0);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int prod = 1;
    int counnt = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] > b) {
            prod *= a[i];
            counnt++;
        }
    }
    cout << "count of array:" << counnt << endl;
    cout << "product of numbers:" << prod << endl;


}
