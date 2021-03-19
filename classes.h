
typedef struct Symbol {
    int address;
    int size;
    char name[20];
    char type[20];
    struct Symbol* next;
} Symbol;

typedef Symbol* list;

typedef struct HTable {
    list *chain;
    int number_of_symbols;
} HTable;

typedef HTable* HashTable;
