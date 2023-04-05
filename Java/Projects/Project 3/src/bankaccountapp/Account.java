package bankaccountapp;

public abstract class Account implements IBaseRate {
	// List common properties for checking and savings accounts
	private String name;
	private  String sSN;
	private static int index = 10000;
	protected String accountNumber;
	private double balance;
	protected double rate;

	// Constructor to set the base properties and initialize the account
	public Account(String name, String sSN, double initialDeposit){
		this.name = name;
		this.sSN = sSN;
		this.balance = initialDeposit;

		// Set account number
		this.accountNumber = setAccountNumber();
		setRate();
	}

	public abstract void setRate();

	private String setAccountNumber(){
		String lastTwoOfSSN = sSN.substring(sSN.length() - 2, sSN.length());
		int uniqueID = index;
		int randomNumber = (int)(Math.random() * Math.pow(10, 3));
		return lastTwoOfSSN + uniqueID + randomNumber;
	}

	public void compund(){
		double accruedInterest = balance * (rate/100);
		balance += accruedInterest;
		printBalance();
	}

	// List common methods
	public void deposit(double amount){
		balance += amount;
		printBalance();
	}

	public void withdraw(double amount){
		balance -= amount;
		printBalance();

	}

	public void transfer(String toWhere, double amount){
		balance -= amount;
		printBalance();
	}

	public void printBalance(){
		System.out.println(
				"Your Balance is now: $" + balance
		);
	}
	public void showInfo(){
		System.out.println(
				"NAME: " + name +
						"\nACCOUNT NUMBER: " + accountNumber +
						"\nBALANCE: " + balance +
						"\nRATE: " + rate + "%"
		);
	}
}
