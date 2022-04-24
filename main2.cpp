#include <iostream>

using namespace std;
#include "list_child.h"
#include "list_parent.h"
#include "list_relasi.h"

int main()
{
    cout << "Relasi M-N" << endl;

    List_parent LP;
    List_child LC;
    List_relasi LR;
    address_child C;
    address_parent P;
    address_relasi R;

    createList(LP);
    createList(LC);
    createList(LR);


    P = alokasi(3);
    insertFirst(LP, P);
    P = alokasi(7);
    insertFirst(LP, P);
    P = alokasi(2);
    insertFirst(LP, P);
    P = alokasi(4);
    insertFirst(LP, P);

    cout<<"list parent"<<endl;
    printInfo(LP);


    C = alokasi("A");
    insertFirst(LC, C);
    C = alokasi("D");
    insertFirst(LC, C);
    C = alokasi("E");
    insertFirst(LC, C);
    C = alokasi("O");
    insertFirst(LC, C);

    cout<<"list child"<<endl;
    printInfo(LC);


    P = findElm(LP, 4);
    C = findElm(LC, "E");
    R = alokasi(P,C);
    insertFirst(LR,R );

    C = findElm(LC, "D");
    R = alokasi(P, C);
    insertFirst(LR,R );


    P = findElm(LP, 2);
    C = findElm(LC, "E");
    R = alokasi(P, C);
    insertFirst(LR, R );

    P = findElm(LP, 3);
    C = findElm(LC, "A");
    R = alokasi(P, C);
    insertFirst(LR,R );

    cout<<endl<<"Setelah Direlasikan"<<endl;
    cout<<"list parent"<<endl;
    printInfo(LP);

    cout<<endl<<"list child"<<endl;
    printInfo(LC);

    cout<<endl<<"list relasi"<<endl;
    printInfo(LR);



    C = findElm(LC, "E");
    info(C) = "X";

    cout<<endl<<"Setelah Child Diedit"<<endl;
    cout<<"list parent"<<endl;
    printInfo(LP);

    cout<<endl<<"list child"<<endl;
    printInfo(LC);

    cout<<endl<<"list relasi"<<endl;
    printInfo(LR);

    return 0;
}
