package com.invoicestorage;

public class InvoiceTest {

	public static void main(String[] args) {
		Invoice In = new Invoice();
		In.accept();
		In.getPartName();
		In.getPartDescription();
		In.getQuantity();
		In.getPricePerItem();
		In.display();

	}

}
