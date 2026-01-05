# cpp-function-default-parameters
C++ 
# C++ Add Function Using Default Argument

This repository contains a simple C++ program that demonstrates the use of a **function with a default argument** to perform addition.

---

## 📌 Program Description

The `add()` function accepts three integer parameters:
- The third parameter has a default value of `0`
- This allows the function to add either **two or three numbers**

---

## 🧠 Concepts Covered

- Default function arguments
- Function definition and calling
- Basic arithmetic operations
- Standard input/output in C++

---

## 📂 File Structure


---

## 💻 Source Code

```cpp
#include <iostream>
using namespace std;

int add(int x, int y, int z = 0) {
    return x + y + z;
}

int main() {
    cout << add(10, 3) << endl;
    cout << add(3, 5, 8) << endl;
    cout << add(2, 6, 0) << endl;
    return 0;
}
