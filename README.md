# cpp-login-system

A lightweight C++ console application that provides a secure, loop-based username and password verification system.

## Features
- **Strict Verification**: Evaluates credentials using explicit logical comparison operators.
- **Infinite Loop Protection**: Implements a persistent `while(true)` validation mechanism that breaks only upon successful authentication.
- **Clean Namespace Management**: Avoids global namespace pollution by using explicit `std::` prefixes.

## Requirements
- A modern C++ compiler (e.g., GCC/MinGW, Clang, MSVC).

## Compilation and Execution

Compile the source code using `g++`:
```bash
g++ main.cpp -o login
```

Run the compiled executable:
```bash
.\login
```

## Default Credentials
- **Username**: `gb.clyvn`
- **Password**: `1234`

## Example Usage
```text
Enter Username: wrong_user
Enter Password: 0000
Invalid username or password.

Enter Username: gb.clyvn
Enter Password: 1234
Login successful.
```
