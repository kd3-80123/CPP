package employeeinfo;

public class EmployeeTest {

	public static void main(String[] args) {
		Employee employee1 = new Employee();
		employee1.accept();
		employee1.display();
		Employee employee2 = new Employee();
		employee2.accept();
		employee2.display();
		employee1.raiseInSalary();
		employee2.raiseInSalary();
	}

}
