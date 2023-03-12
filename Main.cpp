#include<iostream>
#include<chrono>
#include<string>
#include"map.h"
#include"Unordered_Map.h"
#include"Map_String.h"
#include"Unordered_Map_String.h"


std::chrono::time_point<std::chrono::system_clock> m_StartTime;
std::chrono::time_point<std::chrono::system_clock> m_EndTime;

void CycleMap(Map map)
{
	int choose = 0;
	std::cout << "Choose: 1 - 250k int 2 - 2.5m int  3 - 25m int" << endl;
	do {
		cin >> choose;
	} while (choose < 0 or choose>3);
	map.ChooseSize(choose);

	for (int i = 0; i < 5; i++)
	{
		std::cout << i + 1 << " cycle" << endl;

		m_StartTime = std::chrono::system_clock::now();
		map.Insert();
		std::cout << "MAP Insert ";
		m_EndTime = std::chrono::system_clock::now();
		std::cout << "Milliseconds: " << std::chrono::duration_cast<std::chrono::milliseconds>(m_EndTime - m_StartTime).count() << endl;

		m_StartTime = std::chrono::system_clock::now();
		for (int i = 0; i < 10000000; i++)
			map.Run();
		std::cout << "MAP Run ";
		m_EndTime = std::chrono::system_clock::now();
		std::cout << "Milliseconds: " << std::chrono::duration_cast<std::chrono::milliseconds>(m_EndTime - m_StartTime).count() << endl;

		m_StartTime = std::chrono::system_clock::now();
		for (int i = 0; i < 10000000; i++)
			map.Find();
		std::cout << "MAP Find ";
		m_EndTime = std::chrono::system_clock::now();
		std::cout << "Milliseconds: " << std::chrono::duration_cast<std::chrono::milliseconds>(m_EndTime - m_StartTime).count() << endl;

		m_StartTime = std::chrono::system_clock::now();
		map.Extract();
		std::cout << "MAP Extract ";
		m_EndTime = std::chrono::system_clock::now();
		std::cout << "Milliseconds: " << std::chrono::duration_cast<std::chrono::milliseconds>(m_EndTime - m_StartTime).count() << endl;

		m_StartTime = std::chrono::system_clock::now();
		map.Insert_or_Assign();
		std::cout << "Map Insert_or_Assign ";
		m_EndTime = std::chrono::system_clock::now();
		std::cout << "Milliseconds: " << std::chrono::duration_cast<std::chrono::milliseconds>(m_EndTime - m_StartTime).count() << endl;

		map.Create_Swap_Map();
		m_StartTime = std::chrono::system_clock::now();
		for (int i = 0; i < 100000000; i++)
			map.Swap();
		std::cout << "MAP Swap ";
		m_EndTime = std::chrono::system_clock::now();
		std::cout << "Milliseconds: " << std::chrono::duration_cast<std::chrono::milliseconds>(m_EndTime - m_StartTime).count() << endl;

		m_StartTime = std::chrono::system_clock::now();
		map.Clear();
		std::cout << "MAP Clear ";
		m_EndTime = std::chrono::system_clock::now();
		std::cout << "Milliseconds: " << std::chrono::duration_cast<std::chrono::milliseconds>(m_EndTime - m_StartTime).count() << endl;

		m_StartTime = std::chrono::system_clock::now();
		map.Emplace();
		std::cout << "MAP Emplace ";
		m_EndTime = std::chrono::system_clock::now();
		std::cout << "Milliseconds: " << std::chrono::duration_cast<std::chrono::milliseconds>(m_EndTime - m_StartTime).count() << endl;

		m_StartTime = std::chrono::system_clock::now();
		map.Emplace_Hint();
		std::cout << "MAP Emplace_Hint ";
		m_EndTime = std::chrono::system_clock::now();
		std::cout << "Milliseconds: " << std::chrono::duration_cast<std::chrono::milliseconds>(m_EndTime - m_StartTime).count() << endl;

		m_StartTime = std::chrono::system_clock::now();
		map.Try_Emplace();
		std::cout << "MAP Try_Emplace ";
		m_EndTime = std::chrono::system_clock::now();
		std::cout << "Milliseconds: " << std::chrono::duration_cast<std::chrono::milliseconds>(m_EndTime - m_StartTime).count() << endl;

		m_StartTime = std::chrono::system_clock::now();
		map.Erase();
		std::cout << "MAP Erase ";
		m_EndTime = std::chrono::system_clock::now();
		std::cout << "Milliseconds: " << std::chrono::duration_cast<std::chrono::milliseconds>(m_EndTime - m_StartTime).count() << endl;

		map.CreateSameMapForMerge();
		map.Insert();
		m_StartTime = std::chrono::system_clock::now();
		map.Merge();
		std::cout << "MAP Merge ";
		m_EndTime = std::chrono::system_clock::now();
		std::cout << "Milliseconds: " << std::chrono::duration_cast<std::chrono::milliseconds>(m_EndTime - m_StartTime).count() << endl;

		map.Clear();
		map.Erase();
	}
}

