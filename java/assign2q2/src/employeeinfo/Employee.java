package employeeinfo;

import java.util.Scanner;

public class Employee {
	
	String firstName;
	String lastName;
	double monthlySalary;
	
	
	public Employee() {
		
	}

	public Employee(String firstName, String lastName, double monthlySalary) {
		super();
		this.firstName = firstName;
		this.lastName = lastName;
		this.monthlySalary = monthlySalary;
	}

	public String getFirstName() {
		return firstName;
	}

	public void setFirstName(String firstName) {
		this.firstName = firstName;
	}

	public String getLastName() {
		return lastName;
	}

	public void setLastName(String lastName) {
		this.lastName = lastName;
	}

	public double getMonthlySalary() {
	
		return monthlySalary;
	}

	public void setMonthlySalary(double monthlySalary) {
		if(monthlySalary<0)
			this.monthlySalary = 0;
		else
			this.monthlySalary = monthlySalary;;
	}
	
	void accept()
	{
		System.out.println("Please Enter First Name of Employee");
		Scanner sc = new Scanner(System.in);
		this.firstName = sc.next();
		System.out.println("Please Enter Last Name of Employee");
		this.lastName = sc.next();
		System.out.println("Please Enter salary of Employee");
		this.monthlySalary = sc.nextDouble();
		setMonthlySalary(monthlySalary);
		
	}
	void display()
	{
		System.out.println("The Name of Employee is :"+firstName+" "+lastName);
		System.out.println("The Yealry salary of Employee is : "+ monthlySalary*12 );
	}
	
	void raiseInSalary()
	{
		this.monthlySalary = monthlySalary * 1.1 ;
		System.out.println("The Yealry salary after raise of "+firstName+" "+lastName+" is : "+ monthlySalary*12 );
	}

}
