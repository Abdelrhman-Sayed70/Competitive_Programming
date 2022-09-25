#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main() { 
    int n; cin >> n;  
    int start = -1, end = 1e9;
    for (int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        start = max(start, a);
        end = min(end, b);
    }
    if (start > end) { cout << "No interval the contain all intervals (No intersection)"; }
    else {
        cout << "Intersection Interval is : ";
        cout << start << " " << end;
        cout << " of lenght : " << end - start;
    }
}