#include <QCoreApplication>
#include "exampleclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ExampleClass example_class;
    example_class.startToWait();

    return a.exec();
}
