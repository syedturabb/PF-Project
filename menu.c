float menu_appetizer ()
{
  int choice;
  float total;
  float appetizer_prices=5;
  do
    {
      printf ("\nIn Appetizer, we have:\n");
      printf ("1.Buffalo wings\n");
      printf ("2.Sweet and Sour Wings\n");
      printf ("3.Chicken Spring Rolls\n");

      printf ("Enter your choice:");
      scanf ("%d", &choice);

      if (choice < 1 || choice > 3)
        {
          printf ("Invalid choice. Please choose a number between 1 and 3.\n");
        }
    }
  while (choice < 1 || choice > 3);

  if (choice == 1)
    {
      float buffelo_wings;
      printf ("How many buffalo wings you want:");
      scanf ("%f", &buffelo_wings);
      printf ("%.1f Buffalo wings is ordered from your side\n", buffelo_wings);
         total=buffelo_wings*appetizer_prices;
         printf("Your Bill is:%.2f$\n",total);
    }
  else if (choice == 2) // This is switch case 2 for appetizer options
    {
      float wings;
      printf ("How many sweet and sour wings you want:");
      scanf ("%f", &wings);
      printf ("%.1f sweet and sour wings is ordered from your side\n", wings);
       total=wings*appetizer_prices;
         printf("Your Bill is:%.2f$\n",total);
    }
  else if (choice == 3) // This is switch case 3 for appetizer options
    {
      float spring_rolls;
      printf ("How many chicken spring rolls you want:");
      scanf ("%f", &spring_rolls);
      printf ("%.1f chicken spring rolls is ordered from your side\n",spring_rolls);
             total=spring_rolls*appetizer_prices;
         printf("Your Bill is:%.2f$\n",total);
    }
    return total;
}
void menu_sandwitches (void)
{
  float total;
  float sandwitches_prices=6;

  printf ("\nIn Sandwiches,we have:\n");
  printf ("1.Egg Sandwich\n");
  printf ("2.Chicken Sandwich\n");
  printf ("3.Cheese Sandwich\n");

  int choice;
  do
    {
      printf ("Enter your choice:");
      scanf ("%d", &choice);
      if (choice < 1 || choice > 3)
        {
          printf ("Invalid choice. Please choose a number between 1 and 3.\n");
        }
    }
  while (choice < 1 || choice > 3);

  if (choice == 1)
    {
      float egg_sand;
      printf ("How many Egg Sandwiches you want:");
      scanf ("%f", &egg_sand);
      printf ("%.1f Egg Sandwiches is ordered from your side\n", egg_sand);
          total=egg_sand*sandwitches_prices;
         printf("Your Bill is:%.2f$\n",total);
    }
  else if (choice == 2)
    {
      float chicken_sand;
      printf ("How many Chicken Sandwich you want:");
      scanf ("%f", &chicken_sand);
      printf ("%.1f Chicken Sandwich is ordered from your side\n", chicken_sand);
         total=chicken_sand*sandwitches_prices;
         printf("Your Bill is:%.2f$\n",total);
    }
  else if (choice == 3)
    {
      float cheese_sand;
      printf ("How many Cheese Sandwich you want:");
      scanf ("%f", &cheese_sand);
      printf ("%.1f Cheese Sandwich is ordered from your side\n", cheese_sand);
         total=cheese_sand*sandwitches_prices;
         printf("Your Bill is:%.2f$\n",total);
    }
}
void menu_Continental (void)
{
  float total;
  float continential_price=7;
  printf ("\nIn Continental food,we have:\n");
  printf ("1.Creamy White Chicken Lasagna\n");
  printf ("2.Spaghetti Pasta with Marinaro Sauce\n");
  printf ("3.Peri Peri Chicken\n");
  int choice;
  do
    {
      printf ("Enter your choice:");
      scanf ("%d", &choice);
      if (choice < 1 || choice > 3)
        {
          printf ("Invalid choice. Please choose a number between 1 and 3.\n");
        }
    }
  while (choice < 1 || choice > 3);

  if (choice == 1)
    {

      float chicken_lasgana;
      printf ("How many Creamy White Chicken Lasagna you want:");
      scanf ("%f", &chicken_lasgana);
      printf ("%.1f Creamy White Chicken Lasagna is ordered from your side\n",chicken_lasgana);
      total=chicken_lasgana*continential_price;
       printf("Your Bill is:%.2f$\n",total);

    }
  else if (choice == 2)
    {
      float spaghetti_pasta;
      printf ("How many Spaghetti Pasta with Marinaro Sauce you want:");
      scanf ("%f", &spaghetti_pasta);
      printf ("%.1f Spaghetti Pasta with Marinaro Sauce is ordered from your side\n",spaghetti_pasta);
             total=spaghetti_pasta*continential_price;
       printf("Your Bill is:%.2f$\n",total);
    }
  else if (choice == 3)
    {
      float perri_chicken;
      printf ("How many Peri Peri Chicken you want:");
      scanf ("%f", &perri_chicken);
      printf ("%.1f Peri Peri Chicken is ordered from your side\n", perri_chicken);
         total=perri_chicken*continential_price;
       printf("Your Bill is:%.2f$\n",total);
    }
}

