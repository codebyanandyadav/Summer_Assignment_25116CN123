//Ticket Booking System

#include <stdio.h>

#define TOTAL_SEATS 50

struct Ticket
{
    int ticketNo;
    char passenger[50];
    int seatNo;
    int booked;
};

int main()
{
    struct Ticket t[TOTAL_SEATS];
    int choice, i;
    int ticketCount = 1001;
    int seat, found;

    for(i = 0; i < TOTAL_SEATS; i++)
    {
        t[i].booked = 0;
        t[i].seatNo = i + 1;
    }

    while(1)
    {
        printf("\n========== TICKET BOOKING SYSTEM ==========\n");
        printf("1. Book Ticket\n");
        printf("2. Cancel Ticket\n");
        printf("3. View Booked Tickets\n");
        printf("4. Check Available Seats\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Seat Number (1-%d): ", TOTAL_SEATS);
                scanf("%d", &seat);

                if(seat < 1 || seat > TOTAL_SEATS)
                {
                    printf("Invalid seat number.\n");
                    break;
                }

                if(t[seat-1].booked)
                {
                    printf("Seat already booked.\n");
                }
                else
                {
                    printf("Enter Passenger Name: ");
                    scanf(" %[^\n]", t[seat-1].passenger);

                    t[seat-1].ticketNo = ticketCount++;
                    t[seat-1].booked = 1;

                    printf("\nTicket Booked Successfully!\n");
                    printf("Ticket No : %d\n", t[seat-1].ticketNo);
                    printf("Seat No   : %d\n", t[seat-1].seatNo);
                }
                break;

            case 2:
                printf("Enter Seat Number to Cancel: ");
                scanf("%d", &seat);

                if(seat < 1 || seat > TOTAL_SEATS)
                {
                    printf("Invalid seat number.\n");
                }
                else if(t[seat-1].booked)
                {
                    t[seat-1].booked = 0;
                    printf("Ticket cancelled successfully.\n");
                }
                else
                {
                    printf("Seat is not booked.\n");
                }
                break;

            case 3:
                found = 0;
                printf("\n------ Booked Tickets ------\n");

                for(i = 0; i < TOTAL_SEATS; i++)
                {
                    if(t[i].booked)
                    {
                        found = 1;
                        printf("Ticket No: %d\n", t[i].ticketNo);
                        printf("Passenger: %s\n", t[i].passenger);
                        printf("Seat No  : %d\n", t[i].seatNo);
                        printf("---------------------------\n");
                    }
                }

                if(!found)
                    printf("No tickets booked.\n");

                break;

            case 4:
                printf("\nAvailable Seats: ");
                found = 0;

                for(i = 0; i < TOTAL_SEATS; i++)
                {
                    if(!t[i].booked)
                    {
                        printf("%d ", t[i].seatNo);
                        found = 1;
                    }
                }

                if(!found)
                    printf("No seats available.");

                printf("\n");
                break;

            case 5:
                printf("Thank you for using the Ticket Booking System.\n");
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}