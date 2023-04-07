#include<bits/stdc++.h>
using namespace std;

class Student
{
private:
    string name, subject;
    int age, id;
public:
    Student(string name, int age, int id, string subject)
    {
        this->name = name;
        this->age = age;
        this->id = id;
        this->subject = subject;
    }
    void printInfo()
    {
        cout << "Name: " << name << ", Age: " << age << ", subject: " << subject << ", id: " << id << "\n";
    }
};

int main()
{
    Student s("Rakib", 23, 73, "CSE");
    s.printInfo();


    return 0;
}
