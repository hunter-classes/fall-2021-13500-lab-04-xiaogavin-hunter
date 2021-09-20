#include "shapes.h" 
#include <string> 
#include <iostream> 

std::string box(int width, int height) { 
    std::string result; 

    for(int i = 0; i < height; i++) { 
        for(int j = 0; j < width; j++) { 
            result += "*";
        }
        result +=  "\n";
    }

    return result; 
}

std::string checkerboard(int width, int height) { 
    std::string result; 

    for(int i = 0; i < height; i++) { 
        for(int j = 0; j < width; j++) { 
            if(i % 2 == 0 && j % 2 != 0 || i % 2 != 0 && j % 2 == 0)  {
                result +=  " ";
            } else { 
                result +=  "*";
            }
        }
        result += "\n";
    }

    return result; 
}