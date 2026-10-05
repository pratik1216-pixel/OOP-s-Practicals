#include<iostream>              
using namespace std;           
class Employee                    // base class for employee information
{
    int emp_id;                   // stores employee ID
    string name;                  // stores employee name
    public:                       // public members of the class
    void getEmployee()            // function to accept employee details
    {
        cout<<"Enter Employee ID: ";      // displays message
        cin>>emp_id;                      // takes employee ID

        cout<<"Enter Employee Name: ";    // displays message
        cin>>name;                        // takes employee name
    }
    void displayEmployee()        // function to display employee details
    {
        cout<<"\nEmployee ID: "<<emp_id;       // displays employee ID
        cout<<"\nEmployee Name: "<<name;       // displays employee name
    }
};
class Project                         // base class for project information
{
    int project_id;                   // stores project ID
    string project_name;              // stores project name
    public:                           // public members of the class
    void getProject()                 // function to accept project details
    {
        cout<<"Enter Project ID: ";   // displays message
        cin>>project_id;              // takes project ID

        cout<<"Enter Project Name: "; // displays message
        cin>>project_name;            // takes project name
    }
    void displayProject()             // function to display project details
    {
        cout<<"\nProject ID: "<<project_id;       // displays project ID
        cout<<"\nProject Name: "<<project_name;   // displays project name
    }
};
class EmployeeProject : public Employee, public Project
// employeeproject inherits from both employee and project
// multiple inheritance
{
    public:                           // public members of the class
    void display()                    // function to display all details
    {
        displayEmployee();            // calls employee class display function
        displayProject();             // calls project class display function
    }
};
int main()                            // main function
{
    EmployeeProject e;                // Creates object of EmployeeProject

    e.getEmployee();                  // Calls function to enter employee details
    e.getProject();                   // Calls function to enter project details
    cout<<"\n\n--- Employee Project Details ---"; // Displays heading
    e.display();                      // Displays employee and project details

    return 0;                         // Ends the program
}

