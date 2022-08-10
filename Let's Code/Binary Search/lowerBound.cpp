#include<bits/stdc++.h>
using namespace std;
#define ll long long 

/*
lowerbound is stl.
if you pass number out of the range of vector (greater than the last element) -> run time error (vector subscribt out of range)
*/

// vector passed here must be sorted to get the best result 
// lowerboundVal return first element equal oor greater than n
ll lowerboundVal(vector<int>V, int n) {
    auto low = lower_bound(V.begin(), V.end(), n); // auto here refere to vector operator
    return *low;
}
// lowerboundIndex return the index of the first element greater than or equal to n (with sorted vector) 0 based
int lowerboundIndex(vector<int>V, int n) {
    auto low = lower_bound(V.begin(), V.end(), n);
    int index = low - V.begin();
    return index;
}
int main() {
    vector<int>v = { 1,2,3,4 };
    cout << lowerboundVal(v, 4);
}