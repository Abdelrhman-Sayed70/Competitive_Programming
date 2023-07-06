# Beautiful Divisors
## [Beautiful Divisors | Codeforces](https://codeforces.com/contest/893/problem/B)


## Solution
```cpp
void doIt() {
    int n;
    cin >> n;
    vector<int>factors;
    for (int i = 1; i * i <= n; i++){
        if (n % i == 0){
            factors.push_back(i);
            if (n / i != i)
                factors.push_back(n / i);
        }
    }
    sort(all(factors));

    set<int>st;
    int num = 1, k = 2;
    
    // generate good numbers 
    while(num <= n){
        st.insert(num);
        num = (pow(2, k) - 1) * pow(2, k - 1);
        k++;
    }
    // search for greatest good number
    for(int i = factors.size() - 1; i >= 0; i--){
        if (st.count(factors[i])){
            cout << factors[i];
            break;
        }
    }
}
```
