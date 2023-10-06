#include <stdio.h>
#include <vector>
#include <list>


struct stMonster
{
	int index = 0; // 몬스터 타입
};

bool IsFindMonIndex(const stMonster& mon) 
{
	return mon.index == 13; // 만약 mon.index가 3이면 true, 아니면 false 반환
}


class CShop
{
public:
	int isOpen = false;
};



int main()
{
	// STL ( 고정되지 않은 유동적인 배열 )
	// 배열을 생성하면서 처음부터 공간을 점유하지 않고 필요할 때마다 늘리고 줄일 수 있는 배열
	/* 
	Ex) 1. 벡터(vector) - 스택(Stack) 구조
	 * 연속적인 메모리를 확보한다.
	 * 자신의 요소를 내부의 동적 배열(dynamic array)로 복사한다.
	 * 임의 접근 연산자를 제공([])하기 때문에 어떠한 값에 접근하든 상수 시간(고정된 시간)이 소요된다.
	 * 동적 배열이기 때문에 배열의 중간에 새로 추가하거나 삭제하면 많은 값이 이동해야 하기 때문에 시간이 오래 걸린다.
	 * 중간에 추가하는 것은 오버헤드가 크기 때문에 보통 뒷부분에 추가한다( push_back )
	 * 동적 배열이기 때문에 크기의 확장과 축소가 자유롭지만 재할당 비용은 크다.
	 * 장점 
	 - 임의 접근을 상수시간(고정된 시간)에 가능하므로, 읽기 속도가 매우 빠르다
	 * 단점 
	 - 중간에 값을 추가/제거하는 비용이 크다
	 - 재할당 비용이 크다
	 * 
	*/
	// std:vector<int> : int형에 vector 배열
	// vecint : vector 배열의 이름
	// { 0,1,2,3,4 } : vecint의 초기값 
	//std::vector<int>vecint{ 0,1,2,3,4 };
	//int vectorSize = vecint.size();//벡터의 요소 갯수 반환
	//int vec0 = vecint[0];// []를 통해 명확한 위치를 넣어서 접근 가능
	//int* pData = vecint.data();// 백터 배열 실제 데이터 메모리 공간의 주소(포인터)를 반환
	//int vCap = vecint.capacity();// 데이터 크기 측면에서의 저장 공간 크기를 반환(메모리 크기)
	//printf("vecint capacity=%d", vCap);


	//for (int i = 0; i < vecint.size(); i++)
	//{
	//	printf("vecint[%d]=%d\n", i, vecint[i]);
	//}
	//for (int value : vecint) // for each , 값 복사 방식으로 값을 변경하면 원본 데이터는 변경 안됨.
	//{
	//	value = 0;
	//	printf("vecint=%d\n", value);
	//}
	//for (const int& value : vecint) // const int& -> 변수 값 변경 불가능(value = 0; 불가 )
	//{
	//	//value = 0;
	//	printf("vecint=%d\n", value);
	//}
	//for (int& value : vecint) // 래퍼런스 참조 방식으로 값을 변경하면 원본 데이터 변경 
	//{
	//	value = 1; 
	//	printf("vecint=%d\n", value);
	//}
	//for (const int& value : vecint) // const int& -> 변수 값 변경 불가능(value = 0; 불가 ), 레퍼런스 참조시 const 변수로 참조하면 값 변경 불가능
	//{
	//	printf("vecint=%d\n", value);
	//}

	//std::vector<int>veciint{ 0,1,2,3,4,5,6,7,8,9 };
	//std::vector<int>::iterator veciter = veciint.begin();
	//// veciter++; -> '다음 배열의 위치를 가리키겠다' 라는 의미
	//veciter += 2; //-> 오른쪽으로 2번 이동한 배열의 위치를 가리키겠다.
	//// veciint.end();// 배열이 끝이라는 의미 ( 마지막 배열 x )
	//veciint.pop_back(); // 배열의 마지막 요소를 제거하겠다.
	//veciint.push_back(100); // 배열의 마지막에 '100'이라는 요소를 추가한다.
	//veciint.pop_back(); // 배열의 마지막 요소를 제거하겠다.
	//veciint.push_back(9); // 배열의 마지막에 '100'이라는 요소를 추가한다.
	//printf("veciter=%d\n", *veciter);
	//for (std::vector<int>::iterator iter = veciint.begin(); iter != veciint.end(); ++iter)
	//{
	//	printf("iter=%d\n", *iter);
	//}
	//
	//veciter = veciint.begin();
	//while (veciter != veciint.end())
	//{
	//	printf("While iter = %d\n", *veciter);
	//	veciter++;
	//}
	//printf("veciint size=%d\n", int(veciint.size()));

	//veciter = veciint.begin();
	//while (veciter != veciint.end())
	//{
	//	if (*veciter == 5)
	//	{
	//		veciter = veciint.erase(veciter);//veciter가 가리키고 있는 배열 요소 제거
	//	}
	//	else
	//	{
	//		veciter++;
	//	}
	//}
	//veciter = veciint.begin();
	//while (veciter != veciint.end())
	//{
	//	printf("While iter = %d\n", *veciter);
	//	veciter++;
	//}

	/*
	Ex) 2. 리스트(List)
	* 리스트는 요소들을 양방향 연결리스트의 형태로 관리한다.(Doubly linked List)
	* 리스트 객체는 앵커라 불리는 포인터 2개를 제공하는데 이는 head와 tail을 가르킨다.
	* 새로운 요소를 삽입하기 위해서는 이 포인터(앵커)를 조작한다.
	* 리스트는 임의접근([])을 제공하지 않는다. ( n 번째 요소에 접근하기 위해서는 노드들을 거쳐야 하기 때문에 )
	* 특정 위치에 추가/삭제가 자유롭다. (특정 위치를 찾는 시간은 제외)
	* 제할당 연산이 없다. 연속적인 메모리가 아니기 때문에(메모리가 제공되는 한) 무한히 추가할 수 있다.
	* 장점
	* - 임의의 위치에 요소를 추가하는 것이 자유롭다( 특정 위치를 찾는 시간은 제외 ) -> 쓰기에 매우 강점을 가지고 있다.
	* 단점
	* - 임의접근이 불가능하기 때문에 선형 탐색하여 위치를 찾는다.
	* - 원소간의 연결을 위해 추가적인 메모리를 소모한다( 다음 노드의 포인터 메모리 )
	*/
	
	// std::list<int> -> 리스트로 생성할 변수형
	// listint -> 리스트 이름명
	// {0,1,2,3,4} -> 생성한 리스트의 기본값
	
	//std::list<int>listint{ 0, 1, 2, 3, 4 };

	//for (int value : listint)
	//{
	//	value = 0;
	//	printf("list value=%d\n", value);
	//}

	//for (const int& value : listint)
	//{
	//	printf("list value=%d\n", value);
	//}

	//std::list<int>::iterator listiter = listint.begin();
	//printf("listiter=%d\n", *listiter);
	//for (std::list<int>::iterator iter = listint.begin();iter != listint.end(); ++iter)
	//{
	//	printf("List Value=%d\n", *iter);
	//}

	//listiter = listint.begin();
	//while (listiter != listint.end())
	//{
	//	printf("While List Value = %d\n", *listiter);
	//	listiter++;
	//}
	

	std::list<int>listint{ 10, 7, 31, 22, 75 };
	listint.push_back(100); // 리스트의 뒤쪽에 값 추가
	listint.push_front(200); // 리스트의 앞쪽에 값 추가 연결

	listint.pop_back(); // 리스트위 맨 뒤의 값 제거
	listint.pop_front(); // 리스트의 맨 앞의 값 제거

	// 리스트에서 특정 원소 찾기
	std::list<int>::iterator it = std::find(listint.begin(), listint.end(), 31);
	if (it != listint.end())
	{
		//찾았다.
		printf("Find List value = %d\n", *it);
		// listint.erase(it); // 리스트 안에 있는 특정 원소 제거하기
		int value = 2023;
		// listint.insert(it, value); // 특정 요소 앞쪽에 새로운 요소 끼워넣기
		// listint.emplace(it, 2024); // 특정 요소 앞쪽에 새로운 요소 끼워넣기
	}
	else
	{
		//못 찾았다.
		printf("Find List Fali!\n");
	}

	for (const int& value : listint)
	{
		printf("list value=%d\n", value);
	}

	// 구조체 배열 find_if로 특정 요소 찾기
	std::list<stMonster>arrMon;

	for (int i = 0; i < 5; i++)
	{
		stMonster temp;
		temp.index = i+10;
		arrMon.push_back(temp);
	}

	std::list<stMonster>::iterator moniter;
	moniter = std::find_if(arrMon.begin(), arrMon.end(), IsFindMonIndex);
	// IsFindMonIndex => [](const stMonster& mon){ return mon.index ==3; }

	if (moniter != arrMon.end())
	{
		//찾았다.
		printf("Monster index = %d\n", moniter->index);
	}
	else
	{
		printf("Monster index Find Fali!\n");
		//못찾음
	}

	for (const stMonster& value : arrMon)
	{
		printf("Monster Value=%d\n", value.index);
	}

}