#include <stdio.h>
int main()
{
    printf("=====================\n");
    printf("ATM Machine Immitator\n");
    printf("=====================\n\n");

    int password = 1234, pstemp;
    printf("Enter your ATM password: ");
    scanf("%d", &pstemp);
    if (pstemp != password)
    {
        printf("Please enter correct password. Try Again!");
    }
    else
    {
        int openingBalance, currentBalance, choice, depositeCurrent = 0, depositeMain = 0, withdrawCurrent = 0, withdrawMain = 0, transactions = 0, n = 1;

        printf("\nPlease enter initial amount: ");
        scanf("%d", &openingBalance);
        currentBalance = openingBalance;

        while (n == 1)
        {

            printf("\n=================\n");
            printf("Welcome To ATM\n");
            printf("=================\n\n");
            printf("1. Check Account Balance\n");
            printf("2. Deposit Money\n");
            printf("3. Withdraw Money\n");
            printf("4. Account Summary\n");
            printf("5. Exit\n\n");
            printf("Enter Your Choice: ");
            scanf("%d", &choice);

            switch (choice)
            {
            case 1: // Displaying Current Account Balance
                printf("Current Account Balance: %d\n", currentBalance);
                break;

            case 2: // Deposite Amount Menu
                printf("\nEnter deposit amount: ");
                scanf("%d", &depositeCurrent);

                if (depositeCurrent <= 0)
                {
                    printf("Deposite ammount must be greater than 0, Try Again!\n");
                }
                else
                {
                    currentBalance = currentBalance + depositeCurrent;
                    depositeMain = depositeMain + depositeCurrent;
                    transactions++;

                    printf("\nDeposit successful\n");
                    printf("Current Balance: %d\n", currentBalance);
                }
                break;

            case 3: // Withdrawal Amount Menu
                printf("\nEnter withdrawal amount: ");
                scanf("%d", &withdrawCurrent);

                if (withdrawCurrent <= 0)
                {
                    printf("Amount should be greater than 0\n");
                }
                else if (withdrawCurrent > currentBalance)
                {
                    printf("Insufficient amount\n");
                    printf("Current Balance: %d\n", currentBalance);
                }
                else
                {
                    currentBalance = currentBalance - withdrawCurrent;
                    withdrawMain = withdrawMain + withdrawCurrent;
                    printf("Withdrawal of %d is successful\n", withdrawCurrent);
                    printf("Current Balance: %d\n", currentBalance);
                    transactions++;
                }
                break;
            case 4: // Summary Table
            {
                printf("\n================================\nACCOUNT SUMMARY\n================================\n\n");
                printf("Opening Balance: %d\n", openingBalance);
                printf("Total Deposited: %d\n", depositeMain);
                printf("Total Withdrawn: %d\n", withdrawMain);
                printf("Current Balance: %d\n", currentBalance);
                printf("Successful Transactions: %d\n\n", transactions);
                printf("===============================\n");
                break;
            }
            case 5:
            {
                break;
            }
            default:
            {
                printf("\nWrong Choice. Try Again!\n");
                break;
            }
            }
            if (choice == 5)
            {
                break;
            }
            printf("\nEnter 1 to continue banking or 0 to exit from ATM: ");
            scanf("%d", &n);
        }
    }
    printf("\nThank You! Visit Again.\n");
    return 0;
}