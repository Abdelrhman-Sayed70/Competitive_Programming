#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
#define ll long long
#define el cout << "\n" 
#define endl "\n"
#define yes cout <<"YES\n" 
#define no cout << "NO\n"
#define all(v) v.begin(),v.end()
#define out(v) for(auto it : v) { cout << it << " ";}
const double pi = 2 * acos(0.0);
ll mod = 1e9 + 7;
void files() {
#pragma warning(disable : 4996).
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
//*********************
int getBit(int n, int index) {
    return ((n >> index) & 1);
}
void you_can_do_it() {
    int n, m;
    cin >> n >> m; 
    vector<int>A(n), B(m);
    map<int, bool>found;
    map<int, int>mp;
    for (int i = 0; i < n; i++) { cin >> A[i]; }
    for (int i = 0; i < m; i++) { cin >> B[i]; found[B[i]]=1; }
    int p1 = 0, p2 = 0, mn = 1e9;
    while (p1 < n) {
        while (p2 <= n) {
            if (mp.size() == m) {
                mn = min(mn, p2 - p1);
                break;
            }
            if (p2 < n and found[A[p2]]) { mp[A[p2]]++;}
            p2++;
        }
        if (mp.count(A[p1])) {
            mp[A[p1]]--;
            if (!mp[A[p1]]) { mp.erase(A[p1]); }
        }   
        p1++;
    }
    cout << mn; el;
}
//*********************             
int main() {
    //files();
    fastIO;
    int t = 1;
    //cin >> t;
    for (int i = 1; i <= t; i++) {
        you_can_do_it();
    }
}