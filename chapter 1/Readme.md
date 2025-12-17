# 📘 Learning C Programming

This repository documents my journey of learning **C programming** step by step.

---

## 📂 Chapter 1: Basics of C

In this chapter, I learned the **foundation of C programming**, including:

* Running a C program in VS Code
* Writing the first **Hello World** program
* Understanding **variables**
* Learning **data types**
* Using **input and output** (`scanf` and `printf`)

---

## 🚀 First C Program (Hello World)

```c
#include <stdio.h>

int main() {
    printf("Hello World");
    return 0;
}
```

### 🔹 Explanation

* `#include <stdio.h>` → Allows input/output functions
* `main()` → Entry point of the program
* `printf()` → Prints output on the screen
* `return 0;` → Indicates successful execution

---

## 🧠 Variables

A **variable** is the name of a memory location that stores some data.

### 🔹 Example

```c
int age = 20;
```

Here:

* `int` → Data type
* `age` → Variable name
* `20` → Value stored in memory

---

## 📏 Rules for Naming Variables

* Must start with a letter (a–z or A–Z) or underscore `_`
* Cannot start with a number
* No spaces allowed
* No special symbols except `_`
* Must not be a C keyword

### ✔ Valid

```c
int marks;
float total_score;
```

### ❌ Invalid

```c
int 2num;
float total score;
```

---

## 🧩 Data Types in C

Data types specify the **type of data** a variable can store.

| Data Type | Description          | Example               |
| --------- | -------------------- | --------------------- |
| `int`     | Integer values       | `int a = 10;`         |
| `float`   | Decimal values       | `float pi = 3.14;`    |
| `char`    | Single character     | `char grade = 'A';`   |
| `double`  | Large decimal values | `double d = 12.3456;` |

---

## 🔄 Input and Output in C

### 📥 Taking Input (`scanf`)

```c
int x;
scanf("%d", &x);
```

### 📤 Printing Output (`printf`)

```c
printf("Value of x is %d", x);
```

---

## 🧪 Example Program: Variables + Input/Output

```c
#include <stdio.h>

int main() {
    int side;
    float radius;

    printf("Enter the side of the square:\n");
    scanf("%d", &side);
    printf("Area of square = %d\n", side * side);

    printf("Enter the radius of the circle:\n");
    scanf("%f", &radius);
    printf("Area of circle = %.2f\n", 3.14 * radius * radius);

    return 0;
}
```

---

## ✅ What I Learned in Chapter 1

* How to compile and run C programs using GCC
* Importance of `int main()`
* Variables and memory concepts
* Basic data types
* Input and output operations

---

📌 **Next Chapter:** Operators, Conditions, and Control Statements 🚀

---

💻 *Learning step by step and pushing progress to GitHub.*
