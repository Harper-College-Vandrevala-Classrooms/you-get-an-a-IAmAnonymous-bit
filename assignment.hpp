#pragma once

using namespace std;

#include <string>

class Assignment
{
    private:
        string name;
        int max_grade;
    public:
        Assignment(string name, int max_grade);
        string get_name();
        int get_max_grade();
};