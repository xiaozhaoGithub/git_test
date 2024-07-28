cmake_minimum_required(VERSION 3.5)

project(datetimeedit LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED 
COMPONENTS 
	Widgets
)
LIST(APPEND DATETIMEEDIT_DEMO_LIBRARIES
	Qt${QT_VERSION_MAJOR}::Widgets
)

set(Sources
    src/main.cc
    src/display_widget.cc
    src/display_widget.h
    src/stylemanager.h
    src/stylemanager.cc
)

add_executable(datetimeedit-example
	${Sources}
	res/datetimeedit-example.qrc
)

target_include_directories(datetimeedit-example 
	PUBLIC 
	#${CMAKE_SOURCE_DIR}/include
)

target_link_libraries(datetimeedit-example
PRIVATE 
	${DATETIMEEDIT_DEMO_LIBRARIES}
	#datetimeedit
)






