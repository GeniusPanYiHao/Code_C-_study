#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//:ֻ���ڶ��ϴ����������
//��1.���캯��˽�л�
//:2.�ṩһ�����е�static�ӿڴ�������Ķ���
//:3.������
class HeapOnly
{
public:
	static HeapOnly* getHeapOnly()
	{
		/*HeapOnly *ph = new HeapOnly;
		copy:ջ��
		HeapOnly copy(*ph);*/
		return new HeapOnly;
	}
	
private:
	HeapOnly()
	{
		cout << "HeapOnly()" << endl;
	}
	HeapOnly(const HeapOnly& h);
//:��������ֻ������ʵ��
	//:
};
//A ga;
int main()
{
	//A a;
	HeapOnly* pa = HeapOnly::getHeapOnly();
	//:copy:ջ��
//	HeapOnly copy(*pa);
	return 0;
}

ֻ����ջ�ϴ����������
1:���캯��˽�л�
2.�ṩһ�����е�static�ӿڴ�������
class StackOnly
{
public:
	static StackOnly getStackOnly()
	{
		return StackOnly();
	}

private:
	StackOnly()
	{
		cout << "StackOnly()" << endl;
	}
};

int main()
{
	//StackOnly* ps = new StackOnly;
	StackOnly s = StackOnly::getStackOnly();
}




//����:�����һ��ʹ��ʱ����
//1.���캯��˽��
//2.������
//3.�ṩ���е�static�ӿڣ��ӿڵ�һ�ε���ʱ��������
//4.����һ��staticָ��
//5.�̰߳�ȫ��˫���
//#include<mutex>
//#include<thread>
//class singleton
//{
//public:
//	static singleton* getInstance()
//	{
//		//˫���
//		//�ⲿ��飺���Ч��
//		if (_pInstance == nullptr)
//		{
//			_mtx.lock;
//			//�ڲ���飬��֤�̰߳�ȫ
//			if (_pInstance == nullptr)
//			{
//				_pInstance = new singleton;
//			}
//			_mtx.unlock;
//		}
//		return _pInstance;
//
//	}
//private:
//	singleton()
//	{
//		cout << "singleton" << endl;
//	}
//	//��������
//	singleton(const singleton* s);
//	static singleton* _pInstance;
//	static mutex _mtx;
//};
//
//singleton* singleton::_pInstance = nullptr;
//mutex singleton::_mtx;
//
//
//int main()
//{
//	singleton* ps = singleton::getInstance();
//	singleton* ps1 = singleton::getInstance();
//	singleton* ps2 = singleton::getInstance();
//	singleton* ps3 = singleton::getInstance();
//	return 0;
//}
