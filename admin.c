void manager(void) {
    char user_name_system[20] = "user";
    int password_system = 123456;
    char user_name[20];
    int password;
    int match = 1; // will be used to match the user names below
    int choise; // going to be used later
    int ptrid;
    char ptrnames;
    long long ptrphones;
    
    printf("Enter user name: ");
    scanf("%s", user_name);

    int length = strlen(user_name);

    printf("Enter your password: ");
    scanf("%d", & password);

    for (int i = 0; i < length; i++) {
        if (user_name_system[i] != user_name[i]) {
            match = 0;
            break;
        }
    }
    if (match == 1) {
        if (password_system == password) {
            printf("\t\t\t\tWelcome Manager! \n");
            printf("1. Show Rooms status\n");
            printf("2. Add new employees\n");
            printf("3. Logout from current session\n\n");
            printf("\nEnter your choise: ");
            scanf("%d", & choise);
            while (choise < 1 || choise > 4) {
                printf("Enter a correct choise: ");
                scanf("%d", & choise);
            }
            }
              if (choise == 1) {
                room_status();
              }
             else if (choise == 2) {

                char name[50];
                int id;
                long long phone;

                printf("Enter the name of the new employee: ");
                scanf(" %s",name);

                printf("Enter an id for the new employee: ");
                scanf("%d", &id);

                printf("Enter the phone number of the new employee: ");
                scanf("%lld", &phone);

                //add new employee
                FILE * ptrnames = fopen("Employes/names.txt", "a");
                FILE * ptrid = fopen("Employes/ids.txt", "a");
                FILE * ptrphones = fopen("Employes/phone_nums.txt", "a");

                fprintf(ptrnames, "\n%s", name);
                fprintf(ptrid, "\n%d", id);
                fprintf(ptrphones, "\n%lld", phone);

                fclose(ptrnames);
                fclose(ptrid);
                fclose(ptrphones);
                printf("\nEmployee added successfully");

            } 

        }
     else {
        printf("Wrong password\n");
        printf("1. Login with correct credintials\n");
        printf("2. Go to main menu\n");
        printf("Enter your choise: ");
        scanf("%d", & choise);
        while (choise < 1 || choise > 2) {
            printf("Enter a correct choise: ");
            scanf("%d", & choise);
        }
        if (choise == 1) {
            manager();
        }
        if (choise == 2) {
            exit(0);
        }
  }

}