void menu_chinese (void)
{
  float total;
  float  chinese_price=9;
  printf ("\nIn Chinese,we have:\n");
  printf ("1.Egg Fried Rice\n");
  printf ("2.Beef Chilli Dry\n");
  printf ("3.Vegetable Fried Rice\n");

  int choice;
  do
    {
      printf ("Enter your choice:");
      scanf ("%d", &choice);
      if (choice < 1 || choice > 3)
        {
          printf ("Invalid choice. Please choose a number between 1 and 3.\n");
        }
    }
  while (choice < 1 || choice > 3);

  if (choice == 1)
    {
      float egg_fried;
      printf ("How many Egg Fried Rice you want:");
      scanf ("%f", &egg_fried);
      printf ("%.1f Egg Fried Riceis ordered from your side\n", egg_fried);
      total=egg_fried*chinese_price;
       printf("Your Bill is:%.2f$\n",total);
      
    }
  else if (choice == 2)
    {
      float beef_chilli;
      printf ("How many Beef Chilli Dry you want:");
      scanf ("%f", &beef_chilli);
      printf ("%.1f Beef Chilli Dry is ordered from your side\n", beef_chilli);
         total=beef_chilli*chinese_price;
       printf("Your Bill is:%.2f$\n",total);
    }
  else if (choice == 3)
    {
      float veg_rice;
      printf ("How many Vegetable Fried Rice you want:");
      scanf ("%f", &veg_rice);
      printf ("%.1f Vegetable Fried Rice is ordered from your side\n", veg_rice);
         total=veg_rice*chinese_price;
       printf("Your Bill is:%.2f$\n",total);
    }
}
void menu_deserts (void)
{
  float total;
  float deserts_price=8;
  printf ("\nIn Desserts,we have:\n");
  printf ("1.Cream Caramel\n");
  printf ("2.Chochlate Lava\n");
  printf ("3.Fruit Triffle\n");

  int choice;
  do
    {
      printf ("Enter your choice:");
      scanf ("%d", &choice);
      if (choice < 1 || choice > 3)
        {
          printf ("Invalid choice. Please choose a number between 1 and 3.\n");
        }
    }
  while (choice < 1 || choice > 3);

  if (choice == 1)
    {
      float cream_caremal;
      printf ("How many Cream Caramel you want:");
      scanf ("%f", &cream_caremal);
      printf ("%.1f Cream Caramel is ordered from your side\n", cream_caremal);
      total=cream_caremal*deserts_price;
      printf("Your Bill is:%.2f$\n",total);

    }
  else if (choice == 2)
    {
      float choco_lava;
      printf ("How many Chochlate Lava Dry you want:");
      scanf ("%f", &choco_lava);
      printf ("%.1f Chochlate Lava is ordered from your side", choco_lava);
       total=choco_lava*deserts_price;
      printf("Your Bill is:%.2f$\n",total);
    }
  else if (choice == 3)
    {
      float fruit_triffle;

      printf ("How many Fruit Triffle you want:");
      scanf ("%f", &fruit_triffle);
      printf ("%.1f Fruit Triffle is ordered from your side", fruit_triffle);
        total=fruit_triffle*deserts_price;
      printf("Your Bill is:%.2f$\n",total);
    }
}
