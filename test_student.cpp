using namespace std;

#include <string>
#include <cassert>
#include <iostream>
#include "student.hpp"

int main()
{
    Student will("Jeff", "Jefferson", "ABC123");

    assert(will.get_first_name() == "Jeff");
    assert(will.get_last_name() == "Jefferson");
    
    cout << "Student Class Works" << endl;

    return 0;
}