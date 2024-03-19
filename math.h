#pragma once

#include <iostream>

using namespace std;

namespace mat
{
    class clsCalculator
    {

    /*
        - Private Mempers:

        1- _result   >> Result after Prosses Done Like add, sub and ets...
        2- _LastNumber   >> 
        3- _lastOpration 
        4- _priviousResult   >> Save last result before edit it

        - Private Method:

            1- _isZero()

        --------------------------------------

        - Public Mempers:

        1- 

        - Public Method:

            1- add()
            2- sub()
            3- divide()
            4- multiply()
            5- getFinalResults()
            6- cansleLastOpration()
            7- printResult()
    */
    private:

        float _result = 0;
        float _lastNumber = 0;
        string _lastOperation = "Clear";
        float _previousResult = 0;
        
        bool _isZero(float number)
        {
            return number <= 0;
        }

    public:

        void add(float number)
        {
            _lastNumber = number;
            _previousResult = _result;
            _lastOperation = "Adding";
            _result += number;
        }

        void subtract(float number)
        {
            _lastNumber = number;
            _previousResult = _result;
            _lastOperation = "Suptract";
            _result -= number;
        }

        void Divide(float number)
        {
            _lastNumber = number;

            // Exption Handling
            if(_isZero(number))
            {
                number = 1;
            }

            _previousResult = _result;
            _lastOperation = "Dividing";
            _result /= number;
        }

        void printResult()
        {
            cout << "Result after " << _lastOperation << " " << _lastNumber << " is " << _result << endl;
        }

        void clear()
        {
            _result = 0;
            _lastNumber = 0;
            _lastOperation = "Clear";
            _previousResult = 0;
        }

        void cancelLastOpration()
        {
            _lastNumber = 0;
            _lastOperation = "Cancelling last opration";
            _result = _previousResult;
        }

    };

}