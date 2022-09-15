#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {
    int q; cin >> q;
    map<string, string>mp, prev;
    map<string, bool>used;
    while (q--) {
        string a, b; cin >> a >> b;
        if (!used[a]) { mp[a] = b; prev[b] = a; used[b] = 1; }
        else {
            string base = prev[a];
            mp[base] = b;
            prev[b] = base;
            used[b] = 1;
        }
    }
    cout << mp.size() << "\n";
    map<string, string>::iterator it = mp.begin();
    for (it; it != mp.end(); it++) { cout << it->first << " " << it->second << "\n"; }
}