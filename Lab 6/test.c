#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to represent a bank account
struct BankAccount {
    char accountNumber[20];
    char accountHolderName[50];
    double balance;
};

// Function to create a new bank account
struct BankAccount createAccount() {
    struct BankAccount newAccount;

    printf("Enter Account Number: ");
    scanf("%s", newAccount.accountNumber);

    printf("Enter Account Holder Name: ");
    scanf("%s", newAccount.accountHolderName);

    newAccount.balance = 0.0;

    printf("Account Created Successfully!\n");

    return newAccount;
}

// Function to display account details
void displayAccount(struct BankAccount account) {
    printf("\nAccount Number: %s\n", account.accountNumber);
    printf("Account Holder Name: %s\n", account.accountHolderName);
    printf("Balance: $%.2f\n", account.balance);
}

// Function to deposit money into an account
void deposit(struct BankAccount *account) {
    double amount;
    printf("Enter the amount to deposit: $");
    scanf("%lf", &amount);

    if (amount > 0) {
        account->balance += amount;
        printf("Deposit successful! New balance: $%.2f\n", account->balance);
    } else {
        printf("Invalid amount for deposit.\n");
    }
}

// Function to withdraw money from an account
void withdraw(struct BankAccount *account) {
    double amount;
    printf("Enter the amount to withdraw: $");
    scanf("%lf", &amount);

    if (amount > 0 && amount <= account->balance) {
        account->balance -= amount;
        printf("Withdrawal successful! New balance: $%.2f\n", account->balance);
    } else {
        printf("Invalid amount for withdrawal or insufficient funds.\n");
    }
}

int main() {
    struct BankAccount currentAccount; // Current user's account

    int choice;
    char password[20];

    printf("Welcome to the Bank Management System!\n");

    // Simulating user authentication (for simplicity, not secure)
    printf("Enter your account password: ");
    scanf("%s", password);

    // Check if the password is correct (for simplicity, using a hardcoded password)
    if (strcmp(password, "password123") != 0) {
        printf("Incorrect password. Exiting...\n");
        return 0;
    }

    // Creating a new account or loading an existing one
    printf("Do you have an existing account? (1 for Yes, 0 for No): ");
    scanf("%d", &choice);

    if (choice == 0) {
        // Creating a new account
        currentAccount = createAccount();
    } else {
        // Loading an existing account (for simplicity, using a hardcoded account)
        strcpy(currentAccount.accountNumber, "123456789");
        strcpy(currentAccount.accountHolderName, "John Doe");
        currentAccount.balance = 1000.0;
    }

    // Main menu
    do {
        printf("\nMain Menu\n");
        printf("1. Display Account Details\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayAccount(currentAccount);
                break;
            case 2:
                deposit(&currentAccount);
                break;
            case 3:
                withdraw(&currentAccount);
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 0);

    return 0;
}
