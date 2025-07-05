#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int bal=10000 ,pin=1234 ,code ,oldpin ,newpin ,npin ,account=1234567890;

void withdrawal()
{   int Withdraw;
    printf("\nEnter the amount for Withdrawal: ");
    scanf("%d",&Withdraw);

    if( bal<Withdraw)
    {
        printf("\nInsufficient Amount!");
    }
    else
    {
        bal=bal-Withdraw;
        printf("\nCollect your Cash and Receipt:)");
    }
}

void deposit()
{   int cash;
    printf("\nInsert cash into the deposit slot as per instructions!");
    printf("\nEnter the amount of Deposit: ");
    scanf("%d",&cash);

    if(bal==0)
    {
        bal=cash;
    }
    else
    {
      bal=bal+cash;
    }
    printf("Collect your receipt:)");
}

void pinch()
{ 
  printf("\nEnter Your Old pin: ");
  scanf("%d",&oldpin);

  if(oldpin==pin)
  {
    printf("\nEnter your New Pin: ");
    scanf("%d",&newpin);

    pin=newpin;

    printf("\nEnter your New pin for Confirmation: ");
    scanf("%d",&npin);
    {
    if(pin==npin)
    {
        printf("Pin set!");
    }
    else
    {
        printf("Pin doesn't match:(");
    }
    }
}

  else
  {
    printf("Entered Pin is Incorrect!");
  }

}

void fund()
{   
    int acc,amm;
    printf("\nEnter your Account number: ");
    scanf("%d",&acc);

    if(account==acc)
    {
    printf("\n\tVerified:)\n");

    printf("\nEnter the Fund transfer amount: ");
    scanf("%d",&amm);

    if(bal==0 || bal<amm)
    {
        printf("\nInsufficient balance!");
    }
    else
    {
        bal=bal-amm;
        printf("\nTransaction Successful:)");
    }
    }
    else
    {
        printf("\nUnverified:(");
    }
} 

void inquiry()
{
    printf("Your Balance: %d",bal);
}

int menu()
{
    int choose;
    printf("Choose the Transaction Type:-\n1.Withdrawal\n2.Deposit\n3.Pin change\n4.Fund Transfer\n5.Balance inquiry");
    printf("\n\nEnter the Type:");
    scanf("%d",&choose);
    return choose;
}

void main()
{
     char choice[50],a,b;
     printf("\n\tWELCOME TO OUR ATM :)\n\n\t Insert your Card please!\n\t a)Saving Account or b)Current Account\n");
     printf("\nChoose Your Account Type: ");
     scanf("%s",&choice);
     
     // PIN input with stars (*)
    int i = 0;
    char ch;
    code = 0;

    printf("\nEnter your 4 Digit pin: ");

    while (i < 4) {
        ch = getch();  // Read key without displaying it

        if (ch >= '0' && ch <= '9') {  // Accept only digits
            printf("*");  // Print star instead of digit
            code = code * 10 + (ch - '0');  // Build the PIN number
            i++;
        }
    }

     if(code==pin)
     {
        printf("\t\nVerified:)\n\n");
     
     char ans='y';
     int ch;

     while(ans=='y')
     {
        ch=menu();
        switch(ch)
        {
            case 1:
            withdrawal();
            break;

            case 2:
            deposit();
            break;
        
            case 3:
            pinch();
            break;
            
            case 4:
            fund();
            break;
     
            case 5:
            inquiry();
            break;
      
            default:
            printf("\nWrong Choice!!");
        }
        printf("\n\nEnter 'y' to continue :");
        ans=getche();
        printf("\n");
     }
     }
     else
     {
        printf("\nINVALID PIN!!\n");
     }
     getch();
}