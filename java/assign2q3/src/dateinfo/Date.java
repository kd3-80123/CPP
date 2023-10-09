package dateinfo;

import java.util.Scanner;

public class Date {
	
	int day;
	int month;
	int year;
	
	public Date() {
		
	}

	public Date(int day, int month, int year) {
		
		this.day = day;
		this.month = month;
		this.year = year;
	}

	public int getDay() {
		return day;
	}

	public void setDay(int day) {
		this.day = day;
	}

	public int getMonth() {
		return month;
	}

	public void setMonth(int month) {
		this.month = month;
	}

	public int getYear() {
		return year;
	}

	public void setYear(int year) {
		this.year = year;
	}
	void accept()
	{	Scanner sc = new Scanner(System.in);
		System.out.println("Please enter the Day");
		this.day = sc.nextInt();
		System.out.println("Please enter the Month");
		this.month = sc.nextInt();
		System.out.println("Please enter the Year");
		this.year = sc.nextInt();
	}
	void Display()
	{
		System.out.println("The Date is :"+day+"/"+ month);
	}
	
}
