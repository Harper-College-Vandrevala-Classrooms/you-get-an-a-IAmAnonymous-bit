using namespace std;

#include <string>
#include "student.hpp"

Student::Student(string first_name, string last_name, string student_id)
{
    this->first_name = first_name;
    this->last_name = last_name;
    this->student_id = student_id;
}

string Student::get_first_name()
{
    return this->first_name;
}

string Student::get_last_name()
{
    return this->last_name;
}