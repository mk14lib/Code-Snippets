#include <bits/stdc++.h>
using namespace std;

class Student{
    char* name;
    int age;
    static int totalStudents;
    const int rollNo;
    int &j;
    
    public:
    
    // Parameterized constructor
    Student(char* name, int age, int r): age(age), rollNo(r), j(this->age)
    {
        // deep copy
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
        
        // shallow copy - changes in original string with reflect here
        // this->name = name;
        
        totalStudents++;
    }
    
    void getName() const
    {
        cout << name << endl;
    }
    
    void getAge() const
    {
        cout << age << endl;
    }
    
    void getRollnumber() const
    {
        cout << rollNo << endl;
    }
    
    static int getTotalStudents()
    {
        return totalStudents;
    }
};

int Student::totalStudents = 0;

int main()
{
    char name[10] = "Ramesh";
    Student s1(name, 24, 123);
    
    cout << "Name: "; s1.getName();
    cout << "Age: "; s1.getAge();
    cout << "Roll: "; s1.getRollnumber();
    
    name[0] = 'S';
    name[1] = 'u';
    name[2] = 'r';
    
    Student s2(name, 25, 124);
    cout << "Name: "; s2.getName();
    cout << "Age: "; s2.getAge();
    cout << "Roll: "; s2.getRollnumber();
    
    cout << "Total Students: " << Student::getTotalStudents() << endl;
    return 0;
}
