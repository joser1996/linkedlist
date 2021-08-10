#
# A simple makefile for managing build of project composed of C source files.
# CC = gcc is a macro ~ #define
# Reference macros like: $(MACRO_NAME)
# When you type "make" the file parser will replace these macro 
# refrences with the assigned content

# It is likely that default C compiler is already gcc, but explicitly
# set, just to be sure
CC = gcc

# The CFLAGS variable sets compile flags for gcc:
#  -g        compile with debug information
#  -Wall     give verbose compiler warnings
#  -O0       do not optimize generated code
#  -std=c99  use the C99 standard language definition
CFLAGS = -g -Wall -O0 -std=c99

# The LDFLAGS variable sets flags for linker
#  -lm   says to link in libm (the math library)
LDFLAGS = -lm

# In this section, you list the files that are part of the project.
# If you add/change names of source files, here is where you
# edit the Makefile.
SOURCES = main.c LinkedList.c
# This defines the objects macro to be the same as sources macro,
# except every instance of .c is replaced with .o therefore the assignment
# is equivalent to OBJECTS = main.o LinkedList.o
OBJECTS = $(SOURCES:.c=.o)
TARGET = main

# The first target defined in the makefile is the one
# used when make is invoked with no argument. Given the definitions
# above, this Makefile file will build the one named TARGET and
# assume that it depends on all the named OBJECTS files.
# There are two built-in macros used by makefile $@ and $^
# $@: evaluates main
# $^: evaluates to main.o and LinkedList.o
# 
$(TARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)


# Phony means not a "real" target, it doesn't build anything
# The phony target "clean" is used to remove all compiled object files.

.PHONY: clean

clean:
	@rm -f $(TARGET) $(OBJECTS) core

# Targets
# target-name : dependencies
#	(tab)action
# target name is generally the name of the file that will be produced
# first target listed in a make file is the default