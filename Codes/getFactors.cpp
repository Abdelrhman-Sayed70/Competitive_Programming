// Time complexity : square root of n
vector<ll> getfactors(ll n) {
    vector<ll>ans; 
    for (int i = 1; i <= sqrt(n); i++){
        if (n % i == 0){
            if (n / i == i) {
                ans.push_back(i);
            }
            else {
                ans.push_back(i);
                ans.push_back(n/i);
            }
        }
    }
    rt ans; 
}