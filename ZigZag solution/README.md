# Zigzag

A triple `(a, b, c)` is a zigzag if either `a < b > c` or `a > b < c`.

Given an array of integers `numbers`. the cpp file checks its consecutive elements if it fits the zigzag property, and creates an array of length `numbers.length - 2` where the `ith` element of the output array equals `1` if the triple `numbers[i], numbers[i+1] numbers[i+2]` is a zigzag otherwise it it equals `0`.

## Example
- For `numbers = [1, 2, 1, 3, 4]` the output should be `solution(numbers) = [1, 1, 0]`;

- `(numbers[1], numbers[2], numbers[3] = (1, 2, 1))` is a zigzag, because `1 < 2 > 1`.
- `(numbers[1], numbers[2], numbers[3] = (2, 1, 3))` is a zigzag, because `2 > 1 < 3`.
- `(numbers[1], numbers[2], numbers[3] = (1, 3, 4))` is a not zigzag, because `1 < 3 < 4`.
