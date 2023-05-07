/* Prgramming with C
 *
 * Interact with the user
 *************************/
#include<stdio.h>
#include<string.h>

int main(){

    //Variable to hold the user's name and a reply
    char username[20];
    char reply[3];

    //Ask the user
    printf("Enter your name: ");

    //Store the user's name
    scanf("%s", username);

    //Display the name
    printf("Is %s your real name? yes/no: ", username);
    scanf("%s", reply);

    //The reply
    switch((char)reply[0]){
        case 'y':
            printf("\nWow! You must have had a brutal childhood.");
            break;
        case 'n':
            printf("\nGo to the Social Security Office and change it.");
            break;
        default:
            printf("\nOnly a moron would not reply with a simple yes/no.");
    }
    
    return 0;
}
