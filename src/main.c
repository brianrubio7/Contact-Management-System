#include <stdio.h> 
#include <stdlib.h>


 typedef struct Person {
    char name[100];
    char email[100];
    char number[20]; 

} Person; 


 void promptQuestions(Person *p) {

    
    
    printf("Enter there name: ");
    fflush(stdout);
    fgets(p -> name, sizeof(p -> name), stdin); 
    
    printf("Enter there email: ");
    fflush(stdout);
    fgets(p -> email, sizeof(p -> email), stdin);

    printf("Enter there number: ");
    fflush(stdout);
    fgets(p -> number, sizeof(p -> number), stdin); 

    
}







int main() { 

    
    

    /* Allocation of structs */
    Person *storage = malloc(100 * sizeof(Person));
    




    char temp[10]; 
    int choice;
    /* Menu screen */
    printf("== My Contacts ==\n");
    printf("1. Add Contact\n");
    printf("2. List Contacts\n");
    printf("3. Search Contact\n");
    printf("4. Edit Contact\n");
    printf("5. Delete Contact\n");
    printf("-----------------------------\n");
    printf("Enter your choice: "); 
    fflush(stdout);

    fgets(temp, sizeof(temp), stdin);
    choice = atoi(temp);
    

    switch(choice) { 
        case 1: 
            static int contactCount = 0;

            promptQuestions(&storage[contactCount]);

            contactCount++;

            printf("Contact added successfully!\n");
        break;
    }
    
    
    

    return 0; 
}