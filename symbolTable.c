#include "functions.h"
#include "includes.h"

HashTable init() {
    /* Unallocated HashTable */
    HashTable allocatedHashTable = NULL;

    /* gets allocated */
    allocatedHashTable = (HashTable) malloc (1 * sizeof(HTable));
    allocatedHashTable->chain = malloc(26 * sizeof(list));

    /* and also initialized */
    int iterator = 0;
    for(; iterator<26; iterator++) {
        allocatedHashTable->chain[iterator] = NULL;
    }

    /* finally returned */
    return allocatedHashTable;
}

int hashFunction(char firstLetter) {
    if (firstLetter >= 'a' && firstLetter <= 'z')
        return firstLetter - 'a';
    else if (firstLetter >= 'A' && firstLetter <= 'Z')
        return firstLetter - 'A';
    else {
        error("Error: \033[0mInvalid name\033[0m");
        return -1;
    }
}

void insertToHashTable(
        const HashTable myHashTable,
        const char*     nameOfSymbol,
        const char*     typeOfSymbol,
        const int       sizeOfSymbol,
        const int       addressOfSymbol
) {

    /* Check whether the given name is valid */
    if (checkWhetherStringIsValid(nameOfSymbol)) {

        /* Creting new Symbol */
        Symbol *newSymbol = (Symbol*) malloc (1 * sizeof(Symbol));

        /* finding exact position to include it on hashtable */
        int position = hashFunction(nameOfSymbol[0]);

        /* If that position is empty */
        if (myHashTable->chain[position] == NULL) {
            myHashTable->chain[position] = newSymbol;

        } else {

            /* That position is not empty so traverse through that particular list */
            list lp = myHashTable->chain[position];
            while(lp != NULL) {

                lp = lp->next;
            }

            /* got the right place to insert, insert it */
            lp = newSymbol;
        }

    } else {
        /* According to my professor this is important */
        error("Invalid Name for the Symbol in inserting to hash Table ");
    }
}

void displayHashTable(HashTable myHashTable) {

    int iterator = 0;
    list lp = NULL;

    /* We need to display all the 26 positions values */
    for(; iterator<26; iterator++) {
        lp = myHashTable->chain[iterator];

        /* so that we don't get empty spaces while printing */
        if (lp != NULL) newline;

        while(lp != NULL) {
            printf("%s ", lp->name);
            lp = lp->next;
        }
    }
} //end of display function
