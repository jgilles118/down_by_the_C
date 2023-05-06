/* Prgramming with C
 *
 * Interact with the user
 *************************/

#include<stdio.h>

int main(){

    //Variable to hold the user's name and a reply
    char username[20];
    char reply[3];

    //Ask the user
    printf("Enter your name: ");

    //Store the user's name
    scanf("%s", username);

    //Display the name
    printf("\nIs %s",username," your real name? yes/no: ");
    scanf("%s", reply);

    //The reply
    switch((char)reply){
        case "yes":
            printf("\nWow! You must have had a brutal childhood.");
            break;
        case "no":
            printf("\nGo to the Social Security Office and change it.");
            break;
        default:
            printf("\nOnly a moron would not reply with a simple yes/no.");
    }
    
    return 0;
}
