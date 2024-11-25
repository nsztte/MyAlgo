// ArrayTest.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>		//cout
#include <array>
#include <vector>

using namespace std;

//2행 3열 원소를 출력
//c++ vector 2차원 배열 활용
int main()
{
	//2차원 배열 선언 및 초기화
	vector<vector<int>> mat1(2, vector<int>(3, 0));	//0으로 초기화한 방 세개짜리 벡터 두개

	vector<vector<int>> mat2{
		{1, 2, 3},
		{4, 5, 6}
	};

	//출력
	for (int r = 0; r < mat2.size(); r++)			//벡터의 갯수
	{
		for (int c = 0; c < mat2[r].size(); c++)	//벡터들의 사이즈
		{
			cout << mat2[r][c] << " ";
		}
		cout << endl;
	}
}

//output
//1 2 3
//4 5 6



////2행 3열 원소의 합을 구하라
////c언어 2차원 배열
//int main()
//{
//	int mat[2][3] = {
//		{1, 2, 3},
//		{4, 5, 6}
//	};
//
//	int sum = 0;
//	for (int r = 0; r < 2; r++)
//	{
//		for (int c = 0; c < 3; c++)
//		{
//			sum += mat[r][c];
//		}
//	}
//
//	cout << "sum : " << sum << endl;
//}

////가변형 배열 vector 활용
//int main()
//{
//	vector<int> v1;
//	v1.push_back(10);		//vector에 데이터 추가
//	v1.push_back(20);
//	v1.push_back(30);
//
//	vector<int> v2(10);							//0으로 초기화된 10개의 방 생성(메모리 할당)
//	vector<int> v3(10, 1);						//1로 초기화된 10개의 방 생성
//	vector<int> v4{ 10, 20, 30, 40, 50 };		//5개의 방 생성 및 초기화
//
//	vector<int> v5(v4);							//다른 벡터 값 가져와서 초기화
//	vector<int> v6(v4.begin(), v4.begin() + 3);	//시작과 끝 지정
//
//	for (int i = 0; i < v6.size(); i++)
//	{
//		cout << v6[i] << endl;
//	}
//}

////동적 메모리를 관리하는 클래스
//template<typename T>
//class DynamicArray
//{
//private:
//	unsigned int sz;
//	T* arr;
//
//public:
//	//생성자: 매개변수로 크기를 입력받아 동적 메모리 할당
//	DynamicArray(int n) : sz(n)
//	{
//		arr = new T[sz] {};	//0으로 초기화
//	}
//
//	//소멸자: 할당된 메모리를 해제
//	~DynamicArray()
//	{
//		delete[] arr;
//		cout << "동적 메모리 해제" << endl;
//	}
//
//	unsigned int size()
//	{
//		return sz;
//	}
//
//	T& operator[] (const int i) { return arr[i]; }
//};
//
//
//
//int main()
//{
//	DynamicArray<float> da(5);		//생성자 호출
//	da[0] = 10.5;
//	da[1] = 20.4;
//	da[2] = 30.3;
//
//	for (int i = 0; i < da.size(); i++)
//	{
//		cout << da[i] << endl;
//	}
//}

//동적 메모리 할당 예제
//int main()
//{
//	//동적 메모리 할당
//	int* ptr = new int[3] {};
//	ptr[0] = 10;
//	ptr[1] = 20;
//
//	for (int i = 0; i < 3; i++)
//	{
//		cout << ptr[i] << endl;
//	}
//
//	//동적 메모리 해제
//	delete[] ptr;
//	ptr = nullptr;
//}

////c++언어 배열 구현 - 점수들의 평균을 구하라
//int main()
//{
//	//배열 선언
//	array<int, 5> scores = { 50,60,70,80,90 };
//
//	//합계 구하기
//	int sum = 0;
//	for (int i = 0; i < scores.size(); i++)
//	{
//		sum += scores[i];
//	}
//
//	//평균
//	float avg = (float)sum / scores.size();
//
//	//출력
//	cout << "Average Score: " << avg << endl;
//}


//c언어 배열 구현 - 정수들의 평균을 구하라
//int main()
//{
//	//배열 선언
//	int scores[5] = { 50,60,70,80,90 };
//
//	//int length = sizeof(scores) / sizeof(scores[0]);		//메모리를 차지한 전체 크기 / 메모리 하나의 크기
//	int length = size(scores);
//
//	//합계
//	int sum = 0;
//	for (int i = 0; i < length; i++)
//	{
//		sum += scores[i];
//	}
//
//	//평균
//	float avg = (float)sum / length;
//
//	//출력
//	cout << "Average Score: " << avg << endl;
//}

//int main()
//{
//    std::cout << "Hello Array\n";
//}