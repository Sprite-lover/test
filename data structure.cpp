#include<iostream>
#include<malloc.h>
using namespace std;
//struct Node {
//	int data;
//	Node* link;
//};
//Node* A;
//void Insert(int x)
//{
//	Node* temp = new Node;
//	temp->data = x;
//	temp->link = A;
//	A = temp;
//}
//void Print()
//{
//	Node* temp = A;
//	printf("List is:");
//	while (temp != NULL);
//	{
//		printf(" %d", temp->data);
//		temp = temp->link;
//	} 
//	cout << endl;
//}
//int main()
//{
//
//	A= NULL;
//	cout << "How many numbers?" << endl;
//	int n;
//	cin >> n;
//	for (int i = 0;i < n;i++)
//	{
//		int x;
//		cout<<"Enter the number"<<endl;
//		scanf("%d",&x);
//		Insert(x);
//		Print();
//	}
	//Node* temp = new Node();
	//temp->data = 2;
	//A = temp;//A�������ͷ�ڵ�ĵ�ַ

	//temp = new Node();
	//temp->data = 4;
	//temp->link = NULL;

	////������������
	//Node* temp1 = A;
	//while (temp1->link != NULL)
	//{
	//	temp1 = temp1->link;
	//}
	//temp1->link=temp;
//}

//#include<iostream>
//#include<malloc.h>
//using namespace std;
//struct Node {
//	int data;
//	Node* link;
//};
//Node* A;
//void Insert(int x)
//{
//	Node* temp = new Node;
//	temp->data = x;
//	temp->link = A;
//	A = temp;
//}
//void Print()
//{
//	Node* temp = A;
//	printf("List is:");
//	while (temp != NULL);
//	{
//		cout << temp->data << " ";
//		temp = temp->link;
//	}
//	cout << endl;
//}
//int main()
//{
//	//int* p = new int;
//	//delete p;
//
//	//int* s = new int[5];
//	////��̬����һ�����飬�����СΪ5
//	//delete[] s;
//
//	//int* pi = new int(10);//��̬����һ��int����ʼ��Ϊ1
//	//cout << "*pi=" << *pi << endl;
//
//	//int* p1 = (int*)malloc(sizeof(int));
//	//*p1 = 20;
//	//cout << "*p1=" << *p1 << endl;
//	A = NULL;
//	cout << "How many numbers?" << endl;
//	int n;
//	cin >> n;
//	for (int i = 0;i < n;i++)
//	{
//		int x;
//		cout << "Enter the number" << endl;
//		cin >> x;
//		Insert(x);
//		Print();
//	}
//	//Node* temp = new Node();
//	//temp->data = 2;
//	//A = temp;//A�������ͷ�ڵ�ĵ�ַ
//
//	//temp = new Node();
//	//temp->data = 4;
//	//temp->link = NULL;
//
//	////������������
//	//Node* temp1 = A;
//	//while (temp1->link != NULL)
//	//{
//	//	temp1 = temp1->link;
//	//}
//	//temp1->link=temp;
//}

	//int* p = new int;
	//delete p;

	//int* s = new int[5];
	////��̬����һ�����飬�����СΪ5
	//delete[] s;

	//int* pi = new int(10);//��̬����һ��int����ʼ��Ϊ1
	//cout << "*pi=" << *pi << endl;

	//int* p1 = (int*)malloc(sizeof(int));
	//*p1 = 20;
	//cout << "*p1=" << *p1 << endl;

//---------------------------------------------------------------------


