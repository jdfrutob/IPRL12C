#include <stdio.h>
#include <stdlib.h>
#include "valdez.h"

//v2

#define initial_balance 5000.00

typedef struct ATM_Struct
{
    int pin_number;
    int account_num;
    char *account_name;
    float account_balance;
} ATM;

ATM accounts[] = {
    {1225,0001,"Binegas,John Daniel",initial_balance},
    {2512,0002,"Dineros, Trisha Anne",initial_balance},
    {0123,0003,"Bautista, Glen Angelo",initial_balance},
    {5555,0004,"Alastoy, John Nelson",initial_balance},
    {0000,0005,"Embile, Lance Raphael",initial_balance},
    {1234,0006,"Valdez, Marc Joshua",initial_balance}
};  

float balance;

void pin();
void menu();
void Bal_CHK();
void withdraw();
void deposit();
void exit_prog();

int main()
{
    printf("\033[0;35m ");
    printf("\n\t\t\t\tWelcome To MyATM\n");
    pin();
}
void Bal_CHK()
{
    printf("\033[0;35m ");
    printf("\t\t\tCurrent Balance: %.2f\n\n", balance);
    printf("->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->\n");
}

void deposit()
{
    printf("\033[0;33m");
    float amount = get_float("Enter Deposit Amount: ","-1234567890.\n",-100000,100000);
    if (amount > 0)
    {
        balance += amount;
        printf("Deposit successful.\n");
        printf("Current Balance: %.2f\n\n", balance);
        printf("->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->\n");
    }
    else
    {
        printf("Deposit amount should be greater than zero.\n\n");
        printf("->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->\n");
    }
}

void withdraw()
{
    float amount = get_float("Enter Withdrawal Amount: ","-1234567890.\n",-100000,100000);
    if (amount <= 0)
    {
         printf("Withdrawal amount should be greater than zero.\n\n");
         printf("->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->\n");
    }
    else if (amount > 4000.00)
    {
        printf("Maximum withdrawal amount is 4000.00.\n\n");
        printf("->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->\n");
    }
        
    else
    {
        balance -= amount;
        printf("Withdrawal successful.\n");
        printf("Current Balance: %.2f\n", balance);
        printf("->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->\n");
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
            "Logout or Change Account",
            "Exit Program"
        };
        int size = sizeof(Menu) / sizeof(Menu[0]);
        for (int i = 0; i < size; i++)
            printf("[%d] %s\n", i + 1, Menu[i]);

        int usersel = get_int("Select from the menu above: ","12345\n",1,5);
        switch (usersel)
        {
            case 1:
                printf("->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->");
                printf("\033[0;35m ");
                printf("\n\t\t\tYou Have Chosen To Check Your Balance\n");
                Bal_CHK();
                break;

            case 2:
                printf("->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->");
                printf("\033[0;33m");
                printf("\n\t\t\tYou Have Chosen To Make a Deposit\n");
                deposit();
                break;

           case 3:
                printf("->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->");
                printf("\033[0;35m ");
                printf("\n\t\t\tYou Have Chosen To Make a Withdrawal\n");
                withdraw();
                break;

            case 4:
                printf("->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->");
                printf("\033[0;33m");
                printf("\n\t\t\tYou Have Chosen to Logout or Change Account\n");
                system("cls");
                pin();
                break;

            case 5:
                printf("->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->");
                printf("\033[0;33m");
                printf("\n\t\t\tYou Have Chosen to Exit the Program.......\n");
                exit_prog();
                break;

            default:
                printf("\nInvalid Selection. Try Again.\n");
                break;
        }
        
    }
}
void pin()
{
    printf("->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->\n");
    while (1)
    {
        int pin_number = get_pin("Enter Pin Number : ", "1234567890\n", 0000, 9999);
        int found = 0;
        int currentAccountIndex = -1;
        for (int i = 0; i < sizeof(accounts)/sizeof(accounts[0]); i++)
        {
            if (accounts[i].pin_number == pin_number)
            {
                currentAccountIndex = i;
                found = 1;
                break;
            }
        }
        if (found)
        {
            balance = accounts[currentAccountIndex].account_balance;
            printf("\033[0;33m");
            printf("\n\t\t\tWelcome, %s!\n", accounts[currentAccountIndex].account_name);
            printf("->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->\n");
            menu();
        }
        else
            printf("Pin number not found. Try Again.\n");
    }
}
    

void exit_prog()
{
    printf("\033[0;33m");
    printf("->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->\n\n");
    printf("\t\t\tThank you!\n");
    printf("\t\t\tMade by John Daniel Binegas\n");
    printf("\t\t\tAnd Lance Embile\n");
    printf("\t\t\tvaldez.h ft: Marc Valdez\n");
    printf("\t\t\tGIVEEEEE VIRTUALLLL CLAPPPPPPP!!!!!!\n");
    printf("\n->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->");
    exit(0);
}

