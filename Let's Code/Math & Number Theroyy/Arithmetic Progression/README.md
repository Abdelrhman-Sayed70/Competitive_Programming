# Arithmetic Progression
**Sequence of numbers such that the difference between every 2 consecutive numbers is constant**
## `Examples`
  - 1 2 3 4 [diff = 1]
  - 2 5 8 [diff = 3]

## `Notes`

- Any number can be even or odd
- I can start with any number and increase the constant value

## `Sum of Arithmetic sequence`
- n even `sum = (first number + last number) * (n / 2)`
- n odd `sum = mid num * n`. such that `mid num = (first num + last num) / 2`
- General rule `sum = [ (a1 + an) * n ] / 2`

## `Get the number of given index`

2 5 8 11 [diff = 3]
- a1 = 2

- a2 = 2 + 3

- a3 = 2 + (2 * 3)

- a4 = 2 + (3 * 3)

- `an = a1 + ( n-1) * diff`
