#include "main.hpp"

void dispPawn(Pawn *pawn)
{
    cout << "---------------" << endl;
    // pawn->setId(0);
    // pawn->setColor('W');
    // pawn->setType("NULL");
    // pawn->setToken('N');
    // pawn->setFirstmove(true);
    cout << "Id:\t" << pawn->getId() << endl;
    cout << "Color:\t" << pawn->getColor() << endl;
    cout << "Type:\t" << pawn->getType() << endl;
    cout << "Token:\t" << pawn->getToken() << endl;
    cout << "F.M.:\t" << pawn->getFirstmove() << endl;
    cout << "---------------" << endl;
}

int main()
{
    Pawn test1(1, 'W');
    Pawn test2(2, 'B');
    Pawn test3(3, 'W');
    Pawn test4(4, 'B');

    dispPawn(&test1);
    dispPawn(&test2);
    dispPawn(&test3);
    dispPawn(&test4);


    return 0;
}