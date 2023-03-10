#include"map.h"

Map::Map()
{

}

Map::~Map()
{

}

void Map::ChooseSize(int choose)
{
	switch (choose)
	{
	case 1:
	{
		size = 250000;
	}break;
	case 2:
	{
		size = 2500000;
	}break;
	case 3:
	{
		size = 25000000;
	}break;
	}
	cout << "Choose done" << endl;
}

void Map::Insert()
{
	for (int i = 0; i < size; i++)
	{
		m.insert(pair< int, int>(i, i));
	}
}

void Map::Insert_or_Assign()
{
	for (int i = 0; i < size; i++)
	{
		m.insert_or_assign(i, size - i);
	}
}

void Map::EnterKey()
{
	do {
		cout << "Enter key: ";
		cin >> key;
		cout << endl;
	} while (key<0 or key>size);
}

void Map::Find()
{
	key = rand() % size;
	it = m.find(key);
}

void Map::Create_Swap_Map()
{
	m0.insert(pair<int, int>(1, 1));
}

void Map::Swap()
{
	m.swap(m0);
}

void Map::Clear()
{
	m.clear();
}

void Map::Emplace()
{
	for (int i = 0; i < size; i++)
		m.emplace(pair< int, int>(i, i));
}

void Map::Emplace_Hint()
{
	auto it = m.begin();
	for (int i = size; i > 0; --i)
	{
		m.emplace_hint(it, i, 'd');
		it = m.begin();
	}
}

void Map::Try_Emplace()
{
	for (int i = 0; i < size; i++)
		m.try_emplace(i, i);
}

void Map::Erase()
{
	for (int i = 0; i < size; i++)
		m.erase(i);
}

void Map::Extract()
{
	for (int i = 0; i < size; i++)
		auto trash = m.extract(i);
}

void Map::CreateSameMapForMerge()
{
	for (int i = 0; i < size; i++)
	{
		m_merge.insert(pair< int, int>(i, i));
	}
}

void Map::Merge()
{
	m.merge(m_merge);
}

void Map::Run()
{
	int sum = 0;
	for (auto i = m.begin(); i != m.end(); i++)
		sum++;
}