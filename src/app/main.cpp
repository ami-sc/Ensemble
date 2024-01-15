#include <QApplication>
#include <QMainWindow>

int main (int argc, char* argv[])
{
    QApplication Ensemble(argc, argv);

    QCoreApplication::setApplicationName("Ensemble");
    QCoreApplication::setApplicationVersion("0.1");

    QMainWindow main_window {};
    main_window.show();

    return Ensemble.exec();
}
