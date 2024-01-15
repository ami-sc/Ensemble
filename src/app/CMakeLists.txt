qt_add_executable(ensemble
    main.cpp
)

target_link_libraries(ensemble PRIVATE Qt6::Widgets)
