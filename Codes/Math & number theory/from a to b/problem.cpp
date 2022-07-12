#include<bits/stdc++.h>
#include<math.h>
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
#define lp(var,n) for (ll var=0;var<n;var++)  
#define rv(V) reverse(V.begin(), V.end());
#define rt return
#define countt(s,ch) count(s.begin(),s.end(),ch) 
#define ers(s,ch) erase(s.begin()+ch)  
double pi = 2 * acos(0.0);
ll mod = 1e9 + 7;
//---------------------------------------------------code-------------------------------------------------------------
ll sumall(ll a, ll n) {
    // Formula : sum = (first number + last number) * (number of numbers) / 2
    // in main make sure that n >= a
    ll numOfnums = n - a + 1;
    ll sum = (a + n) * numOfnums / 2;
    return sum;
}
ll sumodd(ll a, ll n) {
    // Formula : sum = (first number + last number) * (number of numbers) / 2
    // in main make sure that n >= a
    if (a % 2 == 0) a++;
    if (n % 2 == 0) n--;
    ll numOfnums = ((n - a) / 2) + 1;
    ll sum = (a + n) * numOfnums / 2;
    return sum;
}

ll sumeven(ll a, ll n) {
    // Formula : sum = (first number + last number) * (number of numbers) / 2
    // in main make sure that n >= a
    if (a % 2) a++;
    if (n % 2) n--;
    ll numOfnums = ((n - a) / 2) + 1;
    ll sum = (a + n) * numOfnums / 2;
    return sum;
}
void do_it() {
    ll a, b; 
    cin >> a >> b; 
    if (b < a) swap(a, b);
    cout << sumall(a, b) << "\n" << sumeven(a, b) << "\n" << sumodd(a, b);
}
int main() {
    Lime;
    int t = 1;
    //cin >> t;
    while (t--) {
        do_it();
    }
}