#include<bits/stdc++.h>
using namespace std;
#define Lime ios_base::sync_with_stdio(false) , cin.tie(0) , cout.tie(0) 
#define ll long long
#define endl "\n"
#define vi vector<int> 
#define vl vector<ll> 
#define Vop vector<pair<ll,ll>>
#define in(v) for(int i=0;i<v.size();i++) cin>>v[i];
#define out(v) for(int i=0;i<v.size();i++) cout << v[i] << " " ;
#define sr(V) sort(V.begin(),V.end()) ;
#define lp(var,n) for (int var=0;var<n;var++)  
#define rv(V) reverse(V.begin(), V.end());
#define rt return
#define countt(s,ch) count(s.begin(),s.end(),ch) 
#define eras(s,ch) erase(s.begin()+ch)  
double pi = 2 * acos(0.0);
//freopen("file.in", "r", stdin);
//===============================================================Code====================================================== 
const ll N = 1e7;
bool prime[N + 5];
void seive() {
    prime[0] = prime[1] = false ;
    for (ll i = 2; i * i <= N; i++) {
        if (prime[i]) {
            for (ll j = i * i; j <= N; j += i) {
                prime[j] = false;
            }
        }
    }
}
bool isperfectsquare(ll n) {
    ll tmp = sqrt(n);
    return(tmp * tmp == n);
}
void do_it() {
    int n;
    cin >> n; 
    seive();
    lp(i, n) { 
        ll in;
        cin >> in;
        bool chk = isperfectsquare(in); 
        if (chk) {
            ll sq = sqrt(in);
            if (prime[sq]==true) {
                cout << "YES\n";
            }
            else {
                cout << "NO\n";
            }
        }
        else {
            cout << "NO\n";
        }
    }
}
int main() { 
    Lime; 
    memset(prime, 1, sizeof(prime));
    int t = 1;
    //cin >> t;
    while (t--) {  
        do_it();
    }
}