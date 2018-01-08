# CMake generated Testfile for 
# Source directory: /cygdrive/c/Users/Duc/CLionProjects/blatt-7-aufgabe-1-asians_never_die
# Build directory: /cygdrive/c/Users/Duc/CLionProjects/blatt-7-aufgabe-1-asians_never_die/cmake-build-debug
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(AVLTest "test/testAvl" "--gtest_output=xml:report.xml")
subdirs("avltree")
subdirs("googletest-build")
subdirs("test")
