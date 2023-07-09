# Sum of Range
## [Sum of Range | Codeforces](https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/C)

## Solution
```cpp
ll sumSequance(ll firstNumber, ll lastNumber, ll numberOfNumbers){
    ll ans = (firstNumber + lastNumber) * numberOfNumbers / 2 ;
    return ans;
}
ll sumEven(ll a, ll b){
    // validate start & end
    if (a & 1)
        a++;
    if(b & 1)
        b--;
    if (a > b)
        return 0;

    // calculate
    ll numberOfNumbers = ((b - a) / 2) + 1;
    ll ans = ((a + b) * numberOfNumbers) / 2;
    return ans;
}
ll sumOdd(ll a, ll b){
    // validate start & end
    if (a % 2 == 0)
        a++;
    if(b % 2 == 0)
        b--;
    if (a > b)
        return 0;

    // calculate
    ll numberOfNumbers = ((b - a) / 2) + 1;
    ll ans = ((a + b) * numberOfNumbers) / 2;
    return ans;
}
void doIt() {
     ll a, b;
     cin >> a >> b;
     if (a > b)
         swap(a, b);

     cout << sumSequance(a, b, b - a + 1) << "\n";
     cout << sumEven(a, b) << "\n" << sumOdd(a, b) ;
}
```
