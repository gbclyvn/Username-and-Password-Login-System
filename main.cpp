#include <iostream>
#include <string>

int main() {
    std::string cusername = "gb.clyvn";
    std::string cpass = "1234";

    std::string username, password;

    while (true) {
        std::cout << "Enter Username: ";
        std::cin >> username;

        std::cout << "Enter Password: ";
        std::cin >> password;

        if (username == cusername && password == cpass) {
            std::cout << "Login successful.\n";
            break;
        } else {
            std::cout << "Invalid username or password.\n";
        }
    }

    return 0;
}