void CycleUnorderedMap(Unordered_Map un_map)
{
	int choose = 0;
	std::cout << "Choose: 1 - 250k int 2 - 2.5m int  3 - 25m int" << endl;
	do {
		cin >> choose;
	} while (choose < 0 or choose>3);
	un_map.ChooseSize(choose);

	for (int i = 0; i < 5; i++)
	{
		std::cout << i + 1 << " cycle" << endl;
		m_StartTime = std::chrono::system_clock::now();
		un_map.Insert();
		std::cout << "UN_MAP Insert ";
		m_EndTime = std::chrono::system_clock::now();
		std::cout << "Milliseconds: " << std::chrono::duration_cast<std::chrono::milliseconds>(m_EndTime - m_StartTime).count() << endl;

		m_StartTime = std::chrono::system_clock::now();
		for (int i = 0; i < 10000000; i++)
			un_map.Run();
		std::cout << "UN_MAP Run ";
		m_EndTime = std::chrono::system_clock::now();
		std::cout << "Milliseconds: " << std::chrono::duration_cast<std::chrono::milliseconds>(m_EndTime - m_StartTime).count() << endl;

		m_StartTime = std::chrono::system_clock::now();
		for (int i = 0; i < 10000000; i++)
			un_map.Find();
		std::cout << "UN_MAP Find ";
		m_EndTime = std::chrono::system_clock::now();
		std::cout << "Milliseconds: " << std::chrono::duration_cast<std::chrono::milliseconds>(m_EndTime - m_StartTime).count() << endl;

		m_StartTime = std::chrono::system_clock::now();
		un_map.Extract();
		std::cout << "UN_MAP Extract ";
		m_EndTime = std::chrono::system_clock::now();
		std::cout << "Milliseconds: " << std::chrono::duration_cast<std::chrono::milliseconds>(m_EndTime - m_StartTime).count() << endl;

		m_StartTime = std::chrono::system_clock::now();
		un_map.Insert_or_Assign();
		std::cout << "UN_MAP Insert or assign ";
		m_EndTime = std::chrono::system_clock::now();
		std::cout << "Milliseconds: " << std::chrono::duration_cast<std::chrono::milliseconds>(m_EndTime - m_StartTime).count() << endl;

		m_StartTime = std::chrono::system_clock::now();
		un_map.Clear();
		std::cout << "UN_MAP Clear ";
		m_EndTime = std::chrono::system_clock::now();
		std::cout << "Milliseconds: " << std::chrono::duration_cast<std::chrono::milliseconds>(m_EndTime - m_StartTime).count() << endl;

		m_StartTime = std::chrono::system_clock::now();
		un_map.Emplace();
		std::cout << "UN_MAP Emplace ";
		m_EndTime = std::chrono::system_clock::now();
		std::cout << "Milliseconds: " << std::chrono::duration_cast<std::chrono::milliseconds>(m_EndTime - m_StartTime).count() << endl;

		m_StartTime = std::chrono::system_clock::now();
		un_map.Emplace_Hint();
		std::cout << "UN_MAP Emplace hint ";
		m_EndTime = std::chrono::system_clock::now();
		std::cout << "Milliseconds: " << std::chrono::duration_cast<std::chrono::milliseconds>(m_EndTime - m_StartTime).count() << endl;

		m_StartTime = std::chrono::system_clock::now();
		un_map.Try_Emplace();
		std::cout << "UN_MAP Try emplace ";
		m_EndTime = std::chrono::system_clock::now();
		std::cout << "Milliseconds: " << std::chrono::duration_cast<std::chrono::milliseconds>(m_EndTime - m_StartTime).count() << endl;

		m_StartTime = std::chrono::system_clock::now();
		un_map.Erase();
		std::cout << "UN_MAP Erase ";
		m_EndTime = std::chrono::system_clock::now();
		std::cout << "Milliseconds: " << std::chrono::duration_cast<std::chrono::milliseconds>(m_EndTime - m_StartTime).count() << endl;

		un_map.CreateSwapMap();
		un_map.Insert();
		m_StartTime = std::chrono::system_clock::now();
		for (int i = 0; i < 100000000; i++)
			un_map.Swap();
		std::cout << "UN_MAP Swaped ";
		m_EndTime = std::chrono::system_clock::now();
		std::cout << "Milliseconds: " << std::chrono::duration_cast<std::chrono::milliseconds>(m_EndTime - m_StartTime).count() << endl;

		un_map.CreateSameMapForMerge();
		un_map.Insert();
		m_StartTime = std::chrono::system_clock::now();
		un_map.Merge();
		std::cout << "UN_MAP Merge ";
		m_EndTime = std::chrono::system_clock::now();
		std::cout << "Milliseconds: " << std::chrono::duration_cast<std::chrono::milliseconds>(m_EndTime - m_StartTime).count() << endl;

		un_map.Load_Factor();
		un_map.Max_Load_Factor();
		un_map.Clear();
		un_map.Erase();

	}
}

