cmake_minimum_required (VERSION "3.10")

project("CrossPlatformTutorial")

#-------------# NOTE #-------------#
#set the build path to be in a folder called 'build' and add it to .gitignore

include_directories(bin src)

#list of sources (src) - CHECK IF UP TO DATE
set( SOURCES 
    src/ClassA.cpp
    src/ClassB.cpp
    main.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES})

#check if linux (includes raspberry pi)
if(UNIX AND NOT APPLE)
    # ¯\_(ツ)_/¯ I shall get to this
endif()

#check if windows
if(WIN32)
    # ¯\_(ツ)_/¯ I shall get to this
endif()

#check if mac
if(APPLE)
    # ¯\_(ツ)_/¯ I shall get to this
endif()

