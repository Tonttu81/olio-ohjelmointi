#include <iostream>
#include "classa1.h"
#include "classa2.h"

using namespace std;

int main()
{
    // referenssit ja pointterit
    int a = 5;
    cout << "a:n arvo on " << a << " ja osoite on " << &a <<endl;

    int *pointerA = &a;
    cout << "Pointterin osoittama osoite on: " << pointerA << endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *pointerA << endl;

    int &refA = a;
    cout << "refA osoittaa osoitteeseen: " << &refA << endl;
    cout << "refA:n osoittaman muistipaikan arvo on: " << refA << endl;


    int b = 6;
    cout << "b:n muistipaikka: " << &b << endl;
    // ei voi vaihtaa referenssin osoitetta, "refA = &b" antaa errorin ja "refA = b" muuttaa vain a:n arvoa
    refA = b;
    cout << "refA:n muistipaikka: " << &refA << endl;
    cout << "a:n arvo: " << a << endl;

    pointerA = &b;
    cout << "pointerA:n muistipaikka: " << pointerA << endl;


    // olio argumenttina
    cout << endl << "Olio argumenttina: " << endl;
    ClassB objB;
    objB.setInfo("Olion B asettama info");

    ClassA1 objA1(objB);
    objA1.setBinfo("Olion objA1 asettama info");

    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objA1: "<<objA1.getBinfo()<<endl;

    ClassB &refB=objB;
    ClassA2 objA2(refB);
    objA2.setBinfo("Olion Agr asettama info");
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objA2 "<<objA2.getBinfo()<<endl;
    cout<<endl;

    return 0;
}
