class Nonprofessional : public Employee {
public:
    // constructor
    Nonprofessional(double rate, int hours, double contribution)
        : Employee(rate, 0, 0, hours, contribution) {}

    // override function to calculate weekly salary
    double calculateWeeklySalary(double hoursWorked) override {
        // nonprofessional employees are paid hourly
        return hoursWorked * hourlyRate;
    }

    // override function to compute health care contributions for the week
    double computeHealthCareContribution() override {
        return healthInsuranceContribution / 4;
    }

    // override function to compute vacation hours earned for the week
    int computeVacationEarned() override {
        // nonprofessional employees earn vacation hours based on hours worked
        return vacationHours * 0.05;
    }
};
