#include<bits/stdc++.h>
using namespace std;

class Student{
public:
    string name;
    int std_id;
    int age;
    string fathers_name;
    string mothers_name;

    void information(){
        cout << name << " " << std_id << " " << age << " " << fathers_name << " " << mothers_name << endl;
    }
};

class Rectangle{
public:
    int height, width;

    // area
    int calculateArea(){
        return height*width;
    }
    // perimeter
    int perimeter(){
        return 2 * (height+width);
    }

};

int main()
{
    Student s;
    s.name = "Rakib";
    s.std_id = 73;
    s.age = 24;
    s.fathers_name = "Ziaur Rahman";
    s.mothers_name = "Nazma Begum";

    s.information();

    Rectangle r;
    r.height = 23;
    r.width = 32;

    cout << r.calculateArea() << endl;
    cout << r.perimeter() << endl;


    return 0;
}
