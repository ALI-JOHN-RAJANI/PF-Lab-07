#include <stdio.h>

int main() {
    char name[100];
    char email[100];
    char num[100];
    int numflag =1;
    int nameflag = 1;
    int emailflag = 1;
    int emailflag1 = 0;

    printf("Enter Your Name: ");
    scanf("%99[^\n]", name);

    printf("Enter Your Email: ");
    scanf("%99s", email);
    
    printf("Enter Your Phone Number: ");
    scanf("%99s", num);

    for (int i = 0; name[i] != '\0'; i++) {
        if (!((name[i] >= 'A' && name[i] <= 'Z') || (name[i] >= 'a' && name[i] <= 'z') || (name[i] == ' '))) {
            nameflag = 0;
            break;
        }
    }

    for (int i = 0; email[i] != '\0'; i++) {
        if (!((email[i] >= 'A' && email[i] <= 'Z') || (email[i] >= 'a' && email[i] <= 'z') ||
              (email[i] >= '0' && email[i] <= '9') || (email[i] == '.') || (email[i] == '_') ||
              (email[i] == '-') || (email[i] == '@'))) {
            emailflag = 0;
            break;
        }
        if (email[i] == '@') {
            emailflag1 += 1; 
        }
    }
    int i;
    if(num[0] =='+'){
        i=1;
    }else{
      i=0;  
    }
    for(;num[i]!='\0';i++){
        if (!((num[i] >= '0' && num[i] <= '9') || num[i] == ' ' || num[i] == '-')) {
        numflag = 0;
        break;
        }
        
    
    }
    if (nameflag == 0) {
        printf("Name can only contain spaces & (A-Z, a-z) characters\n");
    } else {
        printf("Name: %s\n", name);
    }

    if (emailflag == 0 || emailflag1 != 1) {
        printf("Email can only contain periods (.), hyphens (-), underscores (_), numbers (0-9) & must include exactly 1 @ symbol\n");
    } else {
        printf("Email: %s\n", email);
    }
    if(numflag == 0) {
        printf("PhoneNumber can only contain numbers(0-9), Hyphen(-), spaces & optional plusSign(+) at first place");
    }else{
        printf("PhoneNumber: %s\n", num);
    }
    return 0;
}








