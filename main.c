#include <stdio.h>
#include <string.h>

typedef char* string;

void registers(string username, string userpassword) { // registrs users 
    
    if (username == "", userpassword  == "") { // checking the correctness of fields
        printf("Fields entered incorrectly 😥");
    } else {
        FILE *file = fopen("users.txt", "a"); // open user.txt file for advanced adding

        if ((file = fopen("users.txt", "a")) == NULL) //checking if the users.txt file exists
        {
            printf("error 505");
            fclose(file); // close file users.txt
        }else {
            fprintf(file, "\nuser: %s", username); // writes users name to the file user.txt
            fprintf(file, "\npassword: %s", userpassword); // writes password to the file user.txt
            fprintf(file, "\n");
            printf("user: %s%s", username, " successfully registered 🙂 👍");
            fclose(file);
        }    
    };
}

int main() {
    registers("", "");
}