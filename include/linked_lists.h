/**
 * @file linked_lists.h
 * @brief Library to create and manipulate linked lists.
 * @author Clément Giraud-Sauveur
 * @date 24/02/2025
 */

#ifndef LINKED_LISTS_H
#define LINKED_LISTS_H

#define LINKED_LISTS_ALLOCATION_ERROR -1
#define LINKED_LISTS_POSITION_ERROR -2
#define LINKED_LISTS_SUCCESS 0

/**
 * @struct Element
 * @brief Represents an element in the linked list.
 */
typedef struct _element
{
    int number;            /** The value of the element. */
    struct _element *next; /** Pointer to the next element in the list. */
} Element;

/**
 * @struct List
 * @brief Represents the linked list.
 */
typedef struct _list
{
    Element *first; /** Pointer to the first element in the list. */
} List;

/**
 * @brief Initializes a new linked list.
 * @return A pointer to the newly initialized list, or NULL if initialization fails.
 */
List *linked_lists_init(void);

/**
 * @brief Inserts a new element at the beginning of the list.
 * @param list Pointer to the list.
 * @param newNumber The value of the new element.
 * @return LINKED_LISTS_SUCCESS if successful, LINKED_LISTS_ALLOCATION_ERROR if memory allocation fails.
 */
int linked_lists_insert(List *list, int newNumber);

/**
 * @brief Inserts a new element at a specified position in the list.
 * @param list Pointer to the list.
 * @param newNumber The value of the new element.
 * @param position The position at which to insert the new element.
 * @return LINKED_LISTS_SUCCESS if successful, LINKED_LISTS_ALLOCATION_ERROR if memory allocation fails, LINKED_LISTS_POSITION_ERROR if the position is invalid.
 */
int linked_lists_insert_middle(List *list, int newNumber, int position);

/**
 * @brief Deletes the first element of the list.
 * @param list Pointer to the list.
 */
int linked_lists_free(List **p_list);

/**
 * @brief Prints the elements of the list.
 * @param list Pointer to the list.
 */
void linked_lists_display(List *list);

#endif