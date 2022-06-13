#include <iostream>

using namespace std;

int main()
{
	/*
	* �����Ͷ�?
	* - �ٸ� ����, ����ü, Ŭ���� �� ��ü�� ����Ű�� ���� 
	* TypeName *ptrVar
	* TypeName : ����ų ���� �ڷ���
	* ptrVar : ������ ������ �̸�
	* 
	* ptrVar = &var;
	* *ptrVar = value;
	* & : �ּ� ��� ������
	* *ptrVar : ������ ptrVar�� ����Ű�°�
	*/

	int a = 10;
	int* ptr;

	ptr = &a;
	cout << "ptr�� ����Ű�� �� : " << *ptr << endl;
	*ptr = 20;
	cout << "���� a�� �� : " << a << endl;

	/*
	* ���� �޸� �Ҵ�
	* - ������ �޸𸮿� ������ �Ҵ�
	* new �����ڸ� �̿��ؼ� ����
	* delete �����ڸ� �̿��ؼ� �ݳ�
	* 
	* ptrVar = new TypeName;
	* ptrVar = new TypeName[n];
	* 
	* delete ptrVar;
	* delete [] ptrVar;
	*/

	int* intPtr;
	intPtr = new int;
	*intPtr = 10;

	delete intPtr;
	intPtr = nullptr;// C������ NULL == 0�� ��������� C++������ nullptr Ű���� ���

	int* intArrPtr;
	intArrPtr = new int[4];
	*intArrPtr = 10;
	*(intArrPtr + 1) = 20;
	intArrPtr[2] = 30;

	delete [] intArrPtr;
	intArrPtr = nullptr;

	/*
	* L-value ���� ����
	* 
	* - ������� �Ϲ� ������ ������
	* - �ʱ�ȭ�� ���� �ݵ�� ����� �ʿ���( �ƹ��͵� �������� ���� ���°� �߻����� �ʴ´� )
	* - ���� ������ ������ ����� �����Ҽ� ����
	*/
	
	int a = 10, b = 20;
	int &aRef = a;
	cout << aRef << endl;
	aRef = 100;
	aRef = b;

	/*
	//������ ��� ����
	int a = 10, b = 20;
	int *aRef = &a;
	cout << *aRef << endl;
	*aRef = 100;
	*aRef = b;
	*/

	int x{ 10 };
	const int& xRef = x;
	cout << "xRef = " << xRef << endl;
	//xRef += 10;//error - const�� ���� �Ұ�


}