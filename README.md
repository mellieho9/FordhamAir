# FordhamAir
A program for Fordham Airline that allows the customer to purchase flights

## Background
This is my response to an assignment in my CS I Lab class. The assignment asks to write a program for Fordham Airlines to allow the customer to purchase flights, calculating how much the customer owes, taking payment, and calculating change. 

The airline sells tickets for:
- Travel during daytime (departing 5am-7pm, inclusive) and nighttime (departing after 7pm up and before 5am)
- Three destinations: Chicago, Miami, and Portland
- Two types of days: weekday and weekend
- Cost per ticket for each type of travel:
|               | WeekdayDay    | WeekdayNight  | WeekendDay    | WeekendNight  |
| ------------- | ------------- | ------------- | ------------- | ------------- |
| Miami         | 150           | 100           | 180           | 120           |
| Chicago       | 75            | 50            | 90            | 60            |
| Portland      | 300           | 200           | 360           | 240           |

My program is to work as follows:
1. Display a welcome message (e.g., “Welcome to Fordham Airlines!”) 
2. Prompt the user to input his/her destination: Chicago, Miami, or Portland (I recommend you use letters to represent each input) 
3. Prompt the user to input what time s/he wishes to travel (in army time, e.g., 800 for 8am or 1530 for 3:30pm) 
4. Prompt the user to input what type of day (s) s/he is traveling: Weekday or Weekend (I recommend you use letters to represent each input) 
5. Report the price per ticket of the specified type 
6. Prompt the user for the number of tickets to be purchased 
If the number of tickets is fewer than 0, report that the number of tickets ordered is invalid and the order has been cancelled, then exit; otherwise: 
7. Compute and display the total amount due (no sales tax this time!) 
8. Prompt the user to enter the amount s/he is paying 
If the amount paid is less than the amount due, report that the amount paid is too little and the order has been cancelled, then exit; otherwise: 
9. Display change and confirm the order has been placed 

## My Approach
1. I declared the following variables to hold values given by the user or values computed by the program:
  | Variable type | int           | double        | char          | bool          |
  | ------------- | ------------- | ------------- | ------------- | ------------- |
  |               | flightTime    | ticketPrice   | destination   | isWeekend     |
  |               | numTickets    | totalCost     | typeOfDay     | isDayFlight   |
  |               |               | userPayment   |               |               |
  |               |               | change        |               |               |
2. I used the <code>cout</code> function to prompt the user to enter their destination and flight time.
3. I used an if-else statement to evaluate whether the time the user entered is daytime or nighttime. If the time is between 5h00 and 19h00 then it is daytime or <code>isDayFlight = true</code>. Otherwise, it is nighttime or <code>isDayFlight = false</code>.
4. I then prompted the user to enter the type of day they are traveling, E for weekends and D for weekdays. I then ran an if-else statement to evaluate whether their input is E. If it is then the user is traveling on weekends or <code>isWeekend=true</code>. Otherwise, the user is traveling on weekdays or <code>isWeekend=false</code>.
5. I then used a switch statement to separate the different cases based on the destination. That way, I could better organize the ticket prices which resulted from satisfying the if-else statements.
6. I set precision to two decimal points and used the <code>cout</code> function to output the computed ticket price.
7. I used the same function to prompt the user to enter the number of tickets they want and computed the total cost, which is the product of the said number times the ticket price. 
8. I outputted the total and prompted the user to enter the amount paid. I ran the if-else statement to evaluate whether that amount is sufficient. If not, the program will display an error message. Otherwise, the program will calculate and print out the change, as well as, confirmed the tickets are purchased.
9. 
