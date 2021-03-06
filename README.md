![](https://hampus.hallkvist.org/img/dotLib.png)

## Description
Dotlibrary is a library created to siftly start developing graphics applications in c++. The library is built on SDL and uses grids for a simple way to view graphics. The grid based structure is scalable and flexible. It is aslo possible to have multiple grids with different resolutions for different things such as text and messages.

Read documentation for more in detail information: https://github.com/Hampfh/DotLibrary/wiki
 ***
##### Dependencies:
* SDL2 library

## SDL2 Installation:
#### 1. Download Package (Outside visual studio)
  1. Go to SDL's own site: https://www.libsdl.org/download-2.0.php
  2. Scroll down to "Development Libraries" and download: 
   **Visual C++**

#### 2. Create folders (Outside visual studio)
  * **Note:** Create an empty C++ project if you haven't already.
  1. Now go into your solution directory (where your [.sln] file is).
Create a folder in the directory, the name of the folder is optional but we call it **"deps"**. 
     * _**Note:** If your folder name is something else then remember to stick with that. Change every **deps** to whatever you've called your file._

  2. Extract your downloaded SDL2 package.
  3. Navigate inside the SDL2 package to the _"include"_ folder and drag folder (with it's content) inside **deps**.
  4. Open the _"lib"_ file in the package, depending on your system open either the 64bit(x64) or 32bit(x86) folder.
Create a new folder inside **"deps"** called **lib** and drag all [.lib] files to that position.
  5. Notice that the [.dll] file left. Drag this one to your code output file (same folder as your [.exe] file), if you don't have one, run your code once and it will be automatically created. 

#### 3. Link library (Inside visual studio)
  1. Open your project in visual studio. 
     * **Note:** Make sure your bits in visual matches the bits of the imported SDL lib.
  2. Navigate to **Project->Properties**. 
  3. Click **VC++ Directories**. 
  4. Open **Include libraries** and add _$(SolutionDir)**deps**/include/_ in the upper bar. 
  5. Do exactly the same thing for **Library Directories** but instead insert _$(SolutionDir)**deps**/lib/_
  6. Now locate **Linker->Input** and open **Additional Dependencies**. Now paste **SDL2.lib** click enter and paste **SDL2main.lib**
     * **Note:** Don't forget to click **OK** when you leave this window.
  7. Lastly locate **Linker->System** open **SubSystem** and choose **Console (/SUBSYSTEM:CONSOLE)**.
     * **Note:** Click **Apply** when exiting the window.


## DotLibrary Installation:
#### 1. Download Package (Outside visual studio)
  1. Find the DotLibrary download via github on the link bellow: https://github.com/Hampfh/DotLibrary/releases
  2. Download the latest version of _DotLibrary.zip_

#### 2. Add library (Outside visual studio)
  1. Open your **DotLibrary** package and drag all [.h] files inside **deps->include**
  2. Drag the last [.lib] file in **DotLibrary** inside **deps->lib**

#### 3. Link library (Inside visual studio)
  1. Open your project in visual studio. 
  2. Navigate to **Project->Properties**. 
  3. Now locate **Linker->Input** and open **Additional Dependencies**. On a new line add **DotLibrary.lib**.
     * **Note:** Don't forget to click **OK** when you leave this window.
