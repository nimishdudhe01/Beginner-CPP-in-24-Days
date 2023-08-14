# Beginner-CPP-in-24-Days

# C++ Code Examples Repository

Welcome to the C++ Code Examples Repository! This repository contains a collection of code examples covering a range of topics in C++, from basic concepts to more advanced features. Whether you're a beginner or looking to refresh your C++ skills, you'll find useful examples here.

Feel free to explore the code examples and learn at your own pace. If you have any questions or need further clarification, don't hesitate to reach out.

## Table of Contents

- [Introduction](#introduction)
- [Getting Started](#getting-started)
- [Examples](#examples)
  - [Hello World](#hello-world)
  - [Variables and Data Types](#variables-and-data-types)
  - [Input and Output](#input-and-output)
  - [Control Structures](#control-structures)
  - [Functions](#functions)
  - [Object-Oriented Programming](#object-oriented-programming)
  - [Exception Handling](#exception-handling)
  - [File I/O](#file-io)

## Introduction

This repository is designed to help you learn and practice C++ programming concepts. Each example comes with explanations and comments to guide you through the code. You can use these examples as a reference or modify them to experiment and deepen your understanding.

## Getting Started

To run these code examples, make sure you have a C++ compiler installed on your system. You can use popular compilers like g++, Visual C++, or clang.

1. Clone this repository to your local machine:
   ```bash
   git clone https://github.com/your-username/cpp-code-examples.git
   ```

2. Navigate to the desired code example directory:
   ```bash
   cd cpp-code-examples/ExampleDirectory
   ```

3. Compile the code using your chosen compiler. For example:
   ```bash
   g++ example.cpp -o example
   ```

4. Run the compiled executable:
   ```bash
   ./example
   ```

## Examples

### Hello World

The classic "Hello, World!" program to get you started.

```cpp
#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
```

### Variables and Data Types

Learn about different data types and how to declare variables.

```cpp
#include <iostream>

int main() {
    int num = 42;
    float pi = 3.14159;
    char letter = 'A';
    
    std::cout << "Integer: " << num << std::endl;
    std::cout << "Float: " << pi << std::endl;
    std::cout << "Character: " << letter << std::endl;
    
    return 0;
}
```

### Input and Output

Explore user input and displaying output using `cin` and `cout`.

```cpp
#include <iostream>
#include <string>

int main() {
    std::string name;
    int age;
    
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    
    std::cout << "Enter your age: ";
    std::cin >> age;
    
    std::cout << "Hello, " << name << "! You are " << age << " years old." << std::endl;
    
    return 0;
}
```

### Control Structures

Learn about if statements, loops, and decision-making.

```cpp
#include <iostream>

int main() {
    int num = 5;

    if (num > 0) {
        std::cout << "Positive" << std::endl;
    } else if (num < 0) {
        std::cout << "Negative" << std::endl;
    } else {
        std::cout << "Zero" << std::endl;
    }

    for (int i = 1; i <= 5; ++i) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
```

### Functions

Learn about functions, parameters, and return values.

```cpp
#include <iostream>

int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(3, 4);
    std::cout << "Result: " << result << std::endl;

    return 0;
}
```

### Object-Oriented Programming

Introduction to classes and objects.

```cpp
#include <iostream>
#include <string>

class Person {
public:
    std::string name;
    int age;

    void introduce() {
        std::cout << "Hi, I'm " << name << " and I'm " << age << " years old." << std::endl;
    }
};

int main() {
    Person person;
    person.name = "Alice";
    person.age = 25;

    person.introduce();

    return 0;
}
```

### Exception Handling

Learn how to handle exceptions using `try`, `catch`, and `throw`.

```cpp
#include <iostream>
#include <stdexcept>

int main() {
    try {
        int x = 10;
        int y = 0;
        if (y == 0) {
            throw std::runtime_error("Division by zero");
        }
        int result = x / y;
        std::cout << "Result: " << result << std::endl;
    } catch (const std::runtime_error& ex) {
        std::cout << "Exception caught: " << ex.what() << std::endl;
    }

    return 0;
}
```

### File I/O

Learn how to read from and write to files using file streams.

```cpp
#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ofstream outputFile("output.txt");
    outputFile << "Hello, file!" << std::endl;
    outputFile.close();

    std::ifstream inputFile("input.txt");
    if (inputFile.is_open()) {
        std::string line;
       

 while (getline(inputFile, line)) {
            std::cout << line << std::endl;
        }
        inputFile.close();
    } else {
        std::cout << "Failed to open the input file." << std::endl;
    }

    return 0;
}
```

## Contribute

If you have additional code examples or improvements to existing ones, feel free to fork this repository and submit a pull request.