//826.������(������ʵ�֣��ٶȿ�)
#include<iostream>
//head ��ʾͷ�ڵ���±�
//e[i] ��ʾ�ڵ�i��ֵ
//ne[i] ��ʾ�ڵ�i��nextָ���Ƕ���
//idx �洢��ǰ�Ѿ��õ����ĸ�����±�
//const int N = 100010;
//int head, e[N], ne[N],idx;//ne�����¼��һ��Ԫ�ص��±�
//
////��ʼ��
//void init()
//{
//	head = -1;
//	idx = 0;//idx���Դ�0�ŵ㿪ʼ����
//}
////��x�嵽ͷ�ڵ�
//void add_to_head(int x)
//{
//	e[idx] = x;//��һ������ĵ���±�Ϊ0����k������ĵ���±�Ϊk-1
//	ne[idx] = head;
//	head = idx;
//	idx++;
//}
////��x�嵽"�±���k"�Ľڵ��
//void add(int k, int x)
//{
//	e[idx] = x;
//	ne[idx] = ne[k];
//	ne[k] = idx;
//	idx++;
//}
////���±���k�ĵ����ĵ�ɾ��
//void remove(int k)
//{
//	ne[k] = ne[ne[k]];
//}
//int main()
//{
//	int m;
//	cin >> m;
//	init();
//	while (m--)
//	{
//		int k, x;
//		char op;
//
//		cin >> op;
//		if (op == 'H')
//		{
//			cin >> x;
//			add_to_head(x);
//		}
//		else if (op == 'D')
//		{
//			cin >> k;
//			if (!k) head = ne[head];
//			else remove(k - 1);
//		}
//		else 
//		{
//			cin >> k >> x;
//			add(k - 1, x);
//		}
//	}
//	for (int i = head;i != -1;i = ne[i]) cout << e[i] << ' ';
//	cout << endl;
//	return 0;
//}
//����浥����
#include<iostream>
//using namespace std;
//int m;
//const int N = 100010;
//int head, idx;
//int e[N], en[N];
//void init()
//{
//    head = -1;
//    idx = 0;
//}
//void add_to_head(int x)
//{
//    e[idx] = x;
//    en[idx] = head;
//    head = idx;
//    idx++;
//}
//void add(int k, int x)
//{
//    e[idx] = x;
//    en[idx] = en[k];
//    en[k] = idx;
//    idx++;
//}
//void remove(int k)
//{
//    en[k] = en[en[k]];
//}
//int main()
//{
//    init();
//    cin >> m;
//    while (m--)
//    {
//        int k, x;
//        char c;
//        cin >> c;
//        if (c == 'H')
//        {
//            cin >> x;
//            add_to_head(x);
//        }
//        else if (c == 'I')
//        {
//            cin >> k >> x;
//            add(k - 1, x);
//        }
//        else
//        {
//            cin >> k;
//            if (!k) head = en[head];
//            else remove(k - 1);
//        }
//    }
//    for (int i = head;i != -1;i = en[i]) cout << e[i] << ' ';
//    cout << endl;
//    return 0;
//}

//827.˫����
#include<iostream>
//using namespace std;
//const int N = 100010;
//int m;
//int e[N], l[N], r[N], idx;
//void init()//��ʼ��
//{
//	//0��ʾ��˵㣬1��ʾ�Ҷ˵�
//	r[0] = 1, l[1] = 0;
//	idx = 2;
//}
//void add(int k, int x)//���±�Ϊk�ĵ���Ҳ����x
//{
//	e[idx] = x;
//	r[idx] = r[k];
//	l[idx] = k;
//	l[r[k]] = idx;
//	r[k] = idx;
//	idx++;
//}
//void remove(int k)//ɾ���±�Ϊk�ĵ�
//{
//	r[l[k]] = r[k];
//	l[r[k]] = l[k];
//}
//int main()
//{
//	init();
//	cin >> m;
//	while (m--)
//	{
//		int k, x;
//		char c[2];
//		cin >> c;
//		if (c[0] == 'L')
//		{
//			cin >> x;
//			add(0, x);
//		}
//		else if (c[0] == 'R')
//		{
//			cin >> x;
//			add(l[1], x);
//		}
//		else if (c[0] == 'D')
//		{
//			cin >> k;
//			remove(k + 1);
//		}
//		else if (c[1] == 'L')
//		{
//			cin >> k >> x;
//			add(l[k + 1], x);
//		}
//		else
//		{
//			cin >> k >> x;
//			add(k + 1, x);
//		}
//	}
//	for (int i = r[0];i != 1;i = r[i]) cout << e[i] << ' ';
//	cout << endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//const int N = 100010;
//int m;
//int stk[N], tt;
//int main()
//{
//	cin >> m;
//	while (m--)
//	{
//		string op;
//		int x;
//
//		cin >> op;
//		if (op == "push")
//		{
//			cin >> x;
//			stk[++tt] = x;
//		}
//		else if (op == "pop") tt--;
//		else if (op == "empty") cout << (tt ? "NO" : "YES");
//		else cout << stk[tt] << endl;
//	}
//	return 0;
//}


