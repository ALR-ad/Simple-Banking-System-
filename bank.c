#include <stdio.h>

void checkBalance(float balance);
float deposit();
float withdraw(float balance);

int main(){

int choice = 0;
float balance = 0.0f;

printf("**** WELCOME TO THE BANK ****");
do {
    printf("\nSelect a option: \n");
    printf("\n1. Check balance \n");
    printf("2. Deposit Money \n");
    printf("3. Withdraw Money \n");
    printf("4. Exit ");
    printf("\nEnter your choice : ");
    scanf("%d", &choice);

    switch(choice){
    case 1 :
       checkBalance(balance);
       break;
    case 2 :
       balance = balance + deposit();
       break;
    case 3 :
       balance -= withdraw(balance);
       break;
    case 4 :
       printf("\nThank you for using the bank!\n");
       break;
     default:
            printf("\nInvalid choice\n");}

}while (choice != 4);

    return 0;
}

  
    



void checkBalance(float balance){

 printf("\nYour current balance is : $%.2f\n", balance);
  

}
float deposit(){
 float amount = 0.0f;

 printf("\nEnter a amount to deposit: ");
 scanf("%f", &amount);

if(amount < 0){
    printf("Invalid amount\n");
    return 0.0f;

}

else{
    printf("Sucessfully deposited $%.2f\n" , amount);
   return amount;
}




    return 0.0f;
}
float withdraw(float balance){float amount = 0.0f;

    printf("\nEnter an amount to withdraw: ");
    scanf("%f", &amount);

    if (amount <= 0) {
        printf("Invalid amount. Must be positive.\n");
        return 0.0f; // Return 0 so nothing is subtracted
    } 
    else if (amount > balance) {
        printf("You broke mf . You only have $%.2f\n", balance);
        return 0.0f; // Return 0 so nothing is subtracted
    } 
    else {
        printf("Successfully withdrew $%.2f\n", amount);
        // Return the valid amount to be subtracted in main()
        return amount; 
    }}