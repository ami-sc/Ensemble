/**
 * @file    MainWindow.hpp
 * @brief   The main window for Ensemble, containing the Top Bar, the Sidebar,
 *          the Music Player, and the View Manager.
 *
 * @author  Emilio Soriano Chávez
 */

#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QWidget>
#include <QVBoxLayout>

#include "TopBar.hpp"

class MainWindow : public QWidget
{
    public:
        MainWindow ();

    private:
        QVBoxLayout* _layout = nullptr;

        TopBar* _topbar = nullptr;
};

#endif
