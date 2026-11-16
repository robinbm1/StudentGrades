#include <iostream>
#include <string>

int main() {
    std::string name;
    double grade;

    std::cout << "Enter student name: ";
    std::cin >> name;

    std::cout << "Enter grade: ";
    std::cin >> grade;

    std::cout << "Student: " << name << std::endl;
    std::cout << "Grade: " << grade << std::endl;

    return 0;
}