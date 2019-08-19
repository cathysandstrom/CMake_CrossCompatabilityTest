* Note that these instructions assume you have successfully pulled the project from git.

# Linux Instructions (using ccmake):

---
## Requirements
  * G++ is installed on the machine
  * Basic uderstanding of how to use terminal
  * You have cloned the project CMake_CrossCompatabilityTest from [GitHub](https://github.com/cathysandstrom/CMake_CrossCompatabilityTest)
	- Note that these instructions can work in general cases, but its tailored specifically to this project. 
----

1.  Install cmake using this command in terminal:
    ```
    sudo apt-get install cmake
    ```
    
2.  Install ccmake using this command in the terminal:
    ```
    sudo apt-get install cmake-curses-gui
    ```
	ccmake creates a GUI for the project you are configuring.

3.  Open the project folder in terminal and create a folder called build.  
	***NOTE:*** add this folder to .gitignore if you change the name so it doesnt get pushed into the repo 

4.  From the new build folder in terminal, run ccmake using this command:
    ```
    [user]: ${YOUR_PATH}/CMake_CrossCompatabilityTest/build$ ccmake ../
    ```
    ***NOTE:*** If ccmake fails to open the project, don't be afraid to delete the contents of the build folder and restart from this step.

5.  Once it is running, press `[C]` to create the configuration for the cmake project.
Make sure that the compiler used is g++. You can check this by toggling the advanced mode by pressing `[T]`. Next to the option `CMAKE_CXX_COMPILER`, make sure that g++ is selected.  
If g++ is not the default option,follow the substeps below. Otherwise, continue to step 6. 
***NOTE:*** If the project has already been configured, then you do not need to press `[C]` initially since it will load the current configuration.  
	 1. Use the arrow keys to get the cursor to the desired row.  

	 2.	Press enter to start making changes, set the path to the location of g++ (default: `/usr/bin/g++`)  
        ***NOTE:*** If you don't have g++ installed, exit ccmake by pressing [Q], use the command 'sudo apt-get install g++' and restart from step 4. 

	 3.	Press enter once more to confirm your changes. Note that those changes have not been loaded into the configuration just yet, but rather are staged to be configured.     

	 4. Press `[C]` to change the saved configuration. 

	 5. You will be prompted that you have made a change to your default configuration. This should be the message that appears:
         ```
         You have changed variables that require your cache to be deleted.
         Configure will be re-run and you may have to reset some variables.
         The following variables have changed:
         CMAKE_CXX_COMPILER= /usr/bin/g++
         ```
     	Press `[E]` to exit this prompt, and then the changes will have been made successfully. 

6.  Once this is done, press `[Q]` to get out of ccmake. 
    You should see that new files have been made inside of the build folder.  
    run this command to generate the makefile using cmake:
    ```
    cmake ../
    ```   
	The output should be this:
    ```
    -- Configuring done
    -- Generating done
    -- Build files have been written to: ${YOUR_PATH}/CMake_CrossCompatabilityTest/build
    ```

7.  The makefile has now been generated inside of the build folder. 
To make the project, simply run the command `make` and you will have this output (as of 8/2019)
    ```
    Scanning dependencies of target CrossPlatformTutorial
    [ 25%] Building CXX object CMakeFiles/CrossPlatformTutorial.dir/src/ClassA.cpp.o
    [ 50%] Building CXX object CMakeFiles/CrossPlatformTutorial.dir/src/ClassB.cpp.o
    [ 75%] Building CXX object CMakeFiles/CrossPlatformTutorial.dir/main.cpp.o
    [100%] Linking CXX executable CrossPlatformTutorial
    [100%] Built target CrossPlatformTutorial
    ```
8.  Run the executable made by the make file using this command:
${YOUR_PATH}/CMake_CrossCompatabilityTest/build$./CrossPlatformTutorial 
The output should be be the executed program: (note - this output may be outdated)
```
class A has been created!
Hey! Class B was made too!
I'm talking class A!
Hello! I'm saying Class B!

This amazingly complex code shall change the world. (Hello World!)
```

**Concluding Notes:** 
-  Set up is finished after steps 1-5, and do not need to be repeated. 

-  Changes made to the .cpp or .h files mean that you need to remake the executable, 
which is done when running the command 'make'. If you are unsure on what to do, 
start again from step 6.

-  If you change the file CMakeFiles.txt, you can remake the make file by calling
'cmake ../' again. If you are unsure on what to do, start again from step 5.

These instructions follow this tutorial with the CMakeLists.txt file already made:
https://youtu.be/HPMvU64RUTY?t=330