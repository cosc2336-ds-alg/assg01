# source files in this project (for beautification)
PROJECT_NAME=assg01

test_src  = $(PROJECT_NAME)-tests.cpp \
	    assg01-functions.cpp
debug_src = $(PROJECT_NAME)-main.cpp \
	    assg01-functions.cpp

# template files, list all files that define template classes
# or functions and should not be compiled separately (template
# is included where used)
template_files =

# common targets and variables used for all assignments/projects
include include/Makefile.inc