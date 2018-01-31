#include <stdlib.h>

#include "LinkedList.h"


/////////////////////
// Data Structures //
/////////////////////

typedef struct LinkedList{

}LinkedList;

typedef struct Node Node;
struct Node{

};

typedef struct LinkedListIterator{

}LinkedListIterator;


////////////////////////////////
// Constructors & Destructors //
////////////////////////////////

LinkedList *LinkedList_new(){

}

void LinkedList_destroy(LinkedList *lst_ptr){

}

LinkedListIterator *LinkedListIterator_new(LinkedList *lst_ptr){

}

void LinkedListIterator_destroy(LinkedListIterator *itr_ptr){

}



/////////////////////
// Manipulate Ends //
/////////////////////

void LinkedList_push(LinkedList *lst_ptr, void *value){

}

void LinkedList_pushback(LinkedList *lst_ptr, void *value){

}

void *LinkedList_pop(LinkedList *lst_ptr){

}

void *LinkedList_popback(LinkedList *lst_ptr){

}



//////////////
// Traverse //
//////////////

void LinkedListIterator_move_to_first(LinkedListIterator *itr_ptr){

}

void LinkedListIterator_move_to_last(LinkedListIterator *itr_ptr){

}

void LinkedListIterator_move_to_next(LinkedListIterator *itr_ptr){

}

void LinkedListIterator_move_to_previous(LinkedListIterator *itr_ptr){

}

void *LinkedListIterator_get_item(LinkedListIterator *itr){

}

int LinkedListIterator_get_index(LinkedListIterator *itr){

}



///////////
// Other //
///////////

int LinkedList_get_size(LinkedList *lst_ptr){

}



#endif
