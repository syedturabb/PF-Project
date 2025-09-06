#include<stdio.h>
void reserve (void)

{
  int roomNumber;
  char choice1;
  int rooms[101] ;

  FILE *ptrrooms;
  ptrrooms = fopen ("rooms.txt", "r");

  for (int i = 1; i < 101; i++)
    {
      fscanf (ptrrooms, "%d", &rooms[i]);
    }
  do
    {
      printf ("Enter room number to reserve (1-100): ");
      scanf ("%d", &roomNumber);
      if (roomNumber < 1 || roomNumber > 100)
        {
          printf ("We have only 100 rooms in our hotel, but in future we will "
                  "increase our hotel rooms.\n");
        }
    }
  while (roomNumber < 1 || roomNumber > 100);

  if (rooms[roomNumber] == 0)
    {
      rooms[roomNumber] = 1;
      printf ("Room %d is reserved.\n", roomNumber);
    }
  else
    {
      printf ("Room %d is already reserved.\n", roomNumber);
    }
    ptrrooms = fopen ("rooms.txt", "w");

  for (int i = 1; i < 101; i++)
    {
      fprintf (ptrrooms, "%d\n", rooms[i]);
    }
  fclose (ptrrooms);
}
