#include <QCoreApplication>
#include <QNetworkInterface>
#include <QSqlDatabase>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QNetworkInterface interface = QNetworkInterface::Ethernet();
    QSqlDatabase db = QSqlDatabase::database();


    return a.exec();
}
