#include <stdio.h>
#include <stdlib.h>

int main() {
    int pin = 1234, enteredPin, choice;
    float balance = 1000.0, amount;

    printf("Enter your PIN: ");
    scanf("%d", &enteredPin);

    if (enteredPin != pin) {
        printf("Incorrect PIN!\n");
        return 0;
    }

    do {
        printf("\n----- ATM MENU -----\n");
        printf("1. Check Balance\n2. Deposit\n3. Withdraw\n4. Change PIN\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your balance: %.2f\n", balance);
                break;
            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                balance += amount;
                printf("Deposited successfully!\n");
                break;
                  case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount <= balance) {
                    balance -= amount;
                    printf("Withdrawal successful!\n");
                } else {
                    printf("Insufficient balance!\n");
                }
                break;
            case 4:
                printf("Enter new PIN: ");
                scanf("%d", &pin);
                printf("PIN changed successfully!\n");
                break;
            case 5:
                printf("Thank you for using ATM!\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 5);

    return 0;
}
