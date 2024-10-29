using namespace std;

#include <iostream>
#include <string>
#include "gradebook.hpp"

int main()
{
    Gradebook gradebook;

    gradebook.add_student("Nathaniel", "Reyes", "891629");
    gradebook.add_student("Mickey", "Mouse", "DISNEY20");

    gradebook.add_assignment("Homework 1", 50);
    gradebook.add_assignment("Exam 1", 100);

    gradebook.enter_grade("Nathaniel", "Reyes", "Homework 1", 45);
    gradebook.enter_grade("Bruce", "Wayne", "Homework 2", 50);
    gradebook.enter_grade("Minnie", "Mouse", "Exam 1", 110);
    gradebook.enter_grade("Nathaniel", "Mark", "Exam 1", 10);

    return 0;
}