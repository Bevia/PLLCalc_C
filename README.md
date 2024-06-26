Explanation

    Headers:
        <iostream> for input and output.
        <complex> for handling complex numbers.
        <vector> for using the vector container.
        <cmath> for mathematical functions like std::sqrt.

    Functions:
        calculateZeros: Computes the zeros of the transfer function. It returns a vector of complex numbers.
        calculatePoles: Computes the poles of the transfer function. It returns a vector of complex numbers.

    Main Function:
        Initializes the coefficients of the transfer function.
        Calls calculateZeros and calculatePoles to get the zeros and poles.
        Prints the zeros and poles.

This C++ program should produce the same output as my Java program call PLLCalc.

how to run:
 g++ -std=c++11 -o pll_calc pll_calc.cpp  
 ./pll_calc

 result:
 Zeros:
(-1,0)
(-1,-0)
Poles:
(-0.25,0.433013)
(-0.25,-0.433013)
