
// This line creates a constant value named `initial_balance`
#define initial_balance 5000.00

// This code defines a struct called ATM_Struct, which represents an ATM account.
typedef struct ATM_Struct
{
    // This field stores the user's PIN number.
    int pin_number;

    // This field stores the user's account number.
    int account_num;

    // This field stores the user's account name.
    char account_name[100];

    // This field stores the user's account balance.
    float account_balance;

    // This field stores the number of withdrawals made from the account.
    int num_Withdrawals;

    // This field stores the number of deposits made to the account.
    int num_Deposits;

} ATM;


// Declare a pointer variable named 'selected_Account' of type 'ATM' and initialize it to NULL.
// This variable will be used to store the currently selected account for the user.
ATM *selected_Account = NULL;

ATM accounts [100];

int accounts_size = 0;


// This section defines the function input_Pin
static void input_Pin();

// This section defines the function selection_Menu
static void ATM_selection_Menu();

// This section defines the function check_Balance
static void check_Balance();

// This section defines the function make_Withdrawal
static void make_Withdrawal();

// This section defines the function make_Deposit
static void make_Deposit();

// This function displays the balance and transaction counts for a given account.
static void account_Info(ATM *account);

static void saveAccounts();

static void loadAccounts();

// This section defines the function exit_prog
static void ATM_exit_prog();

int ATM_main() {
    
    loadAccounts();
    // print welcome message
    printf("\n\t\t\t\tWelcome To MyATM\n");
    // call function to input PIN
    input_Pin();
    return 0;

}
// This function handles the input of the user's PIN number
static void input_Pin()
{
    // Print a separator line to the console
    printf("->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->\n");

    // Loop indefinitely until a valid PIN is entered
    while (1)
    {
        // Get the user's input for the PIN number and validate it
        int pin_number = get_int( 0, 9999,"Enter Pin Number : ");

        // Initialize variables for tracking whether the PIN was found and its index
        int found = 0;
        int currentAccountIndex = -1;

        // Loop through all the accounts in the system and check if the input PIN matches any
        for (int i = 0; i < sizeof(accounts)/sizeof(accounts[0]); i++)
        {
            if (accounts[i].pin_number == pin_number)
            {
                // If a match is found, record the index and update the flag
                currentAccountIndex = i;
                found = 1;
                break;
            }
        }

        // If a match was found, proceed to the account selection menu
        if (found)
        {
            // Set the selected account to the one that matched the input PIN
            selected_Account = &accounts[currentAccountIndex];

            // Print a welcome message to the console
            printf("\n\t\t\tWelcome : %s!", accounts[currentAccountIndex].account_name);
            printf("\n\t\t\tAvailable Balance, %.2f!\n", accounts[currentAccountIndex].account_balance);
            printf("->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->\n");

            // Call the selection_Menu function to display the account options
            ATM_selection_Menu(selected_Account);
        }
        else
        {
            // If the input PIN was not found, print an error message to the console
            printf("Pin number not found. Try Again.\n");
        }
    }
}

// Define the selection_Menu function
static void  ATM_selection_Menu()
{
    // Loop through the menu options until the user logs out or exits the program
    while (1)
    {
        // Define an array of menu options
        char *Menu[] =
        {
            "Check Balance",
            "Deposit",
            "Withdrawal",
            "Account Information",
            "Logout or Change Account",
            "Exit Program"
        };

        // Calculate the size of the menu array
        int size = sizeof(Menu) / sizeof(Menu[0]);

        // Loop through the menu options and print them out with their corresponding number
        for (int i = 0; i < size; i++)
            printf("[%d] %s\n", i + 1, Menu[i]);

        // Get the user's selection from the menu
        int usersel = get_int(1,6,"Select from the menu above: ");

        // Process the user's selection
        switch (usersel)
        {
            // If the user selects "Check Balance", show the balance
            case 1:
                printf("->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->");
                printf("\n\t\t\tYou Have Chosen To Check Your Balance\n");
                check_Balance();
                break;

            // If the user selects "Deposit", prompt for the deposit amount and add it to the balance
            case 2:
                printf("->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->");
                printf("\n\t\t\tYou Have Chosen To Make a Deposit\n");
                make_Deposit();
                saveAccounts();
                break;

           // If the user selects "Withdrawal", prompt for the withdrawal amount and subtract it from the balance
           case 3:
                printf("->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->");
                printf("\n\t\t\tYou Have Chosen To Make a Withdrawal\n");
                make_Withdrawal();
                saveAccounts();
                break;

            
            case 4:
                printf("->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->");
                printf("\n\t\t\tYou Have Chosen to Display Account Information\n");
                account_Info(selected_Account);
                break;

            // If the user selects "Logout or Change Account", prompt for the PIN and return to the login screen
            case 5:
                printf("->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->");
                system("cls");
                printf("\n\t\t\tYou Have Chosen to Logout or Change Account\n");
                input_Pin();
                break;

            // If the user selects "Exit Program", exit the program
            case 6:
                printf("->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->");
                printf("\n\t\t\tYou Have Chosen to Exit the Program.......\n");
                ATM_exit_prog();
                break;

            // If the user selects an invalid option, notify them and prompt for another selection
            default:
                printf("\nInvalid Selection. Try Again.\n");
                break;
        }

    }
}

