#include "freeList.h"

freeList::freeList( long int*inRAM, int size ) {

int (*x)[size]; // point to an array that's a constructed size?

}



long int*
freeList::reserve_space( int size ) {
  long int* loc = NULL;
  return loc;

loc = loc + 2; // adding for overhead? 



}




void
freeList::free_space( long int* location ) {

long int* next = 0

*pointer_value = loc; 
*loc + size =  next; // the size of the next free space is the location of the pointer plus the size of the space given
next = next + 2; // and add 2 for the overhead 



}




void
freeList::coalesce_forward() {

if size == 0 &&  next_size == 0; 
// point to the head of the first and add the sizes...



}

// print() is given to you. It traverses the free list and prints out what is there.
void freeList::print() {
  long int * printHead = head;
  
  while( printHead != NULL ) {
    cout << "at " << printHead << "("<< dec <<printHead[0] << " : 0x" << hex << printHead[1] <<  ")\n";
    printHead = (long int *)printHead[1];
  }
}
