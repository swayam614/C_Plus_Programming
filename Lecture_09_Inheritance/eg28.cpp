#include <iostream>
#include <string.h>

using namespace std;

class Person
{
private:
    char name[21];

public:
    void setName(const char *n)
    {
        strcpy(name, n);
    }
    void getName(char *n)
    {
        strcpy(n, name);
    }
};

class Employee
{
private:
    int id;
    int salary;

public:
    void setId(int i)
    {
        id = i;
    }
    int getId()
    {
        return id;
    }

    void setSalary(int s)
    {
        salary = s;
    }
    int getSalary()
    {
        return salary;
    }
};

class Doctor : public Person, public Employee
{
private:
    char type[51];

public:
    void setType(const char *t)
    {
        strcpy(type, t);
    }
    void getType(char *t)
    {
        strcpy(t, type);
    }
};

int main()
{
    Doctor d;
    char name[21];
    char type[51];
    d.setId(1234);
    d.setName("Agrawal");
    d.setSalary(100000);
    d.setType("Dentist");
    d.getName(name);
    d.getType(type);

    cout << "Doctor Details" << endl;
    cout << "Id : " << d.getId() << endl;
    cout << "Name : " << name << endl;
    cout << "Salary : " << d.getSalary() << endl;
    cout << "Type : " << type << endl;

    return 0;
}