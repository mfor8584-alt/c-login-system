#include <stdio.h>
#include <string.h>

int main(){

//fixed id-password
char correctusername[]="admin";
char correctpassword[]="1952";

char enterUsername[20];
char enterPassword[20];

printf("---Welcome to My Sytem---\n");

printf("Enter Username: ");
scanf("%s",enterUsername);

printf("Enter Password: ");
scanf("%s",enterPassword);

//Important Add this part
  if (strcmp(enterUsername,enterPassword) == 0 && strcmp (enterPassword,correctpassword) == 0){
       printf("Login Successful!\n");
  

}else{

printf("Invalid Creadentials.\n");
  }
return 0;
}
