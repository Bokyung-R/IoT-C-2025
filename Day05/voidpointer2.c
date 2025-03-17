///*
//	void pointer - 
//*/
//
//#include<stdio.h>
//
//int main() {
//	int n = 10;
//	double db = 3.14;
//
//	//int pn = &n;
//	//double* pdb = &db;
//	void* p;
//
//	p = &n;
//	printf("*p: %d\n", *(int*)p);	// void 타입의 p 명시적으로 타입 제시해줘야 사용
//
//	(double*)p = &db;				// 이렇게 해도 형변환이 이루어지지않음
//	printf("*p: %.1lf\n", *(double*)p);	
//
//	return 0;
//}