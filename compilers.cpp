#include <iostream>
using namespace std;

/*
Compilers / Linkers / Libraries

First, the compiler will check your C++ code to ensure it follows the rules of the C++ language, otherwise it will raise a compiler error.
Then, then compiler will translate you're C++ code into machine language instructions, which get stored in object file (before linking)
Then, another program called the linker will combine all object files and produce the desired output executable files.
This process of linking looks through all object files to resolve cross-file dependencies / imports.

You can use g++ compiler to generate executable, -o is optional flag to tell name of executable file
*/

int main()
{
    int a;     // default initialization
    int b = 5; // copy-initialization
    int c(6);  // direct initializations
    int d{7};  // direct-list-initialization (DIL)

    cout << "Hello" << a << endl;
    return 0;
}