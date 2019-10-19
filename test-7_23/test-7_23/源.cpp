#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
/*
typedef int DataType;

typedef struct Heap
{
	DataType* _array;
	int _capacity;
	int _size;
}Heap;

// 创建堆 
void heapify(int a[], int b,int size){
	while (1){
		int left = 2 * b + 1;
		int right = 2 * b + 2;
		if (left >= size){
			return;
		}
		int min = left;
		if (right<size&&a[right] <a[left]){
			min = right;
		}
		if (a[b] <= a[min]){
			return;
		}
		int t = a[min];
		a[min] = a[b];
		a[b] = t;

	}
}
void CreatHeap(Heap* hp, int* array, int size) {
	for (int i = (size - 2) / 2; i >= 0; i--) {
		while (1){
			int left = 2 * array+ 1;
			int right = 2 * array + 2;
			if (left >= size){
				return;
			}
			int min = left;
			if (right < size&&hp[right] < hp[left]){
				min = hp[right];
			}
			if (hp[array] <= hp[min]){
				return;
			}
			int t = hp[min];
			hp[min] = hp[array];
			a[array] = t;
		}
	}
}

// 向堆中插入值为data的元素 
void InsertHeap(Heap* hp, DataType data){

}

// 删除堆顶元素 
void EraseHeap(Heap* hp);

// 获取堆中有效元素个数 
int SizeHeap(Heap* hp);

// 检测堆是否为空 
int EmptyHeap(Heap* hp);

// 获取堆顶元素 
DataType TopHeap(Heap* hp);

// 销毁堆 
void DestroyHeap(Heap* hp)

*/
//class base1{
//private: int a, b;
//public:
//	base1(int i) : b(i + 1), a(b){}
//	base1() :b(0), a(b){}
//	int get_a(){ return a; }
//	int get_b(){ return b; }
//};
//int main()
//{
//	base1 obj1(11);
//	cout << obj1.get_a() << endl << obj1.get_b() << endl;
//	system("pause");
//	return 0;
//}
//class A
//{
//	char a[2];
//public:
//	virtual void aa(){};
//};
//class B :public virtual A
//{
//	char b[2];
//	char a[2];
//public:
//	virtual void bb(){};
//	virtual void aa(){};
//};
//class C :public virtual B
//{
//	char a[2];
//	char b[2];
//	char c[2];
//public:
//	virtual void cc(){};
//	virtual void aa(){};
//	virtual void bb(){};
//};
//int main()
//{
//	cout << sizeof(A) << endl << sizeof(B) << endl << sizeof(C);
//	system("pause");
//	return 0;
//}

#include <stdio.h>
int getSize(int data[]){
	return sizeof(data);
}

int main(){
	int data1[] = { 1, 2, 3, 4, 5 };
	int size1 = sizeof(data1);

	int* data2 = data1;
	int size2 = sizeof(data2);

	int size3 = getSize(data1);

	printf("%d, %d, %d", size1, size2, size3);
	system("pause");
	return 0;
}