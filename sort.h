#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

/* Comparison direction macros for bitonic sort */
#define UP 0
#define DOWN 1

/**
 * enum bool - Enumeration of Boolean values.
 * @false: Equals 0.
 * @true: Equals 1.
 */

typedef enum bool
{
	false = 0,
	true
} bool;

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;


/* aux functions */

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void swap_bubble(int *a, int *b);
int partition(int *array, size_t size, int low, int high);
void partition_sort(int *array, size_t size, int low, int high);
void merge_sort_call(int *subarray, int *buffer, size_t lo, size_t hi);
void merge_sub(int *subarray, int *buffer, size_t lo, size_t mid, size_t hi);
void partition_sort_hoare(int *array, size_t size, int low, int high);
int partition_hoare(int *array, size_t size, int low, int high);
void swap_tail(listint_t **list, listint_t **head, listint_t **tail);
void swap_head(listint_t **list, listint_t **tail, listint_t **head);

/* algorithm functions */

void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);
#endif
