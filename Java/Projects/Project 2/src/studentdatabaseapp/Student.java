package studentdatabaseapp;

import java.util.Scanner;

public class Student {
	private String firstName;
	private String lastName;
	private int classLevel;
	private String studentID;
	private String courses = null;
	private int tuitionBalance = 0;
	private static int costOfCourse = 600;
	private static int id = 1000;

	// Constructor: prompt user to enter student's name and year
	public Student(){
		Scanner in = new Scanner(System.in);
		System.out.println("Enter student first name: ");
		this.firstName = in.nextLine();

		System.out.println("Enter student last name: ");
		this.lastName = in.nextLine();

		System.out.println("1 - Freshmen\n2 - Sophomore\n3 - Junior\n4 - Senior\nEnter student class level: ");
		this.classLevel = in.nextInt();

		setStudentID();
	}

	// Generate an ID
	private void setStudentID(){
		// Class level + ID
		studentID = this.classLevel + "" + (++id);
	}

	// Enroll in courses
	public void enroll(){
		do{
			System.out.println("Enter course to enroll (Q to quit): ");

			Scanner in = new Scanner(System.in);
			String course = in.nextLine();

			if(!course.equals("Q")){
				courses = courses + "\n " + course;
				tuitionBalance = tuitionBalance + costOfCourse;
			} else{
				break;
			}
		}while(true);
	}

	// View balance
	public void viewBalance(){
		System.out.println("Your balance is: $" + tuitionBalance);
	}

	// Pay tuition
	public void payTuition(){
		viewBalance();
		System.out.println("Enter your payment: $");
		Scanner in = new Scanner(System.in);
		int payment = in.nextInt();

		tuitionBalance -= payment;
		System.out.println("Thank you for your payment of $" + payment);
		viewBalance();
	}

	// Show status
	public String toString(){
		return "Name: " + firstName + " "  + lastName +
				"\nClass Level: " + classLevel +
				"\nStudent ID: " + studentID +
				"\nCourses Enrolled: " + courses +
				"\nBalance: $" + tuitionBalance;

	}
}
