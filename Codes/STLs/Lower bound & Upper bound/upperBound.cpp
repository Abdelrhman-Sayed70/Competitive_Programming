#include<bits/stdc++.h>
using namespace std;
#define ll long long 

/*
upperbound is stl.
if you pass number out of the range of vector (greater than or equal the last element) -> run time error 
vector passed here must be sorted to get the best result 
upperboundVal return first element greater than n
*/
ll upperboundVal(vector<int>V, int n) {
    auto upper = upper_bound(V.begin(), V.end(), n); // auto here refere to vector operator
    if (upper == v.end()) { return -1; }
    return *upper;
}
// upperboundIndex return the index of the first element greater than to n (with sorted vector) 0 based
int upperboundIndex(vector<int>V, int n) {
    auto upper = upper_bound(V.begin(), V.end(), n);
    int index = upper - V.begin();
    return index;
}
int main() {
    vector<int>v = { 1,2,3,4 };
    cout << upperboundVal(v, 3); // 4
}