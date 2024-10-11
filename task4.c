#include <stdio.h>
#include <string.h>
#include <regex.h>

#define MAX_INPUT_LENGTH 100

int main() {
    char name[MAX_INPUT_LENGTH];
    char email[MAX_INPUT_LENGTH];
    char phone[MAX_INPUT_LENGTH];

    // Input Name
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';  // Remove newline character

    // Input Email
    printf("Enter your email: ");
    fgets(email, sizeof(email), stdin);
    email[strcspn(email, "\n")] = '\0';  // Remove newline character

    // Input Phone Number
    printf("Enter your phone number: ");
    fgets(phone, sizeof(phone), stdin);
    phone[strcspn(phone, "\n")] = '\0';  // Remove newline character

    // Validation variables
    int isValid = 1;

    // Validate Name
    regex_t regexName;
    int retiName = regcomp(&regexName, "^[A-Za-z ]+$", 0);
    if (retiName) {
        fprintf(stderr, "Could not compile regex for name\n");
        return 1;
    }
    retiName = regexec(&regexName, name, 0, NULL, 0);
    regfree(&regexName);

    if (retiName) {
        printf("Invalid name. Name can only contain alphabetic characters and spaces.\n");
        isValid = 0;
    }

    // Validate Email
    regex_t regexEmail;
    int retiEmail = regcomp(&regexEmail, "^[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Z|a-z]{2,}$", 0);
    if (retiEmail) {
        fprintf(stderr, "Could not compile regex for email\n");
        return 1;
    }
    retiEmail = regexec(&regexEmail, email, 0, NULL, 0);
    regfree(&regexEmail);

    if (retiEmail) {
        printf("Invalid email. Please enter a valid email address.\n");
        isValid = 0;
    }

    // Validate Phone Number
    regex_t regexPhone;
    int retiPhone = regcomp(&regexPhone, "^\\+?[0-9][0-9 .-]*$", 0);
    if (retiPhone) {
        fprintf(stderr, "Could not compile regex for phone number\n");
        return 1;
    }
    retiPhone = regexec(&regexPhone, phone, 0, NULL, 0);
    regfree(&regexPhone);

    if (retiPhone) {
        printf("Invalid phone number. Please enter a valid phone number.\n");
        isValid = 0;
    }

    // Print valid inputs if all are valid
    if (isValid) {
        printf("Valid inputs:\n");
        printf("Name: %s\n", name);
        printf("Email: %s\n", email);
        printf("Phone: %s\n", phone);
    }

    return 0;
}
