#include "aluno.h"

int main(){
    list *l=createList();
    start(l);
    printAllList(l);
    printf("\n\nO tamanho da lista eh: %d\n\n", l->tam);
    peopleSearch(l);
    printAllList(l);
    freeList(l);
    printAllList(l);

    return 0;
}