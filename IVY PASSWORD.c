#include<stdio.h>
#include<conio.h>
int main(){
char username[30];
char password[20];
printf("Enter username\n");
scanf("%s",&username);
printf("Enter your password\n");
scanf("%s",password);
if(strcmp(username,"anonumous")==0){
}
if(strcmp(password,"5689")==0){

printf("login....success full");
}
else{
    printf("wrong password\n");

}

return 0;
}
