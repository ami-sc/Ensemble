qt_add_library(gui STATIC
    TopBar.cpp
)

target_link_libraries(gui PRIVATE Qt6::Widgets)
target_include_directories(gui INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
