#include<stdio.h>
void room_status(void)
{
    int rooms[101];
    FILE *ptrrooms = fopen("rooms.txt", "r");
    for (int i = 1; i < 101; i++)
    {
        fscanf(ptrrooms,"%d",&rooms[i]);
    }
    fclose(ptrrooms);

    for (int i = 1; i < 101; i ++)
    {
        if (rooms[i] == 1)
        {
            printf("Room %d: Not available\t",i);
            if (i % 5 == 0)
            {
                printf("\n");
            }
        }
        else if (rooms[i] == 0)
        {
            printf("Room %d: Available\t",i);
            if (i % 5 == 0)
            {
                printf("\n");
            }
        }
    }

}