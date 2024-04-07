#ifndef _MATH_HPP_
#define _MATH_HPP_


// new scope used for numeric operations on arithmetic numbers 
namespace N_Lib 
{
        /*
    * this template used to handle summation of any numbers that covered:
    *       1- any data type of numeric numbers 
    *       2- any number of elements can be handeled 
    *       3- fully generic template to sum any elements 
    *       4- using variadic tail recursion method 
    * there is other method which is variadic folding expersion can be used aslo for better performance
    */
    template <typename T, typename A, typename ... Ts>
    auto sum(const T &a, const A &b, const Ts & ...values)
    {
        /* using the tail recursion */
        if constexpr (sizeof ... (Ts))
        {
            auto r = a + b;
            return sum(r, values ...);
        }
        else
        {
            return a + b;
        }
    }

    /**
     * this template to handel if the user inserted only on number to the function 
    */
    template <typename T>
    T sum (const T &a)
    {
        return a;
    }
    /**
     * this overloading to handel the case of no paramters 
    */
    auto sum()
    {
        return 0;
    }

    /**
     * this template to handel if the user inserted only on number to the function 
    */
    template <typename T>
    auto sub(const T &a)
    {
        return a;
    }

    /*
    * this template used to handle subtraction of any numbers that covered:
    *       1- any data type of numeric numbers 
    *       2- any number of elements can be handeled 
    *       3- fully generic template to sub any elements 
    *       4- using variadic folding expresion method 
    */
    template <typename T, typename A, typename ...Ts>
    auto sub(const T &a, const A &b, const Ts & ...values)
    {
        auto r = a - b; 
        return sub(r, values ...);
    }

    /**
     * this overloading to handel the case of no paramters 
    */
    auto sub()
    {
        return 0;
    }

    /**
     * this overloading to handel the case of no paramters 
    */
    auto max()
    {
        return 0;
    }


    /**
     * this template to handel if the user inserted only on number to the function 
    */

    template <typename T>
    T max(const T &a)
    {
        return a;
    }

    /*
    * this template used to handle getting tha maximum number b/t any numbers that covered:
    *       1- any data type of numeric numbers 
    *       2- any number of elements can be handeled 
    *       3- fully generic template to get the max number between any elements 
    *       4- using variadic tail recursion method and ternary operator 
    */
    template <typename T, typename A, typename ... Ts>
    auto max(const T &a, const A &b, const Ts & ...values)
    {
        if constexpr (sizeof ...(Ts))
        {
            auto Max_Num = max(b, values...);
            return a > Max_Num ? a : Max_Num;
        }
        else
        {
            return a > b ? a : b;
        }
    }

    /**
     * this overloading to handel the case of no paramters 
    */
    auto min()
    {
        return 0;
    }

    /**
     * this template to handel if the user inserted only on number to the function 
    */

    template <typename T>
    T min(const T &a)
    {
        return a;
    }


    /*
    * this template used to handle getting tha minimum number b/t any numbers that covered:
    *       1- any data type of numeric numbers 
    *       2- any number of elements can be handeled 
    *       3- fully generic template to get the min number between any elements 
    *       4- using variadic tail recursion method and ternary operator 
    */
    template <typename T, typename A, typename ...Ts>
    auto min(const T &a, const A &b, const Ts & ...values)
    {
        if constexpr(sizeof ...(Ts))
        {
            auto Min_Num = min (b, values...);
            return a < Min_Num ? a : Min_Num;
        }
        else
        {
            return a < b ? a : b;
        }
    }

        
}
#endif