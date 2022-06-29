#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {
    // binary search (array must be sorted)
    // Time complexity : O(log(n))
    int n; 
    cin >> n; 
    vector<int>v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int k; 
    cout << "Enter Value you search for : "; 
    cin >> k;
    int start = 0, end = n - 1;
    bool found = false;
    while (start != end) {
        int mid = (start + end) / 2;
        if (k < v[mid]) {
            end = mid - 1 ;
        }
        else if (k > v[mid]) {
            start = mid + 1;
        }
        else {
            found = true;
            break;
        }   
    }
    cout << (found ? "YES\n" : "NO\n");
}