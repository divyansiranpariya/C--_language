#include<iostream>
#include<string>
using namespace std;

class A {
private:
    int id, salary, exp, age;
    string name;

public:
    void setID(int id) {
        this->id = id;
    }

    void setSalary(int salary) {
        this->salary = salary;
    }

    void setExp(int exp) {
        this->exp = exp;
    }

    void setAge(int age) {
        this->age = age;
    }

    void setName(string name) {
        this->name = name;
    }

    int getID() {
        return id;
    }

    int getSalary() {
        return salary;
    }

    int getExp() {
        return exp;
    }

    int getAge() {
        return age;
    }

    string getName() {
        return name;
    }
};

class B : public A {
private:
    string role;

public:
    void setRole(string role) {
        this->role = role;
    }

    string getRole() {
        return role;
    }
};

class C : public B {
private:
    string email, city;

public:
    void setEmail(string email) {
        this->email = email;
    }

    void setCity(string city) {
        this->city = city;
    }

    string getEmail() {
        return email;
    }

    string getCity() {
        return city;
    }
};

class D : public C {
public:
    void displayData() {
        cout << "Id: " << getID() << endl;
        cout << "Name: " << getName() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Salary: " << getSalary() << endl;
        cout << "Experience: " << getExp() << endl;
        cout << "Role: " << getRole() << endl;
        cout << "City: " << getCity() << endl;
        cout << "Email: " << getEmail() << endl;
    }
};

int main() {
    D d;
    int id, salary, exp, age;
    string name, role, email, city;

    cout << "Enter employee id: ";
    cin >> id;
    d.setID(id);

    cout << "Enter employee name: ";
    cin>>name;
    d.setName(name);

    cout << "Enter employee age: ";
    cin >> age;
    d.setAge(age);

    cout << "Enter employee salary: ";
    cin >> salary;
    d.setSalary(salary);

    cout << "Enter employee experience: ";
    cin >> exp;
    d.setExp(exp);

    cout << "Enter employee role: ";
    cin>>role;
    d.setRole(role);

    cout << "Enter employee email: ";
    cin>>email;

    cout << "Enter employee city: ";
    cin>>city;

    d.displayData();

    return 0;
}

