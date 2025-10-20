

#include "student.h"
// Default constructor
Student::Student() {
    name = "Unknown";
    age = 0;
    rollNo = "N/A";
    gpa = 0.0;
    cout << "Default constructor called for " << name << endl;
}

// Parameterized constructor
Student::Student(string n, int a, string r, float g) {
    name = n;
    age = a;
    rollNo = r;
    gpa = g;
    cout << "Parameterized constructor called for " << name << endl;
}

// Destructor
Student::~Student() {
    cout << "Destructor called for student: " << name << " (Roll No: " << rollNo << ")" << endl;
}

// Getter methods
string Student::getName() {
    return name;
}

int Student::getAge() {
    return age;
}

string Student::getRollNo() {
    return rollNo;
}

float Student::getGPA() {
    return gpa;
}

// Setter methods
void Student::setName(string n) {
    name = n;
}

void Student::setAge(int a) {
    if (a >= 0) {
        age = a;
    }
}

void Student::setRollNo(string r) {
    rollNo = r;
}

void Student::setGPA(float g) {
    if (g >= 0.0 && g <= 4.0) {
        gpa = g;
    }
}

// Display student information
void Student::displayInfo() {
    cout << "Name: " << name << "  \nAge: " << age
        << "  \nRoll No: " << rollNo << "  \nGPA: " << gpa << endl;
}

// Calculate and display grade based on GPA
void Student::displayGrade() {
    char grade;

    if (gpa >= 3.7) grade = 'A';
    else if (gpa >= 3.3) grade = 'B';
    else if (gpa >= 3.0) grade = 'C';
    else if (gpa >= 2.0) grade = 'D';
    else grade = 'F';
    cout << "====================================" << endl;
    cout << "=========Student Detail=============" << endl;
    cout << "====================================" << endl;
    cout << "Student: " << name << "  \nGPA: " << gpa <<"\nRoll No: "<<rollNo << "  \nGrade: " << grade << endl;
}