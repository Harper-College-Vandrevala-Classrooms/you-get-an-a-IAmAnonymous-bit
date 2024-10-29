using namespace std;

#include <string>
#include <cassert>
#include <iostream>
#include "assignment.hpp"

int main()
{
    Assignment exam("Exam 1", 100);

    assert(exam.get_name() == "Exam 1");
    assert(exam.get_max_grade() == 100);

    cout << "Assignment Class Works" << endl;

    return 0;
}