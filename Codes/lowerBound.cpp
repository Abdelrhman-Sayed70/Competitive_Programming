ll lowerboundVal(vector<int>V, int n) {
    vector<int>::iterator low = lower_bound(V.begin(), V.end(), n);
    return *low;
}
int lowerboundIndex(vector<int>V, int n) {
    vector<int>::iterator low = lower_bound(V.begin(), V.end(), n);
    int index = low - V.begin();  
    return index;
}