package emailapp;

import java.util.Scanner;

public class Email {
	private String firstName;
	private String lastName;
	private String email;
	private int defaultPasswordLength = 10;
	private String password;
	private String department;
	private int mailboxCapacity = 500;
	private String alternateEmail;
	private String companySuffix = "concordia.com";

	// Constructor to receive the first name and last name
	public Email(String firstName, String lastName){
		this.firstName = firstName;
		this.lastName = lastName;

		// Call a method asking for the department - return the department
		this.department = setDepartment();

		// Call a method that returns a random password
		this.password = randomPassword(defaultPasswordLength);

		// Combine elements to generate email
		this.email = firstName.toLowerCase() + "." + lastName.toLowerCase() + "@" + department + "." + companySuffix;
	}

	// Ask for the department
	private String setDepartment(){
		System.out.println("New worker: " + firstName + "\nDepartment Codes:\n1 for Engineering\n2 for Data\n3 for Research\n0 for none\nEnter department code: ");

		Scanner in = new Scanner(System.in);
		int deptChoice = in.nextInt();

		if(deptChoice == 1){
			return "eng";
		} else if(deptChoice == 2){
			return "dev";
		} else if(deptChoice == 3){
			return "research";
		} else{
			return "";
		}
	}

	// Generate a random password
	private String randomPassword(int length){
		String passwordSet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%";
		char[] password = new char[length];

		for(int i = 0; i < length; i++){
			// java.lang.Math.random() method returns a pseudorandom double type number greater than or equal to 0.0 and less than 1.0.
			int rand = (int)(Math.random() * passwordSet.length());
			password[i] = passwordSet.charAt(rand);
		}

		return new String(password);
	}

	// Set the mailbox capacity
	public void setMailboxCapacity(int capacity){
		this.mailboxCapacity = capacity;
	}


	// Set the alternate email
	public void setAlternateEmail(String alternateEmail){
		this.alternateEmail = alternateEmail;
	}


	// Change the password
	public void changePassword(String password){
		this.password = password;
	}

	public int getMailboxCapacity(){
		return mailboxCapacity;
	}


	public String getAlternateEmail(){
		return alternateEmail;
	}


	public String getPassword(){
		return password;
	}


	public String showInfo(){
		return "DISPLAY NAME: " + firstName + " " + lastName +
				"\nCOMPANY EMAIL: " + email +
				"\nMAILBOX CAPACITY: " + mailboxCapacity + "mb" +
				"\nPASSWORD: " + password;
	}
}