//#include<cstring>
//#include<stack>
//using namespace std;
//
//class Stack
//{
//private:
//	char A[101];
//	int idx=-1;//���ջ��
//
//public:
//	void Push(int x)
//	{
//		A[++idx] = x;
//	}
//	void Pop()
//	{
//		idx--;
//	}
//	//int Top()
//	//{
//
//	//}
//	//bool IsEmpty();
//};
//
//void Reverse(char[], int n)
//{
//	Stack s;//�������������ʵ�ֵ�ջ
//}
//int main()
//{
//	char c[51];
//	printf("Enter a string");
//	gets_s(c);
//	Reverse(c, strlen(c));
//	printf("Output=%s", c);
//}


//��ջʵ���ַ����ķ�ת
#include<cstring>
#include<stack>
//using namespace std;
////ʱ�临�Ӷ���0(n),�ռ临�Ӷ�Ҳ��O(n)
////ջ��ʹ�õ��ڴ���ַ����е��ַ���������
//void Reverse(char* p, int n)
//{
//	stack<char> s;//�ַ�ջ
//	for (int i = 0;i < n;i++)
//		s.push(p[i]);
//	for (int i = 0;i < n;i++)
//	{
//		p[i] = s.top();
//		s.pop();
//	}
//}
//int main()
//{
//	char c[51];
//	printf("Enter a string:\n");
//	gets_s(c);
//	Reverse(c, strlen(c));
//	printf("Output=%s", c);
//	return 0;
//}


//��ջʵ������ķ�ת
//struct Node
//{
//	int data;
//	Node* link;
//};
//
//stack<struct Node*> s;
//
//Node* head = NULL;//�ڵ�ָ�����
//Node* temp = head;
//
//void Insert(int x)
//{
//	Node* temp = new Node;
//	temp->data = x;
//	temp->link = head;
//	head = temp;
//}
//void Reverse()
//{
//	while (temp != NULL)
//	{
//		s.push(temp);
//		temp = temp->link;
//	}
//
//	Node* temp = s.top();
//	head = temp;
//	s.pop();
//	while (!s.empty())
//	{
//		printf("%d ", temp->data);
//		temp->link = s.top();
//		temp = temp->link;
//		s.pop();
//	}
//	temp = NULL;//�ѷ�׼������������Ǹ��ڵ�������ֶ���Ϊ��
//}
//int main()
//{
//	cout << "How many numbers?" << endl;
//	int n, x;
//	cin >> n;
//	while (n--)
//	{
//		cin >> x;
//		Insert(x);
//	}
//	Reverse();
//	return 0;
//}

