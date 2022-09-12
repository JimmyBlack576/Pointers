#include <iostream>

using namespace std;

void f1(int arr1[], int arr2[], int s);

void f2(int arr1[], int arr2[], int s);

void f3(int arr1[], int arr2[], int s);

void f4(int& pa, int& pb);

void f5(int& pc);

void f6(int& pd, int& pe);

void calc(int& pf, char& pi, int& pg);

int f7(int arr1[], int s, int& psum);

void show(int arr1[], int arr2[], int s);


int main()
{
	cout << "Task 1______________________\n\n";
	const int size = 5;
	int arr1[size] = { 1,2,3,4,5 };
	int arr2[size];
	f1(arr1, arr2, size);
	show(arr1, arr2, size);
	system("pause");
	system("cls");

	cout << "Task 2______________________\n\n";
	f2(arr1, arr2, size);
	show(arr1, arr2, size);
	system("pause");
	system("cls");
	cout << "Task 3______________________\n\n";
	f3(arr1, arr2, size);
	show(arr1, arr2, size);
	system("pause");
	system("cls");
	cout << "Task 4______________________\n\n";
	int a,b;
	cin >> a>>b;
	int* pa = &a;
	int* pb = &b;
	f4(*pa,*pb);
	system("pause");
	system("cls");
	cout << "Task 5______________________\n\n";
	int c;
	cin >> c;
	int* pc = &c;
	f5(*pc);
	system("pause");
	system("cls");
	cout << "Task 6______________________\n\n";
	int d = 3;
	int e = 5;
	int* pd = &d;
	int* pe = &e;
	f6(*pd, *pe);
	cout << d << " " << e << endl;
	system("pause");
	system("cls");
	cout << "Task 7______________________\n\n";
	int f, g,h;
	char i;
	int* pf = &f;
	int* pg = &g;
	char* pi = &i;
	do {
		cout << "Enter first digit ->\n"
			<< "Enter symbol(\"+\" \"-\" \"*\" \"/\")->\n"
			<< "Enter second digit ->\n";
		cin >> f >> i >> g;
		calc(*pf, *pi, *pg);
		cout << "Again? 1 - Yes / 0 - No\n";
		cin >> h;
	} while (h != 0);
	system("pause");
	system("cls");
	cout << "Task 8______________________\n\n";
	int sum = 0;
	int* psum = &sum;
	f7(arr1, size,*psum);
	cout << sum << endl;
	system("pause");
	system("cls");
}

void f1(int arr1[], int arr2[], int s) {
	for (int i = 0; i < s; i++) {
		*(arr2 + i) = *(arr1 + i);
	}
}

void f2(int arr1[], int arr2[], int s) {
	for (int i = 0, j = 4; i < s; i++, j--) {
		*(arr1 + i) = *(arr2 + j);
	}
}

void f3(int arr1[], int arr2[], int s) {
	for (int i = 0, j = 4; i < s; i++, j--) {
		*(arr1 + i) = *(arr2 + i);
	}
	for (int i = 0, j = 4; i < s; i++, j--) {
		*(arr2 + i) = *(arr1 + j);
	}
}

void f4(int& pa, int& pb) {
	if (pa > pb) cout << pa << " > " << pb << endl;
	else cout << pb << " > " << pa << endl;
}

void f5(int& pc) {
	if (pc > 0) cout << "More 0\n";
	else cout << "Less 0\n";
}

void f6(int& pd, int& pe) {
	int temp = pd;
	pd = pe;
	pe = temp;
}

void calc(int& pf, char& pi, int& pg) {
	if (pi == char(43)) cout << " = " << pf + pg << endl;
	else if (pi == char(45)) cout << " = " << pf - pg << endl;
	else if (pi == char(42)) cout << " = " << pf * pg << endl;
	else if (pi == char(47)) cout << " = " << pf / pg << endl;

}

int f7(int arr1[], int s, int& psum) {

	for (int i = 0; i < s; i++) {
		psum += *(arr1 + i);
	}
	return psum;
}

void show(int arr1[], int arr2[], int s) {
	for (int i = 0; i < s; i++) {
		cout << *(arr1 + i) << " " << *(arr2 + i) << endl;
	}
}