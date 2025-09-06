#include <stdio.h>
int hotel();
void cancel (void)
{
  char choice;
  int roomNumber;
  int dur_of_stay,price,payment_method;
  int rooms[101];
  int hotel_bill=10;
  FILE *ptrrooms;
  ptrrooms = fopen ("rooms.txt", "r");
  for (int i = 1; i < 101; i++)
    {
      fscanf (ptrrooms, "%d", &rooms[i]);
    }
  fclose (ptrrooms);
  do
    {
      printf ("Enter room number to cancel (1-100): ");
      scanf ("%d", &roomNumber);
      if (roomNumber < 1 || roomNumber > 100)
        {
          printf ("We have only 100 rooms in our hotel, but in future we will "
                  "increase our hotel rooms.\n");
        }
    }
  while (roomNumber < 1 || roomNumber > 100);
  if (rooms[roomNumber] == 1)
    {
      rooms[roomNumber] = 0;
      
      printf("Please Enter Your Duration of Stay (DAYS):");
      scanf("%d",&dur_of_stay);
      if(dur_of_stay>=1 && dur_of_stay<=5){    // 1 to 5 is 10$
        printf("Your Duration of Stay was %d day, You have to pay %d$\n",dur_of_stay,hotel_bill);
        hotel();
      }
      else if(dur_of_stay>5 && dur_of_stay<15){   // 6 to 15 is 12$ 
        price=hotel_bill*0.5;
        hotel_bill+=price;
        printf("Your Duration of Stay was %d day, You have to pay %d$\n",dur_of_stay,hotel_bill);
        hotel();
      }
      else if(dur_of_stay >= 15){      
        price==hotel_bill*0.7;
        hotel_bill+=price;
        printf("Your Duration of Stay was %d day, You have to pay %d$\n",dur_of_stay,hotel_bill);
        hotel();
      }
      else if(dur_of_stay<1){
        printf("Invlalid Duration of Stay\n");
     
      }
    }
  else
    {
      printf ("Room %d is not reserved.\n", roomNumber);
    }
    
  ptrrooms = fopen ("rooms.txt", "w");

  for (int i = 1; i < 101; i++)
    {
      fprintf (ptrrooms, "%d\n", rooms[i]);
    }
  fclose (ptrrooms);
}

int hotel(){
       int payment_method;
         printf("Please Select Payment Method:\n");
        printf("1. CARD PAYMENT\n");
        printf("2. MOBILE WALLET\n");
        scanf("%d",&payment_method);
        while(payment_method<0 || payment_method>3){
        
          printf("INVALID PAYMENT METHOD!! PLEASE TRY AGAIN");
          scanf("%d",&payment_method);
        }
        if(payment_method==1){
          long long card;
          printf("Enter your Card Number:");
          scanf("%lld",&card);
    //AMEX use 15 digit card number starting from 34 or 37
    if ((card >= 340000000000000 && card < 350000000000000) || (card >= 370000000000000 && card < 380000000000000)) {
        printf("\nYou have an AMEX card ");
        printf("\nTHANK YOU FOR USING OUR HOTEL!!");
    }
    //Master card uses 16 digit numbers starting with 51 52 53 54 55
    else if  ((card >= 5100000000000000 && card < 5600000000000000)) {
        printf("\nYou have a Master card card ");
        printf("\nTHANK YOU FOR USING OUR HOTEL!!");
      
    }

    //Visa uses  13 and 16 digits and starts with 4

    else if ((card >= 4000000000000 && card < 5000000000000) || (card >= 4000000000000000 && card < 5000000000000000)) {
        printf("\nYou have a Visa card ");
        printf("\nTHANK YOU FOR USING OUR HOTEL!!");
    }

    //discover starts with 6 and have 16 digits

    else if (card >= 6000000000000000 && card < 7000000000000000) {
        printf("\nYou have a discover card");
        printf("\nTHANK YOU FOR USING OUR HOTEL!!");
    }
    //union pay start with 62 and have 16 - 19 digits
    else if ((card >= 6200000000000000 && card < 6300000000000000) || (card >= 62000000000000000 && card < 6300000000000000) || (card >= 620000000000000000 && card < 63000000000000000) || (card >= 6200000000000000000 && card < 6300000000000000000)) {
        printf("\nYou have a Union pay ");
        printf("\nTHANK YOU FOR USING OUR HOTEL!!");
    }
    else{
      printf("Invalid Card Number!\n");
    }
   }
   else if(payment_method==2){
    long phone_number;
     printf("Enter your Phone Number:");
     scanf("%ld",&phone_number);
     if(phone_number>03000000000){
     int randomNumber, otp;
    srand(time(NULL));
    // Generate a random number between 100 and 999
    randomNumber = rand() % 900 + 100;
    printf("Your 3-Digit OTP is: %d\n", randomNumber);
    do {
        printf("Enter your OTP:");
        scanf("%d", &otp);
        if (otp != randomNumber) {
            printf("Invalid OTP. Please try again.\n");
        }
    } while (otp != randomNumber);

    printf("OTP Verified!\n");
    
    printf("THANK YOU FOR USING OUR HOTEL\n!!");
     }
     else{
      printf("Invalid Mobile Number\n");
     }
   }
}