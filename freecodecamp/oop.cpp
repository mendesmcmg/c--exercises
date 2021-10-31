#include <iostream>

using std::string;

class Employee
{
public:
    string Name;
    string Company;
    int Age;

    void IntroduceYourself()
    {
        std::cout << "Name - " << Name << std::endl;
        std::cout << "Company - " << Company << std::endl;
        std::cout << "Age - " << Age << std::endl;
    }

    Employee() {
        
    }
};

int main()
{
    Employee employee1;
    employee1.Name = "Clara";
    employee1.Company = "CJR";
    employee1.Age = 24;
    employee1.IntroduceYourself();

    Employee employee2;
    employee2.Name = "Juliette";
    employee2.Company = "BBB";
    employee2.Age = 31;
    employee2.IntroduceYourself();
}
