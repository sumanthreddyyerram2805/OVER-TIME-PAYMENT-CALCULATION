# OVER-TIME-PAYMENT-CALCULATION
A simple C program that calculates employee overtime pay based on weekly working hours. It processes multiple employees, calculates overtime for hours worked beyond 40 at a rate of ₹120 per hour, and demonstrates the use of loops, conditional statements, variables, and user input/output in C.
# Employee Overtime Payment Calculator

A simple C program that calculates overtime payment for employees based on their weekly working hours. Employees who work more than **40 hours** receive overtime pay at a rate of **₹120 per extra hour**.

## Features

* Accepts employee name and working hours
* Calculates overtime payment automatically
* Processes multiple employees using a loop
* Simple console-based application
* Beginner-friendly C project

## Technologies Used

* C Programming
* Standard Input/Output Library (`stdio.h`)

## Overtime Calculation

* **Working Hours ≤ 40:** No overtime payment
* **Working Hours > 40:** `(Working Hours - 40) × ₹120`

## Example

Employee Name: John
Working Hours: 45
Overtime Payment: ₹600

## Concepts Used

* Variables
* Loops (`for`)
* Conditional Statements (`if-else`)
* User Input/Output
* Basic Arithmetic Operations

## How to Run

1. Compile the program:

   ```
   gcc overtime.c -o overtime
   ```
2. Run the executable:

   ```
   ./overtime
   ```
