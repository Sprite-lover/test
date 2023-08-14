//*success 后缀表达式运算
#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool IsOperator(char c);
bool IsDigit(char c);
int Calculate(char c, int a, int b);

int func(string expression)
{
	stack<int> s;
	for (int i = 0;i < expression.size();i++)
	{
		if (expression[i] == ' ') continue;
		else if (IsOperator(expression[i]))
		{
			int temp2 = s.top(); s.pop();
			int temp1 = s.top(); s.pop();
			int res = Calculate(expression[i], temp1, temp2);
			s.push(res);
		}
		else if (IsDigit(expression[i]))
		{
			int operand = 0;
			while (i < expression.size() && IsDigit(expression[i]))
			{
				operand = operand * 10 + (expression[i] - '0');
				i++;
			}
			s.push(operand);
			i--;
		}
	}
	return s.top();
}
int main()
{
	string postExpression;
	getline(cin, postExpression);
	int n = postExpression.size();
	cout << n << endl;
	int ret = func(postExpression);
	cout << ret << endl;
}

bool IsOperator(char c)
{
	if (c == '+' || c == '-' || c == '*' || c == '/') return true;
	else return false;
}

bool IsDigit(char c)
{
	if (c >= '0' && c <= '9') return true;
	else return false;
}

int Calculate(char c, int a, int b)
{
	if (c == '+') return a + b;
	else if (c == '-') return a - b;
	else if (c == '*') return a * b;
	else return a / b;
}

