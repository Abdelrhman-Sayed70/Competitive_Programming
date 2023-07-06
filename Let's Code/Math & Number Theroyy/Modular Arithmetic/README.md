# Modular Arithmetic
**What does `a % b` mean? the *`smallest positive`* integer number such that `a - m` is a multiple of b / divisible by b**

- `14 % 3 = 2` **14 - 2 = 12. 12 is a multiple of 3**
- `4 % 5 = 4`

## General Rule `a % b = mod`
- `a < b` `mod = a`
- `a = b` `mod = 0`
- `a > b` `0 <= mod < b - 1`
- `b == 0` `Math error`

## `Cyclic Identity`
For the given list get the mod with 5

- list `1 2 3 4 5 6 7 8 9 10 11 12 13`
- ans  `1 2 3 4 0 1 2 3 4 0  1  2  3`
- the answer is always between 0 and 5 - 1 = 4
