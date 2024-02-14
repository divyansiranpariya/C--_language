#include <iostream>
using namespace std;

class Student
 {
private:
    int stu_id;
    string stu_name;
    int stu_age;
    string stu_course;
    string stu_email;
    string stu_college;

public:
   
    Student(int id, string name, int age, string course, string email, string college)  
           {
           	this->stu_id=id;
    this->stu_name=name;
   this->stu_age=age;
    this->stu_course=course;
   this->stu_email=email;
   this->stu_college=college;
		   }

    void display()
	 {
        cout << "Student ID: " << stu_id << endl;
        cout << "Student Name: " << stu_name << endl;
        cout << "Age: " << stu_age << endl;
        cout << "Course: " << stu_course << endl;
        cout << "Email: " << stu_email << endl;
        cout << "College: " << stu_college << endl;
    }
};

int main() {
    int id, age;
    string name, course, email, college;

    cout << "Enter Student ID: ";
    cin >> id;
    
    cout << "Enter Student Name: ";
    cin>>name;
    
    cout << "Enter Student Age: ";
    cin >> age;
    cout << "Enter Course: ";
    cin>>course;
    cout << "Enter Email: ";
   cin>>email;
    cout << "Enter College: ";
    cin>>college;

    Student news(id, name, age, course, email, college);

    cout << "\nStudent Information:" << endl;
    news.display();

    return 0;
}

