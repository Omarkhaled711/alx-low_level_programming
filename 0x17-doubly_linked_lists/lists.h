#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct dlistint_t - struct for double linked list node
 * @n: the data
 * @next: a pointer to the next node
 * @prev: a pointer to the prev node
 */
typedef struct dlistint_t
{
	int n;
	struct dlistint_t *next;
	struct dlistint_t *prev;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);

#endif