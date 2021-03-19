#include "includes.h"

/* Returns 1 if the string is alphabetic
*  Returns 0 if it contains any unwanted literals */
int checkWhetherStringIsValid(const char* name) {
    int iterator = 0;
    for(; name[iterator] != '\0'; iterator++) {
        if(!isalpha(name[iterator]))
            return 0;
    }
    return 1;
}
