# cpp-login-system

A secure, console-based user authentication application that uses a continuous validation loop to restrict access until matching credentials are input.

## Features
- **Persistent Access Control**: Implements a continuous validation loop that traps unauthorized login attempts until the correct information is provided.
- **Strict Conditional Logic**: Compares user input directly against specific, hardcoded credential strings using standard boolean operations.
- **Immediate Terminal Feedback**: Notifies users explicitly with customized state readouts when authentication succeeds or fails.

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
Enter Username: admin
Enter Password: password
Invalid username or password.

Enter Username: gb.clyvn
Enter Password: 1234
Login successful.
```
