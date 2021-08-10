# GCC
Stands for "GNU Compilier Collection

# We have a simple program
test.c

# Goal is to make the system interpret the C code into machine language

# Frist Stage
## Preprocessing
What we do here is...
* Removal of Comments
* Expansion of Macros
* Expansion of included files #include
* Usuall any lines of code that begin with "#" are preprocessor direcives

In our program the first one is #include <stdio.h> we can do this
manually by using gcc's "-E" flag
*.i
gcc -E test.c -o test-preProcessed

# Second Step
## Compilation
Take the preprocessed file as an input and compile it and produce an
intermediate compiled output. At this stage we produce Assembly Code
*.s
We can do this manually by using "-S" flag
gcc -S  test.i -o test.s

# Third Step
## Assembly
Machines only understand binary so we now need an ASSEMBLER that
converts the assembly code to binary code.
If there are any calls to external funcitons in the AS code the 
assembler leaves teh adresses of these funcitons undefined to be 
filled later by the linker.
*.o
gcc -c test.s -o test.o


# Final Phase
## Linking
The linking of all the function calls with their definitions are done.
Linker knows where all these functinos are implemented
gcc -o test.out 