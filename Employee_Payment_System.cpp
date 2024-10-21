
#include<iostream>
#include<vector>
#include<random>
#include<string>
using namespace std;
class Employee {
protected:
	string name;
	int id;
public:
	Employee(const string& name, int id) : name(name), id(id){}
	virtual void display() const {
		cout << "Name: " << name << " " << " ,ID: " << id << endl;
	}
	virtual double calculatePay() const = 0;

};

class HourlyEmployee : public Employee{
private:
	double hourlyRate;
	int hoursWorked;
public:
	HourlyEmployee(const string& name, int id, double rate, int hours) :
		Employee(name, id), hourlyRate(rate), hoursWorked(hours){}
	void display() const override {
		Employee::display();
		cout << "Type: Hourly Employee" << endl;
	}
	double calculatePay() const override {
		return hourlyRate * hoursWorked;
	}
};
class SalriedEmployee : public Employee {
private:
	double anualSalary;
public:
	SalriedEmployee(const string& name,int id,int salary):Employee(name,id),anualSalary(salary){}
	void display() const override {
		Employee::display();
		cout << "Type: Salaried Employee" << endl;
	}
	double calculatePay() const override {
		return anualSalary / 52.0;
	}
};
class PayrollSystem {
private:
	vector<Employee*>employees;
public:
	void addEmployee(Employee* emp) {
		employees.push_back(emp);
	}
	void displayAllEmployees() const {
		for (const auto& emp : employees) {
			emp->display();
			std::cout << "Weekly Pay: $" << emp->calculatePay() << std::endl;
			std::cout << "------------------------" << std::endl;

		}
	}

};

int main()
{
	PayrollSystem payroll;
	//HourlyEmployee("John",1001,15.0,40);
	payroll.addEmployee(new HourlyEmployee("John", 1001, 15.0, 40));
	payroll.addEmployee(new SalriedEmployee("jane", 1234, 53400));
	std::cout << "Employee Information:" << std::endl;
	payroll.displayAllEmployees();
	return 0;
}

