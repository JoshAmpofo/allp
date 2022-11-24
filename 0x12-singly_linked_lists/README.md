## Singly Linked Lists

Moving on from arrays to the next Data Structure: Linked Lists.
Linked Lists provide more flexibility in terms of accessing and removing elements as compared to arrays. Group of structures in a Linked list is referred to as a node.
Each node points to the address of the next node. That way you can access the entire node list if you know th address of the first node.
You can add items to the begiiinnng, middle and end of a node but it is way easier to insert data at the beginning of the node.

## Singly linked lists Tasks

### 0. Print list
Write a function that prints all the elements of a list_t list.
Prototype: size_t print_list(const list_t *h);
Return: the number of nodes
Format: see example
If str is NULL, print [0] (nil)
You are allowed to use printf

### 1. List Length
Write a function that returns the number of elements in a linked list_t list.
Prototype: size_t list_len(const list_t *h);

### 2. Add node
Write a function that adds a new node at the beginning of a list_t list.
Prototype: list_t *add_node(list_t **head, const char *str);
Return: the address of the new element, or NULL if it failed
str needs to be duplicated
You are allowed to use strdup

### 3. Add node at the end
Write a function that adds a new node at the end of a list_t list.

Prototype: list_t *add_node_end(list_t **head, const char *str);
Return: the address of the new element, or NULL if it failed
str needs to be duplicated
You are allowed to use strdup

### 4. Free list
Write a function that frees a list_t list.
Prototype: void free_list(list_t *head);

### 5 (Advanced task 1)

### 6 (Advanced task 2)
