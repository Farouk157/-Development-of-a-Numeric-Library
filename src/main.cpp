#include <iostream>
#include "math.hpp"


int main ()
{   
    std::cout << "The Summation_1 = " << N_Lib:: sum() << "\n";
    std::cout << "The Summation_2 = " << N_Lib:: sum(100) << "\n";
    std::cout << "The Summation_3 = " << N_Lib:: sum(100.50, 200) << "\n";
    std::cout << "The Summation_4 = " << N_Lib:: sum(150.7, 200.5, 300, 10, 20.5, 5.4, 55) << "\n";
    std::cout << "The Summation_5 = " << N_Lib:: sum(20, -25, -100, 300, 200, -115.5) << "\n";
    std::cout << "===========================================================\n";    
    
    std::cout << "The Subtraction_1 = " << N_Lib:: sub() << "\n";
    std::cout << "The Subtraction_2 = " << N_Lib:: sub(100) << "\n";
    std::cout << "The Subtraction_3 = " << N_Lib:: sub(300.50, 200, 10, 25.8, 15) << "\n";
    std::cout << "The Subtraction_4 = " << N_Lib:: sub(20.5, 55.7, 12) << "\n";
    std::cout << "The Subtraction_5 = " << N_Lib:: sub(-10, 15, -20) << "\n";

    std::cout << "===========================================================\n";   

    std::cout << "The Max Element_1 = " << N_Lib:: max()   << "\n";
    std::cout << "The Max Element_2 = " << N_Lib:: max(35) << "\n";
    std::cout << "The Max Element_3 = " << N_Lib:: max(25, -700, -100, -25.8, 500) << "\n";
    std::cout << "The Max Element_4 = " << N_Lib:: max(10.5, 30, 20.8, 80.88, 99, 900.5, 20) << "\n";    

    std::cout << "===========================================================\n"; 
    
    std::cout << "The Min Element_1 = " << N_Lib:: min()   << "\n";
    std::cout << "The Min Element_2 = " << N_Lib:: min(20) << "\n";
    std::cout << "The Min Element_3 = " << N_Lib:: min(25, -700, -100, -25.8, 500) << "\n";
    std::cout << "The Min Element_4 = " << N_Lib:: min(10.5, 30, 20.8, 80.88, 99, 900.5, 20) << "\n"; 

   return 0;
}