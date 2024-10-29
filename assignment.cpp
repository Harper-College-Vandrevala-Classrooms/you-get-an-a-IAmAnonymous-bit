using namespace std;

#include <string>
#include "assignment.hpp"

Assignment::Assignment(string name, int max_grade)
{
    this->name = name;
    this->max_grade = max_grade;
}

string Assignment::get_name()
{
    return this->name;
}

int Assignment::get_max_grade()
{
    return this->max_grade;
}