#pragma once

using namespace std;

#include <vector>
#include <string>
#include "student.hpp"
#include "assignment.hpp"
#include "grade.hpp"

class Gradebook
{
    private:
        vector<Student> student_list;
        vector<Assignment> assignment_list;
        vector<Grade> grade_list;
    public:
        Gradebook();
        void add_student(string first_name, string last_name, string id);
        void add_assignment(string name, int max_grade);
        void enter_grade(string first_name, string last_name, string assignment_name, int score);
        void report();
};