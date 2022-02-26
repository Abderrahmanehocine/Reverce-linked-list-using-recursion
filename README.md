# Reverce-linked-list-using-recursion

a simple programme to understand linked list with recurion

Programme explanations:

1) the programme create 4 nodes each node contain data(number) and struct* store the address of the next node. The last node point to NULL
2) the programme ask the user to enter the numbers one by one
3) the programme prit the numbers normaly by calling the function print(head)  //head is a struct* contain the address of the first node in the linked list
4) the programme prit the numbers reversed by calling the function reverce(head)
5) the programme call the function delete(head) to delete all the node stored in the heap

functions explanations:

1) add: function returns a struct* and accept a struct* as argument this struct* contain the address of the first node in the linked list the base case of this function is if(h == NULL) the function recall it self(recursion) untill the last node to add a new node
2) print: is a void function accept a struct* as argument this struct* contain the address of the first node in the linked list the base case of this function is if(p==NULL) this function prit all the data in nodes
3) reverce: is a void function accept a struct* as argument this struct* contain the address of the first node in the linked list the base case of this function is if(p==NULL) this function print the data from the last node to the first node (reverce data)
4) delete: is a void function accept a struct* as argument this struct* contain the address of the first node in the linked list this function delete all the nodes 
