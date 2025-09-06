//PROJECT MEMBERS 
// TURAB (23P-0036)  CS-2C
// SHAHEER (23P-3001)  CS-2C
// ZAIN (23P-0513)   CS-2B
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "cancel_room.c"
#include "room_status.c"
#include "admin.c"
#include "design.c"
#include "menu.c"
#include "reserve_room.c"
int main ()
{
    front ();
    do{
    int rooms[101] = { 0 };
    FILE *ptrrooms = fopen("rooms.txt", "r");
    if (ptrrooms == NULL)
    {
        ptrrooms = fopen("rooms.txt", "w");
        for (int i = 0; i < 101; i++)
        {
            fprintf(ptrrooms,"%d\n",rooms[i]);
        }
    }
    fclose(ptrrooms);
  int choise;
  printf ("\n1. Reserve a room\n");
  printf ("2. Cancel a room\n");
  printf ("3. Buffet option\n");
  printf ("4. Show room status\n");
  printf("5. Login as manager\n");
  printf ("6. Exit\n");
  printf ("Enter your choice: ");
  scanf ("%d", &choise);
    
  while (choise < 1 || choise > 6)
    {
      printf ("\nPlease enter correct choise: ");
      scanf ("%d", &choise);
    }
  // Calling each menu based on the option selected
  if (choise == 1)
    {
      char choice1;
      reserve ();

      do 
      {

      printf ("\nDo you want to reserve another room?(Y/N):");
      scanf (" %c", &choice1);

      if (choice1 == 'n' || choice1 == 'N')
      {
        break;
      }

      if (choice1 == 'y' || choice1 == 'Y')
        {
          reserve ();
        }

      }while(1);
    }
  else if (choise == 2)
    {
      cancel ();
      char choice1;

      do
      {

      printf ("Do you want to cancel another room?(Y/N)");
      scanf (" %c", &choice1);

      if (choice1 == 'n' || choice1 == 'N')
      {
        break;
      }

      if (choice1 == 'y' || choice1 == 'Y')
        {
          cancel ();
        }
      }

        while(1);
    }

  else if (choise == 3)
    {
      int menu_choise;
      printf ("Here is our buffet list:\n\n");
      printf ("1.Appetizer for 5$\n");  // 5 dollar
      printf ("2.Sandwiches for 6$\n");  // 6 dollar
      printf ("3.Continental food for 7$\n");  // 7 dollar
      printf ("4.Chinese for 9$\n"); //9 dollar 
      printf ("5.Deserts for 8$\n"); // 8 dollar
      printf ("6.Exit\n");
      printf ("Enter your choise: ");
      scanf ("%d", &menu_choise);
      while (menu_choise < 1 || menu_choise > 6)
        {
          printf ("\nInvalid choise, please enter from the menu above: ");
          scanf ("%d", &menu_choise);
        }

      if (menu_choise == 1)
        {
          char ep_choise;
          menu_appetizer ();
          do{

                 printf ("\nDo you want to order something else from Epitizer(Y/N): ");
                 scanf (" %c", &ep_choise);
          
                if (ep_choise == 'n' || ep_choise == 'N')
                {
                    break;
                 }
                 if (ep_choise == 'y' || ep_choise == 'Y')
              {
                menu_appetizer ();
              }
          
          }while(1);
        }

      else if (menu_choise == 2)
        {
          char sand_choise;
          menu_sandwitches ();
        
        do
        {
          printf ("\nDo you want to order something else from sandwitches(Y/N): ");
          scanf (" %c", &sand_choise);
          
          if (sand_choise == 'n' || sand_choise == 'N')
          {
            break;
          }
          if (sand_choise == 'y' || sand_choise == 'Y')
            {
              menu_sandwitches ();
            }
        }while(1);
        }
      else if (menu_choise == 3)
        {
          int continential_price=7;
          char cont_choise;
          menu_Continental ();

          do
          {

          printf (
              "\nDo you want to order something else from continential(Y/N): ");
          scanf (" %c", &cont_choise);

          if (cont_choise == 'n' || cont_choise == 'N')
          {
            break;
          }
          if (cont_choise == 'y' || cont_choise == 'Y')
            {
              menu_Continental ();
            }

          }while(1);
        }
      else if (menu_choise == 4)
        {
          int chinese_price=9;
          char chinese_choise;
          menu_chinese ();

          do
          {

          printf (
              "\nDo you want to order something else from chinese food(Y/N): ");
          scanf (" %c", &chinese_choise);

          if (chinese_choise == 'n' || chinese_choise == 'N')
          {
            break;
          }
          if (chinese_choise == 'y' || chinese_choise == 'Y')
            {
              menu_chinese ();
            }

          }while(1);
        }
      else if (menu_choise == 5)
        {
          int deserts_price=8;
          char desert_choise;
          menu_deserts ();

          do
          {

          printf (
              "\nDo you want to order something else from deserts (Y/N): ");
          scanf (" %c", &desert_choise);

          if (desert_choise == 'n' || desert_choise == 'N')
          {
            break;
          }
          if (desert_choise == 'y' || desert_choise == 'Y')
            {
              menu_deserts ();
            }
          }while(1);
        }
    }

    else if (choise == 4){
    
        room_status();

    }
    else if (choise == 5)
    {
        manager();
    }
    else if (choise == 6)
    {
        return 0;
    }
    }
    while(1);
}

    


