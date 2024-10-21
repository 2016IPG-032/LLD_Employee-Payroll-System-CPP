# LLD_Employee-Payroll-System-CPP
You are tasked with designing a Payroll System for a company that employs both hourly and salaried workers. The company needs a system that allows tracking employee information and calculating weekly pay based on employee type. There are two types of employees:

Hourly Employees:
These employees are paid based on the number of hours worked and their hourly wage.
The weekly pay is calculated as:
Weekly Pay = Hourly Rate * Hours Worked
Salaried Employees:
These employees are paid a fixed annual salary.
The weekly pay is calculated as:
Weekly Pay = Annual Salary / 52 (assuming 52 weeks in a year)
Requirements:
Employee Information:
Each employee has the following basic information:

Name
Employee ID
Hourly Employee:
In addition to the basic employee information, hourly employees should have:

Hourly Rate
Hours Worked in a week
Salaried Employee:
In addition to the basic employee information, salaried employees should have:

Annual Salary
Payroll System:

The system should be able to store a list of employees.
It should support adding both hourly and salaried employees to the system.
It should display each employee’s details, including their name, ID, type (Hourly/Salaried), and their calculated weekly pay.
Display Format:
The system should display the employee information in the following format:

yaml
Copy code
Name: John, ID: 1001
Type: Hourly Employee
Weekly Pay: $600
------------------------
Name: Jane, ID: 1234
Type: Salaried Employee
Weekly Pay: $1026.92
------------------------
#Objective:
Develop a program that models the above scenario using object-oriented principles. The system should be able to handle different types of employees, calculate their weekly pay, and display their information in a user-friendly format.
