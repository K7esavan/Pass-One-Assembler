#include "classes.h"

/* Function Which initializes the
 * HashTable, allocates all memory
 * related, heap stack stuffs
 * */
HashTable init();

/* HashFunction to identify the exact position */
int hashFunction(char firstLetter);

/* inserting data into HashTable */
void insertToHashTable(
    const HashTable myHashTable,
    const char*     nameOfSymbol,
    const char*     typeOfSymbol,
    const int       sizeOfSymbol,
    const int       addressOfSymbol
);

/* displays HashTable in a fancy manner */
void displayHashTable(HashTable myHashTable);

/* searches for the symbol in HashTable,
 * if present returns that symbol
 * */
Symbol* searchForSymbol(
    const HashTable myHashTable,
    const char      name[20]
);

/* write hashTable as a File, probably
 * a binary file IMAO
 * */
void writeHashTableAsAfile(
    const HashTable myHashTable,
    const char*     filename
);

/* load hashTable from a File, probably
 * a binary file IMAO
 * */
void loadHashTableFromAfile(
    const HashTable myHashTable,
    const char*     filename
);

/* modifies the hashTable, modifies
 * anything if coded */
void modifyTheHashTable(
    const HashTable myHashTable,
    const char      name[]
);

/* inserting data into HashTable
 * in a sorted fashion
 * */
void insertToHashTableInSortedOrder(
    const HashTable myHashTable,
    const char*     nameOfSymbol,
    const char*     typeOfSymbol,
    const int       sizeOfSymbol,
    const int       addressOfSymbol
);


/* Utility functions */
int checkWhetherStringIsValid(const char* name);
