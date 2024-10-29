#pragma once

using namespace std;

#include <string>

class Grade
{
    private:
        string student_first_name;
        string student_last_name;
        string assignment_name;
        int score;
    public:
        Grade(string studnet_first_name, string student_last_name, string assignment_name, int score);
        string get_first_name();
        string get_last_name();
        string get_assignment_name();
        int get_score();
};