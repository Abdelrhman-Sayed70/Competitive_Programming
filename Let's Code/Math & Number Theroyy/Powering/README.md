# Powering

## `Fast Power`
```cpp
ll fastPower(int base, int power){
    if (power == 1){
        return base;
    }
    ll a = fastPower(base, power / 2);

    if (power & 1)
        return base * a * a;
    else
        return a * a;
}
```
