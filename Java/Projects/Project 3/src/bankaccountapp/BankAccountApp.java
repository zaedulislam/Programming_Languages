package bankaccountapp;

import java.io.FileNotFoundException;
import java.util.LinkedList;
import java.util.List;

public class BankAccountApp {
	public static void main(String[] args) throws FileNotFoundException {
		List<Account> accounts = new LinkedList<Account>();

		// Read a CSV file then create new accounts based on that data
		String file = "src/NewBankAccounts.csv";
		List<String[]> newAccountHolders = utilities.CSV.read(file);

		for(String[] accountHolder: newAccountHolders){
			String name = accountHolder[0];
			String sSn = accountHolder[1];
			String accountType = accountHolder[2];
			double initialDeposit = Double.parseDouble(accountHolder[3]);

			if(accountType.equals("Savings")){
				accounts.add(new Savings(name, sSn, initialDeposit));
			} else if(accountType.equals("Checking")){
				accounts.add(new Checking(name, sSn, initialDeposit));
			} else{
				System.out.println("ERROR READING ACCOUNT TYPE");
			}
		}


		for(Account acc: accounts){
			System.out.println("\n********************************");
			acc.showInfo();
		}

	}
}
