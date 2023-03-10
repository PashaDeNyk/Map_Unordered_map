#include"Unordered_Map.h"

Unordered_Map::Unordered_Map()
{

}

Unordered_Map::~Unordered_Map()
{

}

void Unordered_Map::ChooseSize(int choose)
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

void Unordered_Map::Clear()
{
	m.clear();
}

void Unordered_Map::Insert()
{
	for (int i = 0; i < size; i++)
	{
		m.insert(pair< int, int>(i, i));
	}
}

void Unordered_Map::EnterKey()
{
	do {
		cout << "Enter key: ";
		cin >> key;
		cout << endl;
	} while (key<0 or key>size);
}

void Unordered_Map::Find()
{
	key = rand() % size;
	it = m.find(key);
}

void Unordered_Map::Insert_or_Assign()
{
	for (int i = 0; i < size; i++)
	{
		m.insert_or_assign(i, size - i);
	}
}

void Unordered_Map::Emplace()
{
	for (int i = 0; i < size; i++)
		m.emplace(pair< int, int>(i, i));
}

void Unordered_Map::Emplace_Hint()
{
	auto it = m.begin();
	for (int i = size; i > 0; --i)
	{
		m.emplace_hint(it, i, 'd');
		it = m.begin();
	}
}

void Unordered_Map::Try_Emplace()
{
	for (int i = 0; i < size; i++)
		m.try_emplace(i, i);
}

void Unordered_Map::Erase()
{
	for (int i = 0; i < size; i++)
		m.erase(i);
}

void Unordered_Map::CreateSwapMap()
{
	m0.insert(pair<int, int>(1, 1));
}

void Unordered_Map::Swap()
{
	m.swap(m0);
}

void Unordered_Map::Extract()
{
	for (int i = 0; i < size; i++)
		auto trash = m.extract(i);
}

void Unordered_Map::CreateSameMapForMerge()
{
	for (int i = 0; i < size; i++)
	{
		m_merge.insert(pair< int, int>(i, i));
	}
}

void Unordered_Map::Merge()
{
	m.merge(m_merge);
}

#pragma region HASH
void Unordered_Map::Load_Factor()
{
	cout << "LOAD FACTOR " << m.load_factor() << endl;
}

void Unordered_Map::Max_Load_Factor()
{
	cout << "MAX LOAD FACTOR " << m.max_load_factor() << endl;
}

void Unordered_Map::Rehash()
{
	m.rehash(1);
}

void Unordered_Map::Reserve()
{
	m.reserve(1);
}
#pragma endregion

void Unordered_Map::Hash_Function()
{
	m.hash_function();
}

void Unordered_Map::Key_Eq()
{
	m.key_eq();
}

void Unordered_Map::Run()
{
	int sum = 0;
	for (auto i = m.begin(); i != m.end(); i++)
		sum++;
}