#ifndef HASHTABLE_H
#define HASHTABLE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct hashtableEntry {
    void *key;
    void *value;
};

struct sll_node {
    struct hashtableEntry *data;
    struct sll_node *next;
};

typedef struct hashtable {
    int bucketCount;
    struct sll_node buckets[];
} hashtable;

void hashtable_create(
        unsigned int bucketCount,
        unsigned long (*p_func_hashCode)(const void*),
        char* (*p_func_printKey)(void*),
        char* (*p_func_printValue)(void*)
);

// void hashtable_print(hashtable *ht);
// int hashtable_index(hashtable *ht, char *key);
// char *hashtable_lookup(hashtable *ht, char *key);
// bool hashtable_insert(hashtable *ht, char *name, char *nickname);
// void free_user(struct user *user);
// char *hashtable_remove(hashtable *ht, char *key);

#endif