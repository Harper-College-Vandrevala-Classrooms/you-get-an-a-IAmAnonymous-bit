#pragma once

using namespace std;

#include <string>

class Student
{
    private:
        string first_name;
        string last_name;
        string student_id;
    public:
        Student(string first_name, string last_name, string student_id);
        string get_first_name();
        string get_last_name();
};