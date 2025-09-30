// Basic Calculator 

#include<iostream>
using namespace std;

class Arithematic
{
    public:
        float fValue1;
        float fValue2;

        Arithematic(float A, float B)
        {
            fValue1 = A;
            fValue2 = B;
        }
        float Addition()
        {
            return fValue1 + fValue2;
        }
        float Subtraction()
        {
            return fValue1 - fValue2;
        }
        float Division()
        {
            if (fValue2 != 0)
            return fValue1 / fValue2;
            else 
            {
            cout << "Error! Division by zero \n";
            return 0.0f;
        }
        }
        float Multiplication()
        {
            return fValue1 * fValue2;
        }
};
int main()
{
    char op;
    float fNo1 = 0.0f, fNo2 = 0.0f, fAns = 0.0f;
    
    cout<<"Enter first number : \n";
    cin>>fNo1;

    cout<<"Enter second number : \n";
    cin>>fNo2;
    
    cout<<"Enter an operator (+, -, /, *) : \n";
    cin>>op;

    Arithematic aobj(fNo1, fNo2);

    switch(op) 
    {
    case '+': fAns = aobj.Addition(); 
    break;

    case '-': fAns = aobj.Subtraction(); 
    break;
    case '*': fAns = aobj.Multiplication(); 
    break;
    case '/': fAns = aobj.Division(); 
    break;
    default: cout << "Invalid operator!\n";
}
    cout << "Result = " << fAns << "\n";
    return 0;
}

/*OUTPUT

Testcase 1:
Enter first number :
55
Enter second number :
76
Enter an operator (+, -, /, *) :
+
Result = 131

Testcase 2: 
Enter first number :
746
Enter second number :
45
Enter an operator (+, -, /, *) :
-
Result = 701

Testcase 3:
Enter first number :
47
Enter second number :
85
Enter an operator (+, -, /, *) :
/
Result = 0.552941

Testcase 4:
Enter first number :
56
Enter second number :
37
Enter an operator (+, -, /, *) :
*
Result = 2072
*/