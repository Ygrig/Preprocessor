#include <iostream>
using namespace std;

#if 3<10 //������� �������� ������ � ���-�� ������������� ��������
#define PI 3.14
#define MSG "Hello world!"
#endif

#define forever while (true)
#define begin {
#define end }

#define sum(a, b) (a+b)
#define crtarr(t, n, s)  t* n = new t[s]

#define crtmx(t,n,s1,s2) t ** n =  new t * [s1];\
	for (int i=0; i< s1; i++)\
		n[i] = new t[s2]

#if 1 ==2
void hi() {
	cout << "Hello!\n";
}
#elif 2==2
void hi() {
	cout << "Wow!\n";
}
#else
void hi() {
	cout << "Bye!\n";
}
#endif

/*#ifndef sum
const int K = 10;
#else
const int K = 11;
#endif
*/
#ifndef sum //����� ������������
const int K = 10;
#error "������! sum ������ ������������."
#else
const int K = 11;

#endif

#define print(v) cout << #v << " = " << v<< '\n'

#define show(a,b) a ## b

int main() begin
	setlocale(LC_ALL, "Russian");
	int n=1, m=2;
	int xy = 10;

	//��������� �������������
	/*cout << "PI = " << PI << '\n';
	cout << MSG << '\n';

#undef PI
	//cout << PI << '\n'; - ������, �� PI "�����������", ����� ������ ������ ������� ��
*/
	
	//�������� ����������� �����������
	/*n = 0;
	forever begin
		cout << '.';
		n++;
		if (n >= 5)
			break;
		end

	cout << endl;
	*/

	//�������
	/*cout << sum(1, 5.7) << '\n'; //6.7
	crtarr(int, px, 5);
	px[0] = 1;
	delete[]px;
	
	/*int** mx = new int* [10];
	for (int i = 0; i < 10; i++)
		mx[i] = new int[7];

	crtmx(int, mat, 5, 4); //�������� 2-������� �������

	for (int y = 0; y < 5; y++) { //���������� 2-������� �������
		for (int x = 0; x < 4; x++) {
			mat[y][x] = y * x + 1;
			cout << mat[y][x] << '\t';
		}
		cout << '\n';
	}

	for (int i = 0; i < 4; i++) // ������� 2-������� �������
		delete[] mat[i];
	delete[]mat;
	*/

	hi();
	print(n);
	print(m);
	cout << show(x, y) << '\n'; //10

	cout << __LINE__ << endl; //107 �������� ���� �������� �����������, = ������� ����, � ������� ����������
	cout << __LINE__ << endl; //108

	cout << __FILE__ << endl; // ������ ���� � �����

	cout << __DATE__ << endl;//���� ������ �������
	string date = __DATE__; //����� ���������� � ������
	cout << date << '\n';



	return 0;
end