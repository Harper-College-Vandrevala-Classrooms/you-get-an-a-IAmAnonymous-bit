using namespace std;

#include <string>
#include <cassert>
#include <iostream>
#include "grade.hpp"

int main()
{
    Grade grade("Jeff", "Jefferson", "Exam 1", 90);

    assert(grade.get_first_name() == "Jeff");
    assert(grade.get_last_name() == "Jefferson");
    assert(grade.get_assignment_name() == "Exam 1");
    assert(grade.get_score() == 90);
    
    cout << "Grade Class Works" << endl;

    return 0;
}