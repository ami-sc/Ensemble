#include <QApplication>

#include "MainWindow.hpp"

int main (int argc, char* argv[])
{
    QApplication Ensemble(argc, argv);

    /* Ignore color schemes and styles of the operating system. */
    QApplication::setStyle("fusion");
    QApplication::setDesktopSettingsAware(false);

    QCoreApplication::setApplicationName("Ensemble");
    QCoreApplication::setApplicationVersion("0.1");

    /* Build the main window of the application. */
    MainWindow main_window;

    /* Disable window frame and title bar. */
    main_window.setWindowFlags(Qt::Window | Qt::FramelessWindowHint);

    main_window.show();

    return Ensemble.exec();
}
