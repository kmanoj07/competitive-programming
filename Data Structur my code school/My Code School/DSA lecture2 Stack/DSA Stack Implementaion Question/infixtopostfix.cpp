#include <iostream>
#include <stack>
using namespace std;

int getOperatorWeight(char c)
{
    int weight = -1;
    switch (c)
    {
    case '+':
    case '-':
        weight = 1;
        break;
    case '*':
    case '/':
        weight = 2;
        break;
    case '$':
        weight = 3;
    }
    return weight;
}

bool isRightAssociative(char op)
{
    if (op == '$')
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool hasHighestPrecedence(char topC, char expC)
{
    int toCweight = getOperatorWeight(topC);
    int expCweight = getOperatorWeight(expC);

    // if the operator have equal precedence, return true if left associative
    // return false if right associative else false
    if (toCweight == expCweight)
    {
        if (isRightAssociative(topC))
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    return toCweight > expCweight ? true : false;
}

bool isOperand(char c)
{
    // any oprand can be a constant
    // any opreand can be a variable as well
    if (c >= '0' && c <= '9')
    {
        return true;
    }
    if (c >= 'a' && c <= 'z')
    {
        return true;
    }
    if (c >= 'A' && c <= 'Z')
    {
        return true;
    }
    return false;
}

bool isOperator(char c)
{
    if (c == '+' || c == '-' || c == '/' || c == '%' || c == '*')
    {
        return true;
    }
    return false;
}

string infix_to_postfix(string exp)
{
    stack<char> s;
    string resStr = "";
    for (int i = 0; i < exp.length(); i++)
    {
        // scanning each character from left
        // if character is delimeter, move on
        if (exp[i] == ' ' || exp[i] == ',')
        {
            continue;
        }

        if (isOperand(exp[i]))
        {
            // append to str
            resStr = resStr + exp[i];
        }
        else if (isOperator(exp[i]))
        {
            while (!s.empty() && hasHighestPrecedence(s.top(), exp[i]))
            {
                resStr = resStr + s.top();
                s.pop();
            }
            s.push(exp[i]);
        }
    }
    while (!s.empty())
    {
        resStr = resStr + s.top();
        s.pop();
    }
    return resStr;
}

int performOperation(int operand2, int operand1, char op)
{
    if (op == '+')
    {
        return operand1 + operand2;
    }
    else if (op == '-')
    {
        return operand1 - operand2;
    }
    else if (op == '*')
    {
        return operand1 * operand2;
    }
    else if (op == '/')
    {
        return operand1 / operand2;
    }
    else
    {
        cout << "Some error occured!" << endl;
        return -1;
    }
}

bool isNumericDigit(char c)
{
    if (c >= '0' && c <= '9')
    {
        return true;
    }
    return false;
}

int postfixEvaluation(string exp)
{
    stack<int> s;
    // scanning from the left
    for (int i = 0; i < exp.length(); ++i)
    {
        // skip the delimeter space and comma part
        if (exp[i] == ' ' || exp[i] == ',')
        {
            continue;
        }
        // if operand push to the stack
        if (isNumericDigit(exp[i]))
        {
            // Extract the numeric operand from the string
            // Keep incrementing i as long as you are getting a numeric digit.
            int operand = 0;
            while (i < exp.length() && isNumericDigit(exp[i]))
            {
                // For a number with more than one digits, as we are scanning from left to right.
                // Everytime , we get a digit towards right, we can multiply current total in operand by 10
                // and add the new digit.
                operand = (operand * 10) + (exp[i] - '0');
                i++;
            }
            // Finally, you will come out of while loop with i set to a non-numeric character or end of string
            // decrement i because it will be incremented in increment section of loop once again.
            // We do not want to skip the non-numeric character by incrementing i twice.
            i--;

            // Push operand on stack.
            s.push(operand);
        }
        else if (isOperator(exp[i]))
        {
            // pop
            int operand2 = s.top();
            s.pop();
            int operand1 = s.top();
            s.pop();
            int res = performOperation(operand2, operand1, exp[i]);
            s.push(res);
        }
    }
    return s.top();
}

// prefix evaluation
int prefixEvaluation(string exp)
{
    stack<int> s;
    for (int i = exp.length() - 1; i >= 0; i--)
    {
        // skip the delimeter space and comma
        if (exp[i] == ' ' || exp[i] == ',')
        {
            continue;
        }

        if (isNumericDigit(exp[i]))
        {
            // extract the numeric operand fromt the string
            // kee incrementing i as long as you get the numeric digit
            int operand = 0;
            while (i < exp.length() && isNumericDigit(exp[i]))
            {
                // for a number, with more than one digits as we are scanning from right to left
                operand = (operand * 10) + (exp[i] - '0');
                i++;
            }
            i--;
            s.push(operand);
        }
        else if (isOperator(exp[i]))
        {
            // pop
            int operand1 = s.top();
            s.pop();
            int operand2 = s.top();
            s.pop();
            int res = performOperation(operand2, operand1, exp[i]);
            s.push(res);
        }
    }
    return s.top();
}

int main()
{
    // a = 2, b = 3, c = 10, d=4, e = 10
    //  string str = "2,+,3,*,10,-4,*,10";
    //  string res = infix_to_postfix(str);
    //  cout << res << endl;

    // postfix expression <oprand><oprand><operator>
    //  string str1 = "2,3,*,5,4,*,+,9,-";
    //  int val = postfixEvaluation(str1);
    //  cout << val << endl;

    // prefix evaluation
    string str2 = "-,+,*,2,3,*,5,4,9,";
    int res = prefixEvaluation(str2);
    cout << res << endl;

    return 0;
}