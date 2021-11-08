# CMakeList.txt : CMake project for PasswordSandbox, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("PasswordSandbox")

# Add source to this project's executable.
add_executable (PasswordSandbox "PasswordSandbox.cpp" "PasswordSandbox.h" "Credentials.h" )

# TODO: Add tests and install targets if needed.
