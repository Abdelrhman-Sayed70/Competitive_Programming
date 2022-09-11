#include<bits/stdc++.h>
using namespace std;
#define ll long long 

// next greater element 
vector<ll>NGE(vector<ll>v) {
    int n = v.size();
    vector<ll>nge(n,-1);
    stack<ll>st; // will contains indecies
    st.push(0);
    for (int i = 1; i < n; i++) {
        if (v[i] <= v[st.top()]) { st.push(i); }
        else {
            while (st.size() and v[i] > v[st.top()]) {
                nge[st.top()] = v[i];
                st.pop();
            }
            st.push(i);
        }
    }
    return nge;
}
// previous greater element 
vector<ll>PGE(vector<ll>v) {
    int n = v.size(); 
    reverse(v.begin(), v.end());
    vector<ll>pge(n, -1);
    stack<ll>st; // will contains indecies
    st.push(0);
    for (int i = 1; i < n; i++) {
        if (v[i] <= v[st.top()]) { st.push(i); }
        else {
            while (st.size() and v[i] > v[st.top()]) {
                pge[st.top()] = v[i];
                st.pop();
            }
            st.push(i);
        }
    } 
    reverse(pge.begin(), pge.end());
    return pge;
}
int main() { 
    int n; cin >> n; 
    vector<ll>v(n);
    for (auto& it : v) { cin >> it; }
    vector<ll>nge = NGE(v);
    vector<ll>pge = PGE(v);
    for (int i = 0; i < n; i++) {
        cout << nge[i] << " " << pge[i] << "\n";
    }
}
