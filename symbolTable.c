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
