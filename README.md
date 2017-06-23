## First OpenCV Project

[first-opencv-prj](https://github.com/toby-liu-os/first-opencv-prj) is used as an example of simple OpenCV project, which capture video frames from webcam and display the frames on a window.

### System environment

1. macOS Sierra Version 10.12.5
2. Xcode Version 8.3.3 (installed from App Store)
3. [Homebrew](https://brew.sh/) Version >1.2.0
```
/usr/bin/ruby -e "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install)"
brew update
```
3. cmake version 3.8.2 (installed automatically in the installation of opencv library below) 
4. opencv version 3.2 (installed by Homebrew)
```
brew tap homebrew/science
brew install opencv3 --c++11 --with-contrib --with-examples --with-opengl --with-qt --with-tbb
```

### Build:
```
./build.sh
```

### Run:
```
./build/first-opencv
```

### Usage:
1. Captured video frames will be displayed on the window automatically
2. Press [ESC] to exit program
