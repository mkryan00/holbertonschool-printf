# holbertonschool-printf
C - printf - write your own printf function

Authors: M. Ryan & J. Webb.

Installation:
Copy all files in the holbertonschool-printf repository to desired location. Navigate to the location the files were saved to.
On their own, the files for printf won't achieve anything when compiled. The user will need to incorporate their own main.c
file with calls to _printf() as a minimum to have any output displayed after compiling the files and running the executable.

All files were tested using GCC in Ubuntu 22.04 in the command line using the following flags.

gcc -Werror -Wextra -Wall -pedantic -std=gnu89 -Wno-format *.c

Setting *.c will pass all .c files in the folder to the compiler. The above command will output the default executable a.out in
the local directory. If a different executable name is required, the following command will need to be input.

gcc -Werror -Wextra -Wall -pedantic -std=gnu89 -Wno-format -o EXECUTABLE_NAME *.c

Example output:
To demonstrate the expected output, try the following

What is the output of _printf("hello, %s\n" " world", 1,2,3,4) ?

The result should be: hello world

1,2,3,4 are all integer arguments and are not compatible with %s which expects a string. The result is that _printf only prints
the string literals hello & world.