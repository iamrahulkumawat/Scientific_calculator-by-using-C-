#include <iostream>
#include <cmath>
using namespace std;

void arithmetic()
{
	int op = 0;
	float a = 0;
	float b = 0;

	cout << "Select opeartion\n";
	cout << "=========================================================\n";
	cout << "[1] Addition\n";
	cout << "[2] Substraction\n";
	cout << "[3] Product\n";
	cout << "[4] Division\n";
	cout << "=========================================================\n";

	cin >> op;
	cout << "Enter the number:";
	cin >> a;

	cout << "Enter second number:";
	cin >> b;

	cout << "Result: ";

	switch (op)
	{
	case 1:
		cout << (a + b);
		break;
	case 2:
		cout << (a - b);
		break;
	case 3:
		cout << (a * b);
		break;
	case 4:
		cout << (a / b);
		break;
	default:
		cout << "Invalid operation";
		break;
	}
	cout << endl;
}

void trignometric()
{
	int op = 0;
	float val = 0.0;
	cout << "Select\n";
	cout << "[1] Sine\n";
	cout << "[2] Cosine\n";
	cout << "Op: ";
	cin >> op;
	cout << "Enter value: ";
	cin >> val;
	if (op == 1)
	{
		cout << sin(val);
	}
	else if (op == 2)
	{
		cout << cos(val);
	}
	else
	{
		cout << "Invalid operation";
	}
	cout << endl;
}

void exponential()
{
	float base = 0.0;
	float ex = 0.0;

	cout << "Enter base:";
	cin >> base;
	cout << "Enter expnent: ";
	cin >> ex;
	cout << pow(base, ex) << endl;
}

void logarithmic()
{
	float value = 0.0;
	cout << "Enter the value to calculate the log(e): ";
	cin >> value;
	cout << log(value) << endl;
}

void area()
{
	int op = 0;
	float radius, area;
	int edge;
	float x, y, z, s;
	float length, width;

	cout << "Select opeartion\n";
	cout << "=========================================================\n";
	cout << "[1] Circle\n";
	cout << "[2] Cube\n";
	cout << "[3] triangle\n";
	cout << "[4] Rectangle\n";
	cout << "=========================================================\n";

	cin >> op;

	cout << "Result: ";

	switch (op)
	{
	case 1:
		cout << "Enter radius of circle: ";
		cin >> radius;
		area = 3.14 * radius * radius;
		cout << "Area = " << area << endl;
		break;
	default:
		cout << "Invalid operation";
		break;
	case 2:
		cout << "Enter edge of cube: ";
		cin >> edge;
		area = 6 * edge * edge;
		cout << "Area = " << area << endl;
		break;
	case 3:
		cout << "Enter length of three sides of triangle: ";
		cin >> x >> y >> z;

		s = (x + y + z) / 2;
		area = sqrt(s * (s - x) * (s - y) * (s - z));

		cout << "Area = " << area << endl;
		break;
	case 4:
		cout << "Enter length and width of triangle: ";
		cin >> length >> width;

		area = length * width;
		cout << "Area = " << area << endl;
		break;
	}
	cout << endl;
}



void basic()
{
	int op = 0;
	int a , b , max , step , lcm ,n ,i , hcf;

	cout << "Select opeartion\n";
	cout << "=========================================================\n";
	cout << "[1] L.C.M\n";
	cout << "[2] H.C.F\n";
	cout << "[3] cube\n";
	cout << "[4] Square root\n";
	cout << "=========================================================\n";

	cin >> op;

	cout << "Result: ";

	switch (op)
	{
	case 1:
		cout << "Enter num1: ";
		cin >> a;
		cout << "Enter num2: ";
		cin >> b;
		lcm = 0;
		if (a > b)
			max = step = a;
		else
			max = step = b;

		while (1)
		{
			if (max % a == 0 && max % b == 0)
			{
				lcm = max;
				break;
			}

			max += step;
		}

		printf("LCM is %d", lcm);
		break;
	default:
		cout << "Invalid operation";
		break;

	case 2:
		cout << "Enter num1: ";
		cin >> a;
		cout << "Enter num2: ";
		cin >> b;

		for (i = 1; i <= a || i <= b; i++)
		{
			if (a % i == 0 && b % i == 0)
				hcf = i;
		}

		printf("HCF = %d", hcf);
		break;
	case 3:
		cout << "Enter num2: ";
		cin >> n;
		printf("Cube of %d = %d", n, (n * n * n));
		break;
	case 4:
	    cout << "Enter num1: ";
		cin >> a;
		int sqrtNum = sqrt(a); //assign the sqrt value to a variable
		cout << sqrtNum << endl;
		break;
	}
	cout << endl;
}

int main()
{
	int sel = 0;
	char choice = 'y';
	cout << "Advanced Calculator\n";

	cout << "=========================================================\n";
	cout << "[1] Arithmetic\n";
	cout << "[2] Trignometric\n";
	cout << "[3] Exponential\n";
	cout << "[4] Logarithmic\n";
	cout << "[5] Area\n";
	cout << "[6] basic and general\n";
	cout << "=========================================================\n";
	cout << "Your choice:";

	while (choice == 'y')
	{
		cout << "Enter the type of operation you want to calculate\n";
		cin >> sel;

		switch (sel)
		{
		case 1:
			arithmetic();
			break;
		case 2:
			trignometric();
			break;
		case 3:
			exponential();
			break;
		case 4:
			logarithmic();
			break;
		case 5:
			area();
			break;
		case 6:
			basic();
			break;
		default:
			cout << "Invalid Operation";
		}

		cout << "Do you want to continue? y/n" << endl;
		cin >> choice;
		if (choice == 'n')
		{
			break;
		}
	}
	return 0;
}
