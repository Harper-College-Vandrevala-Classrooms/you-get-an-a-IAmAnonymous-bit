[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/5q8vzIyP)
[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-2e0aaae1b6195c2367325f4f02e2d04e9abb55f0b24a779b69b11b9e10269abc.svg)](https://classroom.github.com/online_ide?assignment_repo_id=16813431&assignment_repo_type=AssignmentRepo)

Hello, You Have Decided to Use The Gradebook Class by Nathaniel Reyes.
- To create a Gradebook, simply type in a gradebook object. The gradebook object will contain the lists of students, assignments, and grades you enter in code. There is no need to add any arguements to the gradebook.
    - Ex: Gradebook my_new_gradebook;
- To add a Student to your gradebook, use the add_student method and enter the arguments first_name string value, last_name string value, and student_id string value in that order. Once you compile your code, the student will be added to the list of students in your gradebook.
    - Ex: my_new_gradebook.add_student("Spongebob", "Squarepants", "NICK19");
- To add an Assignment to your gradebook, use the add_assignment method and enter the arguments name string value and max_grade int value in that order. Once you compile your code, the assignment will be added to the list of assignments in your gradebook.
    - Ex: my_new_gradebook.add_assignment("Worksheet", 100);
- To enter a Grade to your gradebook, use the enter grade method and enter the arguments first_name string value, last_name string value, assignment_name string value, and score int value in that order. Once you compile your code, the grade will be added to the list of grades in your gradebook.
    - Ex: my_new_gradebool.enter_grade("Spongebob", "Squarepants", "Worksheet", 90);
    - Warning: If you enter a grade with a first_name and/or last_name or a student that was not added to your gradebook, assignment_name that was not added to your gradebook, and/or enter a score of an existing assignment in your gradebook that is not within the assignments scoring bounds, you will be given an error and the grade WILL NOT be entered.
- To view your Gradebook, use the report method to see all your students and the assignments they have completed.
    - EX:
        Student Grades:
        - Squarepants, Spongebob, NICK19
            - Worksheet, 90/100
    - Note: If you have not added any students, assignments, or grades, nothing will be printed under "Student Grades: "