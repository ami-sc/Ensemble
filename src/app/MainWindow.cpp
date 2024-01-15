/**
 * @file    MainWindow.cpp
 * @brief   Implementation of the MainWindow class.
 *
 * @author  Emilio Soriano Chávez
 */

#include "MainWindow.hpp"

/**
 * @brief   Constructs the main window of the application.
 */
MainWindow::MainWindow ()
{
    /* Window Properties */
    setWindowTitle("Ensemble");
    setMinimumSize(850, 400);

    /* Remove margins between widgets. */
    setContentsMargins(0, 0, 0, 0);

    _layout = new QVBoxLayout {};
    setLayout(_layout);

    _topbar = new TopBar {};
    _layout -> addWidget(_topbar);
}
