# String Concatenation and Comparison

Given two arrays of intgers `a` and `b` of identical length, and an integer k. This program iterates through `a` from left to right and from `b` right to left, looking at pairs `(x, y)` where `x` is from `a` and `y` is from `b`. A pair is denoted tiny if the concatenation `xy` is strickly less than `k`.

This program returns the number of tiny pairs found in the resultant array test.

## Example

- For `a = [1, 2, 3]`, `b = [1, 2, 3]`, and `k = 31`, the output should be `soluton(a, b, k) = 2`.
- `(1, 3)`. the concatenation equals `13`, which is less than `31`, so the pair is tiny;
- `(2, 2)`. the concatenation equals `22`, which is less than `31`, so the pair is tiny;
- `(3, 1)`. the concatenation equals `13`, which is not less than `31`, so the pair is not tiny;
