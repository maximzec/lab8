#include <iostream>
#include <vector>
#include <queue>
#include <list>
#include <string>
#include <iterator>
#include "Complex.h"
int main() {
    std::string student = "";
    std::vector<std::string> students;
    while (student != "0") {
        std::getline(std::cin, student);
        if (student != "0") students.push_back(student);
    }
    std::cout << "First student : " << students.front() << std::endl;
    std::cout << "Last student : " << students.back() << std::endl;

    std::list<Complex> complex;
    Complex complex1(2, 2);
    Complex complex2(3, 4);
    Complex complex3(2, 2);

    complex.push_back(complex1);
    complex.push_front(complex2);
    complex.push_front(complex3);
    std::cout << complex.front();
    std::cout << complex.size();

    std::queue<std::string> cars;
    std::string car_number = "";

    while (car_number != "0") {
        std::getline(std::cin, car_number);
        if (car_number != "0") cars.push(car_number);
    }
    while (cars.size() != 0)
    {
        std::cout << "You are ready to be washed :" << cars.front() << std::endl;
        cars.pop();
    }



    return 0;
}