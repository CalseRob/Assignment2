class Employee {
protected:
    double hourlyRate; // hourly rate for nonprofessional employees
    double monthlySalary; // monthly salary for professional employees
    int vacationDays; // number of vacation days for professional employees
    int vacationHours; // number of vacation hours for nonprofessional employees
    double healthInsuranceContribution; // health insurance contribution for the employee
public:
    // constructor
    Employee(double rate, double salary, int days, int hours, double contribution)
        : hourlyRate(rate), monthlySalary(salary), vacationDays(days), vacationHours(hours), healthInsuranceContribution(contribution) 
  }

    // virtual function to calculate weekly salary
    virtual double calculateWeeklySalary(double hoursWorked) = 0;

    // virtual function to compute health care contributions for the week
    virtual double computeHealthCareContribution() = 0;

    // virtual function to compute vacation days/hours earned for the week
    virtual int computeVacationEarned() = 0;
};
