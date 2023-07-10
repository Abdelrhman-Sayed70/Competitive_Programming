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

## `Modular Exponentiation`
#### Calculate `(base ^ power) % m`
```cpp
ll multiply(ll a, ll b, ll c){
    return ((a % c) * (b % c)) % c;
}
ll fastPowerModular(int base, int power, int m){
    if (power == 1)
        return base;

    ll a = fastPowerModular(base, power / 2, m);
    ll result = multiply(a, a, m);

    if (power & 1)
        result = multiply(result, base, m);

    return result;
}
```
