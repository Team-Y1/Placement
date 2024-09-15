# Arrays and Strings

## Arrays

- An array is data structure that stores a collection of elements.
- Typically of the same data type, in a contiguous block of memory.

``` python
# Initialize an array (list in Python)
arr = [1, 2, 3, 4, 5]

# Access elements
print(arr[0])  # Output: 1

# Append element at the end
arr.append(6)
print(arr)  # Output: [1, 2, 3, 4, 5, 6]

# Insert element at specific index
arr.insert(2, 9)  # Insert 9 at index 2
print(arr)  # Output: [1, 2, 9, 3, 4, 5, 6]

# Delete element
arr.remove(4)  # Remove the first occurrence of 4
print(arr)  # Output: [1, 2, 9, 3, 5, 6]

# Pop last element
arr.pop()  # Removes the last element (6)
print(arr)  # Output: [1, 2, 9, 3, 5]

# Slicing the array
print(arr[1:4])  # Output: [2, 9, 3] (elements from index 1 to 3)
```

