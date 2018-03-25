# Assignment-3---Programming-Methodology-II
Assignment 3 for the class Programming Methodology II

1
COEN 244 – Winter 2018
Assignment 3
Deadline: Tuesday, March 6 Thu, March 8, by 11:55pm
Type: Group Assignment (groups of 2 students maximum)
Weight: This assignment is worth 5% of your final grade
Car Rental Management System
The aim of this project is to design and implement a computerized Car Rental Management
System for a company called COEN244Cars. The company rents two types of cars: standard
and luxury cars. A car is identified by a car identification number (int), a type (string), and a
flag that indicates whether the car is currently available or not.
The company distinguishes between three types of customers: regular customers, corporate
customers, and VIPs (Very Important Persons). A customer is identified by a customer
number (int), name (string), address (string), and a telephone number (string). A corporate
customer has the following additional attributes: The name (string) and address of the
customer’s company (string).
Furthermore, the customers have different types of privileges. A regular customer can only
rent standard cars for a maximum period of 20 days. Corporate customers and VIPs can rent
all types of cars. However, corporate customers can rent a car for a maximum period of 35
days, whereas VIPs can rent a car for a maximum period of 45 days.
Using your system, the COEN244Car company should be able to do the following tasks:

  a) Add a new car to the inventory

  b) Remove an existing car from the inventory

  c) Register new customers

  d) Remove a given customer from the customer’s list

  e) Rent a car to a customer

  f) Return a car and update car information

  g) Return the privileges of a particular customer.

  h) Change the privileges (e.g., modify the rental period for regular customers to 25).

  i) Determine whether a given car is rented or not

  j) Determine whether a given customer has rented a car

  k) Determine whether a given car is a regular customer, corporate, or VIP.

  l) Determine the types of cars rented by a customer of a given company.


Question 1 (80 marks)
  A. Implement the class or classes that represent the car information.
  B. Implement the class or classes that represent the company’s customers.
  C. Implement the class CarRentalManagement that supports the functions (a) to (l)
Notes: Provide all the necessary data members, constructors, copy constructors, destructors,
and member functions.

Questions 2 (20 marks)
The company wants also to keep track of the rental and return dates to be able, for example, to
issue warnings for customers for which the rental is overdue or to know when a car is
expected to be returned. How would you modify the above system to support this new requirement? You don’t need to implement your solution. Use figures if necessarily to
illustrate your answer.
