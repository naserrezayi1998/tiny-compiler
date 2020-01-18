#ifndef SYMBOL_TABLE
#define SYMBOL_TABLE

#include <stdlib.h>

#define MAX_SYMBOL_TABLE_SIZE 100

struct Table
{
    int id;
    int val;
    char *name;
};

struct Table *get_sym(int id);
int add_sym(char *name);
void set_sym(int id, int val);
int get_table_size();

#endif