#include <iostream>

int main()
{
    //std::endl
    //insert newline and flush
    //the flush it important
    //example below try to print one line with two statement.
    //but if interrupt happen,
    //the second output statement not executed
    //the first statement won't work
    //cause it's not flushed to output stream
    std::cout<<"What are yo";
    int a = 1, b = 0;
    a = a/b;
    std::cout<<"u doing?"<<std::endl;

    return 0;
}