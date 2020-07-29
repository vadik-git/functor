
//HASH TABLE
#include <iostream>
#include <string>

#define SIZE 29

using namespace std;

class  String
{
public:
	String*next;
	string key;
	string word;


	String()
	{
		this->next = NULL;
	}
	String(string key, string word)
	{
		this->key = key;
		this->word = word;
		this->next = NULL;
	}


};

class HashTable
{
	String *table[SIZE];
	static int hash(string str)
	{
		int asciisum = 0;
		for (int i = 0; i < str.length(); i++)
		{
			asciisum += str[i];
		}
		return asciisum % SIZE;
	}

public:

	HashTable()
	{
		for (int i = 0; i < SIZE; i++)
		{
			table[i] = NULL;
		}
	}




	void push(string key, string word)
	{
		int hashNumber = hash(key);
		String*string = new String(key, word);
		String *tmp = table[hashNumber];
		if (tmp == NULL)
		{
			table[hashNumber] = string;
			return;
		}

		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = string;
	}


	String* find(string key)
	{
		int hashNumber = hash(key);
		String*res = table[hashNumber];
		if (!res)
		{
			cout << "Element not found" << endl;
			return NULL;
		}
		while (res->key != key)
		{
			if (!res->next)
			{
				cout << "Element not found" << endl;
				break;
			}
			res = res->next;
		}
		return res;
	}
};

int main()
{
	HashTable newTable;

	newTable.push("1", "vadim");
	newTable.push("2", "sasha");
	newTable.push("3", "vaniya");
	String* search = newTable.find("3");
	if (search)
	{
		cout << search->word << endl;
	}
	system("pause");
	return 0;
}