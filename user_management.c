#include<stdio.h>

#define MAX_USER 10

typedef struct{
   char username[30];
   char password[30];
}user;

user users[MAX_USER];
int user_count = 0;


void register_user();
int login_user();

int main () {
    int option;
    while(1){
     printf("\n welcome to user management system.");
     printf("\n1. register");
     printf("\n2. login");
     printf("\n3. exit");
     printf("\n select an option:");
     scanf("%d", &option);

     switch (option)
     {
     case 1:
     re
        break;
     case 2:
        break;
     case 3:
     printf("\n exiting program.\n");
     return 0;
        break;
      default:
      printf("\n invalid option please try again!.\n");
        break;
     }
}
return 0;

}