#include <stdio.h>
#include <string.h>
#include <ctype.h>

int checkLogin(char *login, char *passwd);
int checkValidPass(char *ps);

int main() {
    char login[64], password[64];
    printf("Enter login : "); scanf("%s", login);
    printf("Enter password : "); scanf("%s", password);

    if(checkLogin(login, password) == 1) printf("Welcome\n");
    else printf("Incorrect login or password\n");

    if (checkValidPass(password)) printf("Accepted\n");
    else printf("Reject\n");

    return 0;
}

int checkValidPass(char *ps) {
    int len = strlen(ps);
    int upper = 0, digit = 0;
    int i;
    if (len < 5 || len > 8) return 0;
    if (isdigit(ps[0])) return 0; 
    for (i = 0; i < len; i++) {
        if (isupper(ps[i])) upper++;
        if (isdigit(ps[i])) digit++;
    }

    if (upper >= 2 && digit >= 2) return 1; 
    else return 0;

}

int checkLogin(char *login, char *passwd) {
    if(!strcmp(login, "student1") && !strcmp(passwd, "mypass")) return 1;
    else return 0;
}