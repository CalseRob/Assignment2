int main() {
    // create a professional employee with $8000 monthly salary, 20 vacation days, and $200 health insurance contribution
    Professional p(8000, 20, 200);

    // calculate the weekly salary for a professional employee who worked 35 hours
    double weeklySalary = p.calculateWeeklySalary(35);
    std::cout << "Professional employee weekly salary: $" << weeklySalary << std::endl;

    // compute the health care contribution for the week
    double healthCareContribution = p.computeHealthCareContribution();
    std::cout << "Professional employee health care contribution for the week: $" << healthCareContribution << std::endl;

    // compute the vacation days earned for the week
    int vacationDays = p.computeVacationEarned();
    std::

// Create an instance of NonProfessional employee
 NonProfessional nonpro_emp(15.0, 40.0, 2.0);

  // Calculate and output weekly salary
  double weekly_salary = nonpro_emp.computeWeeklySalary();
  std::cout << "NonProfessional employee weekly salary: $" << weekly_salary << std::endl;

  // Calculate and output health care contribution for the week
  double health_care_contribution = nonpro_emp.computeHealthCareContribution();
  std::cout << "NonProfessional employee health care contribution for the week: $" << health_care_contribution << std::endl;

  // Calculate and output vacation hours earned for the week
  double vacation_hours_earned = nonpro_emp.computeVacationEarned();
  std::cout << "NonProfessional employee vacation hours earned for the week: " << vacation_hours_earned << std::endl;

  return 0;
}
