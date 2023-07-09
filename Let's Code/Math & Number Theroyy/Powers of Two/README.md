# Powers of Two

# Detection
**Given number n, show if it is a power of 2**
- n = 2^X we want to `check if there is an integer value x that makes the equation correct.` *take log to 2 sides*
- log(n) = X.log(2)
- X = log(n) / log(2)
- Check if X is an integer
```cpp
bool isPowerOfTwo(int n){
    double x = log(n) / log(2);
    return x == int(x);
}
```
