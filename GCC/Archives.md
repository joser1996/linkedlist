# Static Libraries
You can think of a library as a collection of books where each book
is a function.

Sometimes, called archives, libraries are just a collection of object files that contain functions. All the functions are organized and 
indexed with a symbol and adress making it easier to find what you're
lookin for.

Static libraries are joined to the main module of a program during the
linking stage. After this the executable file will contain both the
main and library.

# How are they made
These libraries are made using software like **ar**. **ar** takes one
or more object files (*.o), zips them up and generates an archive file
*.a. 

gcc -c sum.c //creates our object files

## Create the library
-rc: creates without warnings and replaces any existing obj files in
the library.

ar -rc libraryName.a sum.o

# How to use it
