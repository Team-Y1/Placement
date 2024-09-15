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

## Strings

- A string is a sequence of characters.
- Strings are immutables, meaning that once a string is created, it cannot be changed.

``` python
s = "hello"
```

```C
char s[] = "hello";
```

### Accessing Characters
Strings are like arrays of characters, so you can access individual characters using an index.
```python
s = "hello"
print(s[0])  # Output: 'h'
print(s[1])  # Output: 'e'
```
``` C
char s[] = "hello";
printf("%c\n", s[0]);  // Output: 'h'
```
### String Length

``` python
s = "hello"
print(len(s))  # Output: 5
```

```C
#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "hello";
    printf("%lu\n", strlen(s));  // Output: 5
    return 0;
}
```

### Concatenation
Combining two strings into one
```python
s1 = "hello"
s2 = " world"
result = s1 + s2
print(result)  # Output: 'hello world'
```
```C
#include <stdio.h>
#include <string.h>

int main() {
    char s1[20] = "hello";
    char s2[] = " world";
    strcat(s1, s2);  // Concatenates s2 to s1
    printf("%s\n", s1);  // Output: 'hello world'
    return 0;
}
```
### Substring/Slicing
Extracting part of a string.

```Python
s = "hello"
print(s[1:4])  # Output: 'ell' (substring from index 1 to 3)
```

```C
#include <stdio.h>
#include <string.h>

void substring(char *s, int start, int length, char *result) {
    strncpy(result, s + start, length);
    result[length] = '\0';  // Null-terminate the result
}

int main() {
    char s[] = "hello";
    char result[10];
    substring(s, 1, 3, result);
    printf("%s\n", result);  // Output: 'ell'
    return 0;
}
```

### String Comparison
Compare two strings to see if they are equal.

``` python
s1 = "hello"
s2 = "hello"
print(s1 == s2)  # Output: True
```

```C
#include <stdio.h>
#include <string.h>

int main() {
    char s1[] = "hello";
    char s2[] = "hello";
    if (strcmp(s1, s2) == 0) {
        printf("Strings are equal\n");  // Output: 'Strings are equal'
    }
    return 0;
}
```

### Changing Case
Convert strings to upper or lower case.

```python
s = "hello"
print(s.upper())  # Output: 'HELLO'
print(s.lower())  # Output: 'hello'
```
```C
#include <stdio.h>
#include <ctype.h>

void to_upper(char *s) {
    for (int i = 0; s[i] != '\0'; i++) {
        s[i] = toupper(s[i]);
    }
}

int main() {
    char s[] = "hello";
    to_upper(s);
    printf("%s\n", s);  // Output: 'HELLO'
    return 0;
}
```
### Finding Substring
```python
s = "hello world"
index = s.find("world")
print(index)  # Output: 6 (index of 'world')
```
```C
#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "hello world";
    char *ptr = strstr(s, "world");
    if (ptr != NULL) {
        printf("Found at index: %ld\n", ptr - s);  // Output: 6
    }
    return 0;
}
```

- Strings are widely used for storing textual data.
- Strings are manipulated for tasks such as search, replace, and formatting in applications like text editors and word processors.
- Strings are essential in pattern matching, such as finding patterns using regular expressions.
