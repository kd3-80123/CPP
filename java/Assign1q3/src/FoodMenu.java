import java.util.Scanner;

public class FoodMenu {
	
	 static int menu() 
	{
		System.out.println(" 0. Exit");
		System.out.println(" 1. Dosa");
		System.out.println(" 2. Samosa");
		System.out.println(" 3. Idli");
		System.out.println(" 4. Soda");
		System.out.println(" 5. Coffee");
		System.out.println(" 6. Uttapa");
		System.out.println(" 7. Chai");
		System.out.println(" 8. Thali");
		System.out.println(" 9. Vadapav");
		System.out.println("10. Generate Bill");
		System.out.println("Please enter the choice");
		Scanner sc= new Scanner (System.in);
		int choice = sc.nextInt();
		return choice;
		
	}

	public static void main(String[] args) {
		int x;
		double TotalBill=0;
			while((x = menu())!=0)
			{	
				switch(x)
				{
					case 1:
						TotalBill= TotalBill + 60;
				
					break;
					case 2:
						TotalBill= TotalBill + 15;
						break;
					case 3:
						TotalBill= TotalBill + 30;
						break;
					case 4:
						TotalBill= TotalBill + 20;
						break;
					case 5:
						TotalBill= TotalBill + 15;
						break;
					case 6:
						TotalBill= TotalBill + 50;
						break;
					case 7:
						TotalBill= TotalBill + 10;
						break;
					case 8:
						TotalBill= TotalBill + 110;
						break;
					case 9:
						TotalBill= TotalBill + 15;
						break;
					case 10:
						System.out.println("Total Bill is ="+ TotalBill);
						break;
					default:
						System.out.println("Wrong Choice");
				}
				if(x==10)
					break;
				
			}
			System.out.println("Please Visit Again......");
		 
	}

}
