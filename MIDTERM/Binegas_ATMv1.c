#include <stdio.h>
#include <stdlib.h>
#include "valdez.h"

float balance = 5000.00;

void menu();
void Bal_CHK();
void withdraw();
void deposit();
void exit_prog();

void main()
{
    printf("\nWelcome To MyATM:\n");
    menu();
}
void Bal_CHK()
{
    printf("Current balance: %.2f\n\n", balance);
}
void deposit()
{
    float amount = get_float("Enter Deposit Amount: ","-1234567890.\n",-100000,100000);
    if (amount > 0)
    {
        balance += amount;
        printf("Deposit successful.\n");
        printf("Current balance: %.2f\n\n", balance);
    }
    else
        printf("Deposit amount should be greater than zero.\n\n");
}
void withdraw()
{
    float amount = get_float("Enter Withdrawal Amount: ","-1234567890.\n",-100000,100000);
    if (amount <= 0)
        printf("Withdrawal amount should be greater than zero.\n\n");
    else if (amount > balance)
        printf("Withdrawal amount exceeds the available balance.\n\n");
    else if (amount > 4000.00)
        printf("Maximum withdrawal amount is 4000.00.\n\n");
    else
    {
        balance -= amount;
        printf("Withdrawal successful.\n\n");
        printf("Current balance: %.2f\n\n", balance);
    }
}

void menu()
{
    while (1)
    {
        char *Menu[] =
        {
            "Check Balance",
            "Deposit",
            "Withdrawal",
            "Exit Program"
        };
        int size = sizeof(Menu) / sizeof(Menu[0]);
        for (int i = 0; i < size; i++)
            printf("[%d] %s\n", i + 1, Menu[i]);
        
        
        int usersel = get_int("Select from the menu above: ","1234\n",1,4);
        switch (usersel)
        {
         case 1:
                printf("\nYou Have Chosen To Check Your Balance\n");
                Bal_CHK();
                break;

            case 2:
                printf("\nYou Have Chosen To Make a Deposit\n");
                deposit();
                break;

            case 3:
                printf("\nYou Have Chosen To Make a Withdrawal\n");
                withdraw();
                break;

            case 4:
                printf("\nYou Have Chosen to Exit the Program.......\n");
                exit_prog();
                break;

            default:
                printf("\nInvalid Selection. Try Again.\n");
                break;
        }
        
    }
}

void exit_prog()
{
    printf("Thank you!\n");
    printf("Made by John Daniel Binegas\n");
    printf("valdez.h ft: Marc Valdez\n");
    printf("GIVEEEEE VIRTUALLLL CLAPPPPPPP!!!!!!\n\n");

    exit(0);
}
