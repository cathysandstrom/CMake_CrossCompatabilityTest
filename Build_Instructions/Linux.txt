Note: that these instructions assume you have successfully pulled the project from git.

Linux Instructions (using ccmake):
    1.  Install cmake using this command in terminal:
	        sudo apt-get install cmake

    2.  Install ccmake using this command in the terminal:
            sudo apt-get install cmake-curses-gui
        ccmake creates an interface for the project you are configuring.

    3.  Open the project folder in terminal and create a folder called build.
        - NOTE - add this folder to .gitignore if you change the name so it doesnt get pushed into the repo 
                
    4.  From the new build folder in terminal, run ccmake using this command:
            [user]: ${YOUR_PATH}/CMake_CrossCompatabilityTest/build$ ccmake ../

    5.  Once it is running, hit c to configure and the program will configure the project.
        Make sure that the compiler used is g++, you can check this by toggling 
        advanced mode with [t] If g++ is not listed, quit out of ccmake using [q] and make sure to 
        install g++ using the install command below and run ccmake again from step 3. 
            sudo apt-get install g++
                
    6.  Once this is done, press [q] to get out of ccmake. 
        You should see that new files have been made inside of the build folder.
        run this command to generate the makefile using cmake:
            cmake ../
        The output should be this:
            -- Configuring done
            -- Generating done
            -- Build files have been written to: ${YOUR_PATH}/CMake_CrossCompatabilityTest/build

    7.  The makefile has now been generated within the build folder. 
        To make the project, simply run make and you will have this output (as of 8/2019)
            ${YOUR_PATH}/CMake_CrossCompatabilityTest/build$ make
        The output should be similar to this:
            Scanning dependencies of target CrossPlatformTutorial
            [ 25%] Building CXX object CMakeFiles/CrossPlatformTutorial.dir/src/ClassA.cpp.o
            [ 50%] Building CXX object CMakeFiles/CrossPlatformTutorial.dir/src/ClassB.cpp.o
            [ 75%] Building CXX object CMakeFiles/CrossPlatformTutorial.dir/main.cpp.o
            [100%] Linking CXX executable CrossPlatformTutorial
            [100%] Built target CrossPlatformTutorial

    8.  Run the executable made by the make file using this command:
            ${YOUR_PATH}/CMake_CrossCompatabilityTest/build$./CrossPlatformTutorial 
        The output should be be the executed program: (note - this output may be outdated)
            class A has been created!
            Hey! Class B was made too!
            I'm talking class A!
            Hello! I'm saying Class B!

            This amazingly complex code shall change the world. (Hello World!)

    Concluding Notes: 
     -  Set up is finished after steps 1-5, and do not need to be repeated. 

     -  Changes made to the .cpp or .h files mean that you need to remake the executable, 
        which is done when running the command 'make'. If you are unsure on what to do, 
        start again from step 6.

     -  If you change the file CMakeFiles.txt, you can remake the make file by calling
        'cmake ../' again. If you are unsure on what to do, start again from step 5.

 These instructions follow this tutorial with the CMakeLists.txt file already made:
 https://youtu.be/HPMvU64RUTY?t=330