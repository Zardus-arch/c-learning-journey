# Reverse Array in C

A simple C exercise that reverses an array in place using a `while` loop and a temporary variable.

## Example

**Input:**
```text
1 2 3 4 5 6 7
```

**Output:**
```text
7 6 5 4 3 2 1
```

## Approach

The program swaps elements from opposite ends of the array:

- `i` starts at the beginning.
- `x - 1 - i` points to the corresponding element at the end.
- `temp` temporarily stores a value during swapping.

The loop stops when it reaches the middle of the array.

## How to Run

```bash
gcc reverse_array.c -o reverse_array
./reverse_array
```

## Concepts Practiced

- Arrays and indexing
- `while` loops
- Swapping elements
- In-place array manipulation
