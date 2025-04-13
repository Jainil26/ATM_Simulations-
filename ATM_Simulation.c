#include <stdio.h>

int main()
{
    int pin=1985,enter_pin=0,a,balance=10000,amount,i;
    printf("You have three attempts only\n\n");
    while (i==3)
    {
        printf("Enter the pin : ");
        scanf("%d",&enter_pin);
        if (enter_pin==pin)
        {
            printf("Correct Pin , Access Granted\n\n\n");
            break;
        }
        else{
            printf("Incorrect Pin , try again\n\n\n");
        }
        i++;
    }
    printf("Select what you want to do\n\n");
    printf("1)Check Current Balance\n2)Withdraw\n");
    scanf("%d",&a);

    switch(a)
    {
        case 1:
            printf("Your current balance is %d",balance);
            break;
        case 2:
            printf("You have selected withdraw\n\n");
            printf("Enter the amount to withdraw : ");
            scanf("%d",&amount);
            if (amount<=0)
            {
                ("Invalid amount\n\n");
            }
            else if (amount>balance)
            {
                printf("Insufficient Funds\n\n");
            }
            else
            {
                balance-=amount;
                printf("Your transaction is successfull\n\n");
                printf("New balance %d",balance);
            }
            break;
    }
    
    return 0;
}