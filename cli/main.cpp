#include <stdio.h>
#include <ctype.h>
#include <string>

int main(int argc, char *argv[])
{
    if (argc == 0)
    {
        print_help();

        return 0;
    }

    std::string command = std::string( tolower(argv[0]) );

    if (command == "help")
    {
        
    }
}

void print_help()
{
    printf ("");
}