/*
  Evaluation Of postfix Expression��׺���ʽ in C++
  Input Postfix expression must be in a desired format.
  Operands������ must be integers and there should be space in between two operands.
  Only '+'  ,  '-'  , '*' and '/'  operators������  are expected.
*/
//#include<iostream>
//#include<stack>
//#include<string>
//
//using namespace std;
//
//// Function to evaluate Postfix expression and return output
//int EvaluatePostfix(string expression);
//
//// Function to perform an operation and return output. 
//int PerformOperation(char operation, int operand1, int operand2);
//
//// Function to verify whether a character is operator symbol or not. 
//bool IsOperator(char C);
//
//// Function to verify whether a character is numeric digit. 
//bool IsNumericDigit(char C);
//
//int main()
//{
//	string expression;
//	cout << "Enter Postfix Expression \n";
//	getline(cin, expression);
//	int result = EvaluatePostfix(expression);
//	cout << "Output = " << result << "\n";
//}
//
//// Function to evaluate Postfix expression and return output
//int EvaluatePostfix(string expression)
//{
//	// Declaring���� a Stack from Standard template library in C++. 
//	stack<int> S;
//
//	for (int i = 0;i < expression.length();i++) 
//	{
//
//		// Scanning each character from left. 
//		// If character is a delimiter�ָ���, move on. 
//		if (expression[i] == ' ' || expression[i] == ',') continue;
//
//		// If character is operator, pop two elements from stack, perform operation and push the result back. 
//		else if (IsOperator(expression[i])) {
//			// Pop two operands. 
//			int operand2 = S.top(); S.pop();
//			int operand1 = S.top(); S.pop();
//			// Perform operation
//			int result = PerformOperation(expression[i], operand1, operand2);
//			//Push back result of operation on stack. 
//			S.push(result);
//		}
//		else if (IsNumericDigit(expression[i])) {
//			// Extract the numeric operand from the string
//			// Keep incrementing i as long as you are getting a numeric digit. 
//			int operand = 0;
//			while (i < expression.length() && IsNumericDigit(expression[i])) {
//				// For a number with more than one digits, as we are scanning from left to right. 
//				// Everytime , we get a digit towards right, we can multiply current total in operand by 10 
//				// and add the new digit. 
//				operand = (operand * 10) + (expression[i] - '0');//�ص�
//				i++;
//			}
//			// Finally, you will come out of while loop with i set to a non-numeric character or end of string
//			// decrement i(�ݼ�i) because it will be incremented in increment section of loop once again. 
//			// We do not want to skip the non-numeric character by incrementing i twice. 
//			i--;
//
//			// Push operand on stack. 
//			S.push(operand);
//		}
//	}
//	// If expression is in correct format, Stack will finally have one element. This will be the output. 
//	return S.top();
//}
//
//// Function to verify whether a character is numeric digit. 
//bool IsNumericDigit(char C)
//{
//	if (C >= '0' && C <= '9') return true;
//	return false;
//}
//
//// Function to verify whether a character is operator symbol or not. 
//bool IsOperator(char C)
//{
//	if (C == '+' || C == '-' || C == '*' || C == '/')
//		return true;
//
//	return false;
//}
//
//// Function to perform an operation and return output. 
//int PerformOperation(char operation, int operand1, int operand2)
//{
//	if (operation == '+') return operand1 + operand2;
//	else if (operation == '-') return operand1 - operand2;
//	else if (operation == '*') return operand1 * operand2;
//	else if (operation == '/') return operand1 / operand2;
//
//	else cout << "Unexpected Error \n";
//	return -1;
//}


//*success ��׺���ʽ����
#include<iostream>
#include<stack>
#include<string>
//using namespace std;
//bool IsOperator(char c);
//bool IsDigit(char c);
//int Calculate(char c, int a, int b);
//
//int func(string expression)
//{
//	stack<int> s;
//	for (int i = 0;i < expression.size();i++)
//	{
//		if (expression[i] == ' ') continue;
//		else if (IsOperator(expression[i]))
//		{
//			int temp2 = s.top(); s.pop();
//			int temp1 = s.top(); s.pop();
//			int res = Calculate(expression[i], temp1, temp2);
//			s.push(res);
//		}
//		else if (IsDigit(expression[i]))
//		{
//			int operand = 0;
//			while (i < expression.size() && IsDigit(expression[i]))
//			{
//				operand = operand * 10 + (expression[i] - '0');
//				i++;
//			}
//			s.push(operand);
//			i--;
//		}
//	}
//	return s.top();
//}
//int main()
//{
//	string postExpression;
//	getline(cin, postExpression);
//	int n = postExpression.size();
//	cout << n << endl;
//	int ret = func(postExpression);
//	cout << ret << endl;
//}
//
//bool IsOperator(char c)
//{
//	if (c == '+' || c == '-' || c == '*' || c == '/') return true;
//	else return false;
//}
//
//bool IsDigit(char c)
//{
//	if (c >= '0' && c <= '9') return true;
//	else return false;
//}
//
//int Calculate(char c, int a, int b)
//{
//	if (c == '+') return a + b;
//	else if (c == '-') return a - b;
//	else if (c == '*') return a * b;
//	else return a / b;
//}

