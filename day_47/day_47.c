// create a structure to bank holder details and manage the account

#include <stdio.h>
#include <string.h>

struct BankAccount
{ char accountHolder[50];
  int accountNumber;
  double balance; };

void deposit(struct BankAccount *acc, double amt)
{ if (amt > 0)
  acc->balance += amt;
  printf("Deposit Successful\n");
  }

void withdraw(struct BankAccount *acc, double amt)
{
  if (amt > 0 && amt <= acc->balance){
  acc->balance -= amt;
  printf("Withraw successful\n");
  }
  else
  {
  printf("Insufficient Balance\n");
  }
    }

void displayBalance(struct BankAccount *acc)
{ printf("%s\n%d\nBalance: %.2f\n", acc->accountHolder, acc->accountNumber, acc->balance);
}

int main() { 
struct BankAccount acc = { "shreya", 123456789, 10000000.0 }; 
int ch; double amt; 
do { 
printf("Make a choice: 1.Deposit 2.Withdraw 3.Balance 4.Exit\n"); 
scanf("%d", &ch); 
if (ch == 1)
{
printf("Enter amount: ");
scanf("%lf", &amt);
deposit(&acc, amt);
} 
else if (ch == 2)
{
printf("Enter amount: ");
scanf("%lf", &amt);
withdraw(&acc, amt);
} 
else if (ch == 3)
displayBalance(&acc); 
} while (ch != 4); 

return 0; 
}

