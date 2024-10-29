using namespace std;

#include <string>
#include "grade.hpp"

Grade::Grade(string student_first_name, string student_last_name, string assignment_name, int score)
{
    this->student_first_name = student_first_name;
    this->student_last_name = student_last_name;
    this->assignment_name = assignment_name;
    this->score = score;
}

string Grade::get_first_name()
{
    return this->student_first_name;
}

string Grade::get_last_name()
{
    return this->student_last_name;
}

string Grade::get_assignment_name()
{
    return this->assignment_name;
}

int Grade::get_score()
{
    return this->score;
}