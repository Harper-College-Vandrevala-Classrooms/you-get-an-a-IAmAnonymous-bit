using namespace std;

#include <string>
#include <vector>
#include <iostream>
#include "gradebook.hpp"

Gradebook::Gradebook()
{

}

void Gradebook::add_student(string first_name, string last_name, string id)
{
    Student *s = new Student(first_name, last_name, id);
    this->student_list.push_back(*s);
    delete s;
}

void Gradebook::add_assignment(string name, int max_grade)
{
    Assignment *a = new Assignment(name, max_grade);
    this->assignment_list.push_back(*a);
    delete a;
}

void Gradebook::enter_grade(string first_name, string last_name, string assignment_name, int score)
{
    bool stu_exist = false;
    bool assign_exist = false;
    bool valid_score = false;

    for(int i = 0; i < student_list.size(); i++)
    {
        if (student_list[i].get_first_name() == first_name && student_list[i].get_last_name() == last_name)
        {
            stu_exist = true;
        }
    }

    for(int i = 0; i < assignment_list.size(); i++)
    {
        if (assignment_list[i].get_name() == assignment_name)
        {
            assign_exist = true;
            if (assignment_list[i].get_max_grade() >= score && score >= 0)
            {
                valid_score = true;
            }
        }
    }

    if(!stu_exist)
    {
        cout << "No Student Named \"" << first_name << " " << last_name << "\" Found" << endl;
    }

    if(!assign_exist)
    {
        cout << "No Assignment Named \"" << assignment_name << "\" Found" << endl;
    } else if (!valid_score) {
        cout << "Invalid Score Entered For \"" << assignment_name << "\"" << endl;
    }

    if (stu_exist && assign_exist && valid_score)
    {
        Grade *g = new Grade(first_name, last_name, assignment_name, score);
        this->grade_list.push_back(*g);
        delete g;
    }

}