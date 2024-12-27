### Notes: Why Arrays Are Called Implicit Pointers

1. **Array Name as Address**:
   - The name of an array (e.g., `a`) represents the address of its first element.
   - Example:
     ```c
     int a[5] = {1, 2, 3, 4, 5};
     printf("%p\n", a);       // Address of first element
     printf("%p\n", &a[0]);   // Same address as above
     ```

2. **Pointer-Like Behavior**:
   - Array elements can be accessed using pointer arithmetic:  
     `a[2] == *(a + 2)`

3. **In Functions**:
   - When an array is passed to a function, it is treated as a pointer to its first element:
     ```c
     void display(int arr[], int size); // Same as void display(int *arr, int size);
     ```

4. **Differences Between Arrays and Pointers**:
   - **Memory Layout**: Arrays reserve memory for all elements; pointers store an address.
   - **`sizeof`**:
     - `sizeof(array)` gives the total size of the array.
     - `sizeof(pointer)` gives the size of the pointer.
   - **Reassignment**:
     - Arrays cannot be reassigned; pointers can.
     - Example:
       ```c
       int a[5], b[5];
       int *p = a;
       p = b;   // Valid
       a = b;   // Error
       ```

5. **Key Note**:
   - Arrays are not actual pointers but behave like them in specific contexts, such as function arguments.
