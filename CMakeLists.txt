#-----------------------# NOTE #-----------------------#
# make sure you build the project in a folder called 'build'.
# if you change the name of the build folder, add it to .gitignore

# if you plan on making changes to this file as well that are  
# only for local use, add this file to .gitignore as well

# if you make platform-specific changes, add them in the 
# appropriate if statement as to not mess with other platforms
#------------------------------------------------------#

#define the min version of cmake
cmake_minimum_required (VERSION "3.10")

#title the project
project("CrossPlatformTutorial")

#specify the directories used to compile the project
#the .h files are retrieved using this command. 
include_directories(bin src)

#list of sources (src) - ONLY CPP FILES TO COMPILE GO HERE
set( SOURCES 
    src/ClassA.cpp
    src/ClassB.cpp
    main.cpp
)

#create the executable for the project
add_executable(${PROJECT_NAME} ${SOURCES})

#check if linux (includes raspberry pi)
if(UNIX AND NOT APPLE)
    #Check Build_Instructions/Linux.txt for how to run this project
    #Linux specific commands can go here
endif()

#check if windows
if(WIN32)
    # Check Build_Instructions/Windows.txt for how to run this project
	# Windows specific commands can go here
endif()

#check if mac
if(APPLE)
    # ¯\_(ツ)_/¯ I shall get to this
endif()

