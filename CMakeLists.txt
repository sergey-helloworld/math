cmake_minimum_required(VERSION 3.10)


# set the project name
project(Math)

# add the executable
file(GLOB Math_SRC CONFIGURE_DEPENDS 
	"*.h" 
	"*.cpp"
	"System/*.cpp"
	"System/*.h"
)

add_executable(Math ${Math_SRC})

set_property(TARGET Math PROPERTY CXX_STANDARD 14)
