#include<stdio.h>

int main(){
    char username[15];

    //getting username
    printf("Enter Username: ");
    scanf("%s", username);

    // printf("Hello World! My name Jeff!\n"); /* commented out for hello username modification */
    printf("Hello %s, my name Kent!", username); // You are not Jeff.
}