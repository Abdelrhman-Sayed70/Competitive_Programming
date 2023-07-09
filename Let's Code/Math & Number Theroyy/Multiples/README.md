# Multiples

```cpp
void doIt(){
    int n, mx;
    cin >> n >> mx;
    // generate multiples of n till mx
    for(int i = n; i <= mx; i += n){
        cout << i << " ";
    }
}
```
