class Professional : public Employee {
public:
    // constructor
    Professional(double salary, int days, double contribution)
        : Employee(0, salary, days, 0, contribution) {}

    // override function to calculate weekly salary
    double calculateWeeklySalary(double hoursWorked) override {
        // professional employees are salaried and do not receive hourly pay
        return monthlySalary / 4;
    }

    // override function to compute health care contributions for the week
    double computeHealthCareContribution() override {
        return healthInsuranceContribution / 4;
    }

    // override function to compute vacation days earned for the week
    int computeVacationEarned() override {
        // professional employees get a set number of vacation days per week
        return vacationDays / 4;
    }
};