// This function checks the balance of the selected account and prints it to the console in a formatted way.
static void check_Balance()
{

    // This line prints the current balance of the selected account to the console.
    printf("\t\t\tCurrent Balance: %.2f\n\n", selected_Account->account_balance);

    // This line prints a line of arrows to the console for formatting purposes.
    printf("->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->\n");
}

// This function allows the user to withdraw money from the selected account.
static void make_Withdrawal()
{
    // This line prompts the user to enter the amount they want to withdraw and verifies that the input is valid.
    float amount = get_float(-100000,100000,"Enter Withdrawal Amount: ");

    // If the amount entered is less than or equal to zero, print an error message to the console.
    if (amount <= 0)
    {
         printf("Withdrawal amount should be greater than zero.\n\n");
         printf("->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->\n");
    }
    // If the amount entered is greater than the maximum withdrawal amount, print an error message to the console.
    else if (amount > 4000.00)
    {
        printf("Maximum withdrawal amount is 4000.00.\n\n");
        printf("->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->\n");
    }
    // If the amount entered is valid, subtract it from the account balance and print a success message to the console.
    else
    {
        // This line increments the number of withdrawals for the selected account.
        selected_Account->num_Withdrawals++;

        selected_Account->account_balance -= amount;
        printf("Withdrawal successful.\n");
        printf("Current Balance: %.2f\n", selected_Account->account_balance);
        printf("->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->\n");
    }
}

// This function handles depositing money into the currently selected account.
static void make_Deposit()
{

    // Get the amount of money to deposit from the user, ensuring it is a valid float within a given range.
    float amount = get_float(-100000, 100000,"Enter Deposit Amount: ");

    // If the amount to deposit is greater than zero:
    if (amount > 0)
    {
        // This line increments the number of deposits for the selected account.
        selected_Account->num_Deposits++;
        
        // Add the deposited amount to the currently selected account's balance.
        selected_Account->account_balance += amount;

        // Print a success message and display the account's current balance.
        printf("Deposit successful.\n");
        printf("Current Balance: %.2f\n\n", selected_Account->account_balance);

        // Print a separator line to visually separate the output from other text.
        printf("->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->\n");
    }
    // If the amount to deposit is less than or equal to zero:
    else
    {
        // Print an error message indicating that the deposit amount should be greater than zero.
        printf("Deposit amount should be greater than zero.\n\n");

        // Print a separator line to visually separate the output from other text.
        printf("->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->\n");
    }
}

// Define a function named account_Info that takes in a pointer named account of type ATM
static void account_Info(ATM *account)
{

    // This line displays the account name and number.
    printf("Account Name: %s\n", account->account_name); // Prints the account name
    printf("Account Number: %d\n", account->account_num); // Prints the account number

    // This line displays the current balance of the account.
    printf("Current Balance: %.2f\n", account->account_balance); // Prints the account balance with two decimal places

    // This line displays the number of withdrawals and deposits made to the account.
    printf("Number of Withdrawals: %d\n", account->num_Withdrawals); // Prints the number of withdrawals made
    printf("Number of Deposits: %d\n", account->num_Deposits); // Prints the number of deposits made
    printf("->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->\n"); // Prints a separator

}
static void saveAccounts() { //saves the account by writing to the accounts.dat file
    FILE* file = fopen("accounts.dat", "wb");
    if (file == NULL) {
        printf("Error: Unable to save accounts.\n");
		return;
    }
    fwrite(accounts, sizeof(ATM ), accounts_size, file);
    fclose(file);
}

static void loadAccounts() { //loads the account by reading the accounts.dat file
    FILE* file = fopen("accounts.dat", "rb");
    if (file == NULL) {
        printf("Error: Unable to load accounts.\n");
        return;
    }
    accounts_size = fread(accounts, sizeof(ATM), 100, file);
    fclose(file); 
}

// This function is called when the program is about to exit.
static void ATM_exit_prog() 
{
    
    // The next few lines print out a message thanking the user for using the program and giving credit to the developers.
    printf("->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->\n\n");
    printf("\t\t\tThank you!\n");
    printf("\t\t\tMade by John Daniel Binegas\n");
    printf("\t\t\tAnd Lance Embile\n");
    printf("\t\t\tvaldez.h ft: Marc Valdez\n");
    printf("\t\t\tGIVEEEEE VIRTUALLLL CLAPPPPPPP!!!!!!\n");
    printf("\n->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->");
    exit(0);
}


