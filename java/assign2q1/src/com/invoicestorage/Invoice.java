package com.invoicestorage;

import java.util.Scanner;

public class Invoice {

	String partName;
	String partDescription;
	int quantity;
	double pricePerItem;
	
	
	public Invoice() {
		
	}

	public Invoice(String partName, String partDescription, int quantity, double pricePerItem) {
		
		this.partName = partName;
		this.partDescription = partDescription;
		this.quantity = quantity;
		this.pricePerItem = pricePerItem;
	}

	public String getPartName() {
		return partName;
	}

	public void setPartName(String partName) {
		this.partName = partName;
	}

	public String getPartDescription() {
		return partDescription;
	}

	public void setPartDescription(String partDescription) {
		this.partDescription = partDescription;
	}

	public int getQuantity() {
		return quantity;
	}

	public void setQuantity(int quantity) {
		if(quantity < 0)
		{
			this.quantity = 0;
		}
		else
		{
			this.quantity = quantity;
		}
	}

	public double getPricePerItem() {
		return pricePerItem;
	}

	public void setPricePerItem(double pricePerItem) {
		if(pricePerItem < 0)
		{
			this.pricePerItem = 0.0;
		}
		else
		this.pricePerItem = pricePerItem;
		
		
	}
	
	void accept()
	{
		Scanner sc= new Scanner(System.in);
		System.out.println("Please enter the part Name");
		this.partName= sc.nextLine();
		System.out.println("Please enter the part Description");
		this.partDescription= sc.nextLine();
		System.out.println("Please enter Quantity");
		this.quantity= sc.nextInt();
		setQuantity(quantity);
		System.out.println("Please enter the Price per item");
		this.pricePerItem= sc.nextDouble();
		setPricePerItem(pricePerItem);
	}
	
	void display()
	{
		System.out.println("The Total Invoice for your purchase is " + quantity * pricePerItem);
	}
	
}
