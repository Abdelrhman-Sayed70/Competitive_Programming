#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {
    map<string, vector<int>>finalmp;
    int  n; cin >> n; 
    for (int i = 0; i < n; i++) {
        string name; int a, b, c, d, sum;
        cin >> name >> a >> b >> c >> d;
        sum = a + b + c + d;
        finalmp[name].push_back(sum);
        finalmp[name].push_back(a);
        finalmp[name].push_back(b);
        finalmp[name].push_back(c);
        finalmp[name].push_back(d);
    }
    cout << "======================\n";
    for (auto it : finalmp) {
        string curname = it.first;
        vector<int>v = it.second;
        cout << curname << " ";
        for (int i = 0; i < v.size(); i++) {
            cout << v[i] << " ";
        }
        cout << "\n";
    }
}