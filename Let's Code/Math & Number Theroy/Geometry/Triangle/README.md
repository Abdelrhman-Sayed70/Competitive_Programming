# Triangle

# Triangle Area
### Using base, height
```cpp
double triangleArea(double base, double height){
    return 0.5 * base * height;
}
```
### Using 3 sides
```cpp
double triangleArea(double a, double b, double c){
    double s = (a + b + c) / 2;
    double ans = sqrt(s * (s - a) * (s - b) * (s - c));
    return ans;
}
```
