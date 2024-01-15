qt_add_executable(ensemble
    main.cpp
    MainWindow.hpp
    MainWindow.cpp
)

target_link_libraries(ensemble PRIVATE
    Qt6::Widgets
    gui
)
