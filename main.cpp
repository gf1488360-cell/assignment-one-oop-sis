
#include "student.h"

int main() {
    cout << "=== Student Information System (SIS)===" << endl;
   
    cout << "=======================================" << endl << endl;

    // Creating student objects using different constructors

    cout << "1. Creating student with default constructor:" << endl;
    Student student1; // Default constructor
    student1.displayInfo();
    student1.displayGrade();
    cout << endl;

    cout << "2. Creating student with parameterized constructor:" << endl;
    Student student2("Ali", 20, "CS-001", 3.8f); // Parameterized constructor
    student2.displayInfo();
    student2.displayGrade();
    cout << endl;

    cout << "3. Creating student with default constructor and using setters:" << endl;
    Student student3; // Default constructor
    // Using setter methods
    student3.setName("Sara");
    student3.setAge(22);
    student3.setRollNo("CS-002");
    student3.setGPA(3.2f);

    student3.displayInfo();
    student3.displayGrade();
    cout << endl;

    cout << "4. Demonstrating getter methods:" << endl;
    cout << "Student2 Details using getters:" << endl;
    cout << "Name: " << student2.getName() << endl;
    cout << "Age: " << student2.getAge() << endl;
    cout << "Roll No: " << student2.getRollNo() << endl;
    cout << "GPA: " << student2.getGPA() << endl;
    cout << endl;

    cout << "5. Testing data validation in setters:" << endl;
    student1.setAge(-5); // Invalid age - won't be set
    student1.setGPA(5.0f); // Invalid GPA - won't be set
    cout << "After invalid inputs - ";
    student1.displayInfo();
    cout << endl;

    cout << "=== Program ending Destructors are called automatically ===" << endl;

    return 0;
}