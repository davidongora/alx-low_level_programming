#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
  listint_t *current_node, *previous_node;

  if (*head == NULL || index == 0) {
    // Delete the head node.
    current_node = *head;
    *head = (*head)->next;
    free(current_node);
    return 1;
  }

  // Find the previous node to the node to be deleted.
  previous_node = *head;
  current_node = (*head)->next;
  for (unsigned int i = 1; i < index; i++) {
    if (current_node == NULL) {
      // The index is out of bounds.
      return -1;
    }
    previous_node = current_node;
    current_node = current_node->next;
  }

  // Delete the node.
  previous_node->next = current_node->next;
  free(current_node);

  return 1;
}
