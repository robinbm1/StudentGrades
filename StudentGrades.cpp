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

    if (grade >= 90)
        std::cout << "Grade A" << std::endl;
    else if (grade >= 80)
        std::cout << "Grade B" << std::endl;
    else if (grade >= 70)
        std::cout << "Grade C" << std::endl;
    else if (grade >= 60)
        std::cout << "Grade D" << std::endl;
    else
        std::cout << "Grade F" << std::endl;

    return 0;
}