void CycleStringMap(Map_String map_str)
{
	int choose = 0;
	std::cout << "Choose: 1 - 250k int 2 - 2.5m int  3 - 25m int" << endl;
	do {
		cin >> choose;
	} while (choose < 0 or choose>3);


	map_str.ChooseSize(choose);
	std::cout << "String Map Insert: ";
	m_StartTime = std::chrono::system_clock::now();
	map_str.Insert();
	m_EndTime = std::chrono::system_clock::now();
	std::cout << "Milliseconds: " << std::chrono::duration_cast<std::chrono::milliseconds>(m_EndTime - m_StartTime).count() << endl;

	std::cout << "String Map Find: ";
	m_StartTime = std::chrono::system_clock::now();
	for (int i = 0; i < 10000000; i++)
		map_str.Find();
	m_EndTime = std::chrono::system_clock::now();
	std::cout << "Milliseconds: " << std::chrono::duration_cast<std::chrono::milliseconds>(m_EndTime - m_StartTime).count() << endl;

	std::cout << "Run Map: ";
	m_StartTime = std::chrono::system_clock::now();
	for (int i = 0; i < 10000000; i++)
		map_str.Run();
	m_EndTime = std::chrono::system_clock::now();
	std::cout << "Milliseconds: " << std::chrono::duration_cast<std::chrono::milliseconds>(m_EndTime - m_StartTime).count() << endl;
}

void CycleStringUnorderedMap(Unordered_Map_String un_map_str)
{
	int choose = 0;
	std::cout << "Choose: 1 - 250k int 2 - 2.5m int  3 - 25m int" << endl;
	do {
		cin >> choose;
	} while (choose < 0 or choose>3);

	un_map_str.ChooseSize(choose);
	std::cout << "String Unordered Map Insert: ";
	m_StartTime = std::chrono::system_clock::now();
	un_map_str.Insert();
	m_EndTime = std::chrono::system_clock::now();
	std::cout << "Milliseconds: " << std::chrono::duration_cast<std::chrono::milliseconds>(m_EndTime - m_StartTime).count() << endl;

	for (int i = 0; i < 5; i++)
	{
		std::cout << i + 1 << " cycle" << endl;
		std::cout << "String Unordered Map Find: ";
		m_StartTime = std::chrono::system_clock::now();
		for (int i = 0; i < 10000000; i++)
			un_map_str.Find();
		m_EndTime = std::chrono::system_clock::now();
		std::cout << "Milliseconds: " << std::chrono::duration_cast<std::chrono::milliseconds>(m_EndTime - m_StartTime).count() << endl;
	}
	std::cout << "Run Unordered Map: ";
	m_StartTime = std::chrono::system_clock::now();
	for (int i = 0; i < 10000000; i++)
		un_map_str.Run();
	m_EndTime = std::chrono::system_clock::now();
	std::cout << "Milliseconds: " << std::chrono::duration_cast<std::chrono::milliseconds>(m_EndTime - m_StartTime).count() << endl;
}

int main()
{
	Map map;
	Unordered_Map un_map;
	Map_String map_str;
	Unordered_Map_String un_map_str;
	srand(time(NULL));

	int choose_map = 0;
	std::cout << "Choose: 1 - map 2 - unordered map 3 - map string 4 - unordered map string" << endl;
	do {
		cin >> choose_map;
	} while (choose_map < 1 or choose_map>4);

	switch (choose_map)
	{
	case 1:
	{
		CycleMap(map);
	}break;
	case 2:
	{
		CycleUnorderedMap(un_map);
	}break;
	case 3:
	{
		CycleStringMap(map_str);
	}break;
	case 4:
	{
		CycleStringUnorderedMap(un_map_str);
	}break;
	}

	return 0;
}