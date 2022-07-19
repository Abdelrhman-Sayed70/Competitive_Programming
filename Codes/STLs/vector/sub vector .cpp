#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
vector<ll> subvector (vector<ll> v, int m, int n) {
    auto first = v.begin() + m;
    auto last = v.begin() + n + 1;
    vector<ll> vector(first, last);
    return vector;
}
int main() {
    vector<ll>v = { 1,2,3,4,5 };
    vector<ll>sub = subvector(v, 1, 3);
    for (auto it : sub) {
        cout << it << " ";
    }
}