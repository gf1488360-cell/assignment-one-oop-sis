
#include<iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    string rollNo;
    float gpa;

public:
    // Constructors
    Student();
    Student(string n, int a, string r, float g);

    // Destructor
    ~Student();

    // Getter methods
    string getName();
    int getAge();
    string getRollNo();
    float getGPA();

    // Setter methods
    void setName(string n);
    void setAge(int a);
    void setRollNo(string r);
    void setGPA(float g);

    // Display methods
    void displayInfo();
    void displayGrade();
};
