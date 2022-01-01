
#include <iostream>
using namespace std;
int main()
{
        //Declares the following variables to hold values given by the user or values computed by the program
        int flightTime;  //military time
        double ticketPrice;
        char destination; //C=Chicago, P=Portland, M=Miami
        char typeOfDay; //D=weekDay E=weekEnd better name? weekEndOrWeekDayLetter
        bool isWeekend;
        bool isDayFlight;
        int numTickets;
        double totalCost;
        double userPayment;
        double change;

        //Prompts the user to enter their destination and flight time
        cout << "Welcome to Fordham Airlines!" << endl << "What is your destination? ([C]hicago, [M]iami, [P]ortland) ";
        cin >> destination;
        cout <<  "What time will you travel? (Enter time between 0-2359) ";
        cin >> flightTime;

        //isDayFlight is true if the time is between 5am and 7pm, and false if otherwise
        if ((flightTime >= 500) && (flightTime <= 1900))
                isDayFlight = true;
        else
                isDayFlight = false;

        //Prompts the user to enter the type of day they are traveling, E for weekends and D for weekdays
        cout <<  "What type of day are you traveling? (week[E]nd or week[D]ay) ";
        cin >> typeOfDay;

        //isWeekend is true if the user travels on weekends, and false if otherwise.
        if (typeOfDay == 'E')
                isWeekend=true;
        else
                isWeekend=false;
        switch(destination)
        {
                case 'M'://The program computes prices for trip to Miami if destination = 'M'
                        if (isDayFlight && isWeekend)
                                ticketPrice = 180;
                        else if (isDayFlight && (isWeekend=false))
                                ticketPrice = 150;
                        else if ((isDayFlight=false)&& isWeekend)
                                ticketPrice = 120;
                        else 
                                ticketPrice = 100;
                        break;
                case 'C'://The program computes prices for trip to Chicago if destination = 'C'
                        if (isDayFlight && isWeekend)
                                ticketPrice = 90;
                        else if (isDayFlight && (isWeekend=false))
                                ticketPrice = 75;
                        else if ((isDayFlight=false)&& isWeekend)
                                ticketPrice = 60;
                        else 
                                ticketPrice = 50;
                        break;
                case 'P'://The program computes prices for trip to Portland if destination = 'P'
                        if (isDayFlight && isWeekend)
                                ticketPrice = 360;
                        else if (isDayFlight && (isWeekend=false))
                                ticketPrice = 300;
                        else if ((isDayFlight=false)&& isWeekend)
                                ticketPrice = 240;
                        else 
                                ticketPrice = 200;
                        break;
        }

        //Sets precision to two decimal points
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);

        //Outputs the ticket price
        cout << "Each ticket will cost: $" << ticketPrice << endl;

        //Prompts user to enter the number of tickets they want
        cout << "How many tickets do you want? ";
        cin >> numTickets;
        totalCost = numTickets * ticketPrice;
        cout << "You owe: $" << totalCost << endl;

        //Prompts the user to enter the amount they will pay.
        cout << "Amount paid? ";
        cin >> userPayment;
        if (userPayment < totalCost)
        /*
                Returns error message if the amount paid is too small, and change and purchase 
                confirmation if the amount paid is sufficient
        */
        {
                cout << "That is too little! No tickets ordered.";
        }
        else
        {
                change = userPayment - totalCost;
                cout << "You will get in change: $" << change << endl << "Your tickets have been ordered!" << endl; 
        }
        return 0;
}