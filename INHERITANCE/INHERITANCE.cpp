#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;

class Person 
{
public:
	string name;
	int age;
	string gender;
	int weight;

	void SetInfo()
	{
		cout << "Введите имя: ";cin >> name;
		cout << "Введите возраст: ";cin >> age;
		cout << "Введите пол: ";cin >> gender;
		cout << "Введите вес: ";cin >> weight;
	}

	void GetInfo()
	{
		cout << "Имя: " << name << endl;
		cout << "Возраст: " << age << endl;
		cout << "Пол: " << gender << endl;
		cout << "Вес: " << weight << endl;
	}
};

class Student : public Person
{
public:
	int year;
	void SetYear()
	{
		cout << "Введите год: "; cin >> year;
	}
	void GetYear()
	{
		cout << "Год: " << year << endl;
	}
};


class Human
{
public:
	string name;
	string status;
	bool statusAccess;
	
	void Set()
	{
		cout << "Введите имя: "; cin >> name;
		cout << "Введите статус: "; cin >> status;
		if (status == "Учитель")
		{
			statusAccess = true;
		}
		else
		{
			statusAccess = false;
		}
	}
};



class Access : public Human
{
public:
	
	void IsAccess()
	{
		if (statusAccess)
		{
			cout << "Доступ есть!" << endl;
		}
		else
		{
			cout << "Доступа нет!" << endl;
		}
	}
	
};


int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Задание №1\n\nСоздать класс Person(человек) с полями : имя, возраст, пол и вес.Определить методы для установки и получения имени, изменения возраста и веса.\n\nСоздать производный класс Student(студент).Определить методы установления и получения этого значения. (Например, после года обучения)" << endl;
	Person person;
	person.SetInfo();
	printf("\n\n");
	person.GetInfo();
	printf("\n\n");
	Student student;
	student.SetInfo();
	student.SetYear();
	printf("\n\n");
	student.GetInfo();
	student.GetYear();

	
	cout << "\n\nЗадание №2\n\nПопрактикуйтесь в проектировании и кодировании программы.Представим университет - в нём есть студенты, преподаватели, научные и технические работники.У всех этих преподавателей должен быть пропуск.Например в зависимости от типа пропуска, доступны различные скидки в столовой или доступен проход к определенным корпусам университета.Попробуйте смоделировать данную программу на языке С++ с использованием изученных нами концепций ООП." << endl;

	Human human;
	human.Set();
	Access access;
	access.IsAccess();

	
	
	system("pause");
	return 0;
}