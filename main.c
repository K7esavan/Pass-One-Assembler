#include "includes.h"
#include "functions.h"

int main(int argc, char* argv[]) {
    HashTable ht = init();
    insertToHashTable(ht, "abuzada", "int", 100, 3000);
    insertToHashTable(ht, "acuzada", "int", 100, 3000);
    insertToHashTable(ht, "aguzada", "int", 100, 3000);
    insertToHashTable(ht, "bauzada", "int", 100, 3000);
    displayHashTable(ht);
}
