#include <iostream>

int main()
{
    std::cout << "Midland" << std::endl;
    
    std::cout << "This is a new Line" << std::endl;
    
    std::cout << "This is a badly indented line" << std::endl;
    
    for(int i=0;i<10;++i){
        ;
    }
    
    std::cout << "This is broken << std::endl;
}
