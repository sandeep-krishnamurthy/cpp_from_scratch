/*
*   Addition of 2 integers
*/
int addition(int num1, int num2)
{
    return num1 + num2;
}

/*
*   Xubtraction of 2 integers
*/
int subtraction(int num1, int num2)
{
    return num1 - num2;
}

/*
*   Multiplication of 2 integers
*/
int multiplication(int num1, int num2)
{
    return num1 * num2;
}

/*
*   Division of 2 integers
*/
int division(int num1, int num2)
{
    if(num2 == 0)
    {
        return 0;
    }
    return num1 / num2;
}