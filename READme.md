# Course notes

## Abstraction
- It's a funtion prototype, defined before function that use the function
    - The implemetation of that function can happen after the function that use it.

        ```
        void say_hello(void);
        int main(void)
        {
            say_hello();
        }
        void say_hello(void)
        {
            print("Hello, world");
        }
        ```

## Computer limitations
- You can't solve any problem if you only have a finite amount of memory.
- For interest sake:
    - Years back humans decided to store years with 2 bits (00-99), due to this it caused computers(that used 2 digits) dates to break the year 2000, due to not having enough bits to represent it.
        - This cause many computers hardware and softwares to be updated
    - The same issue about to happen again on 19 January 2038.
        - Some computers will run out of bits via which to keep track of time.
        - Due to years back, people decided to use 32 bits to represent time. 
        - Starting from the 1st January 1970
        - With 32 bits you can only count up to 4 billion.
        - On 19 January 2038, we are going to reach the 4 billionth second.
        - Therefore unless we all fail to update our computers by then, we will run into this problem again.

## Compilers
- When using <b>make</b> to compile you code, actually uses <b>clang</b> to run your code at the background
- Clang is a c compiler
    - Run command ```clang -o <compiled_file_name> <c_file_to_compile>```
- There is also gcc that's a c compiler
    - Run command ```gcc -o <compiled_file_name> <c_file_to_compile>```
- I'm not sure if <b>make</b> use clang or gcc.
    - TODO, figure out which it uses on different setups

### Make
- The  make  utility  will determine automatically which pieces of a large program need to be recompiled, and issue the commands to recompile them.
- The manual describes the GNU implementation of make, which was written by Richard Stallman and Roland McGrath, and  is  currently  maintained  by
Paul  Smith.   Our examples show C programs, since they are very common, but you can use make with any programming language whose compiler can be
run with a shell command.  In fact, make is not limited to programs.  You can use it to describe any task where some files must be updated  auto-
matically from others whenever the others change.
- To  prepare  to  use make, you must write a file called the makefile that describes the relationships among files in your program, and the states
the commands for updating each file.  In a program, typically the executable file is updated from object files, which are in turn made by compiling source files.

### GCC compiler
- For cause following I'll use gcc as a compiler
- Inorder to follow the cs50 course you'll need to include there libraries they use.
- You can do that as follows:
    - Install there libraries
        ```
        Ubuntu:
        $ curl -s https://packagecloud.io/install/repositories/cs50/repo/script.deb.sh | sudo bash
        $ sudo apt install libcs50

        You'll then need to link the libraries to the compiler you use as follows:

        gcc -o hello-world hello-world.c -lcs50

        In your code file you can the use:
        #include <cs50>

        This have all the libraries they use.
        ```

### C compiling steps:
- Preprocessing
    - This will go through your code and look for #includes statements and preprocess that.
    - The #include preprocessing, looks for the code you including and adds it to your file where you are using it.
- Compiling
    - Takes your code and compile it into assembly code
    - Computers have many different cpu's, and this cpu's requires this assembly code to run your program
- Assembling
    - This step takes your assembly code and then convert it into machine code, which is binary that only consist of 1's and 0's
- Linking
    - This then include all your external libraries you included, binary files or machine code and combines it to your compile machine code that happen in the assembling step together
    - Just to recall, that the #include <cs50.h> only includes the prototypes for a function. This still requires the functions definitions. 
    - So this step includes that definitions now.
