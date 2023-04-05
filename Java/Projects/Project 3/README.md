# Project 3: Bank Application

Scenario: You are a back-end developer and need to create an application to handle new customer bank account requests.

Your application should do the following:
* Read a .csv file of names, social security numbers, account type, and initial deposit
* Use a proper data structure to hold all these accounts
* Both savings and checking accounts share the following properties:
    * deposit()
    * withdraw()
    * transfer()
    * showInfo() 
    * 11-Digit Account Number (generated with following process: 1 or 2 depending on Savings or Checking, last two digits of SSN, unique 5-digit number,    and random 3-digit number)
* Savings Account holders are given a Safety Deposit Box, identified by a 3-digit number and accessed with a 4-digit code
* Checking Account holders are assigned a Debit Card with a 12-digit number and 4-digit PIN
* Both accounts will use an interface the base interest rate.
Savings accounts will use .25 points less than the best rate
