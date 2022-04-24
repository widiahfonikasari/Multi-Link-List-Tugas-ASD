#include "list_parent.h"

void createList(List_parent &L) {

    first(L) = NULL;
}

address_parent alokasi(infotype_parent x) {


    address_parent P;
    P = new elmlist_parent;
    info(P) = x;
    next(P) = NULL;
    return P;
}

void insertFirst(List_parent &L, address_parent P) {

    address_parent Q;
    if(first(L) == NULL) {
        first(L) = P;
        next(P) = P;
    } else {
        Q = first(L);
        while(next(Q) != first(L)) {
            Q = next(Q);
        }
        next(P) = first(L);
        next(Q) = P;
        first(L) = P;
    }
}


void printInfo(List_parent L) {

    address_parent P = first(L);
    if(first(L)!=NULL) {
        do {
            cout<<info(P)<<endl;
            P = next(P);
        } while((P)!=first(L));
    }
}

address_parent findElm(List_parent L, infotype_parent x) {

    address_parent P = first(L);
    do {
        if(info(P) == x) {
            return P;
        }
        P = next(P);
    } while(P != first(L));
    return NULL;
}
