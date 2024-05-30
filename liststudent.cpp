#include<iostream>
#include<string>
using namespace std;
class studentlist {
	string* name;
	int size;
	int noofstudents;
public:
	~studentlist()
	{
		delete[] name;
	}
	studentlist()
	{
		cout << "Enter size of array: ";
		cin >> size;
		name = new string[size];
		noofstudents = 0;
	}
	void insertanitem(string n)
	{
		int index = 0;
		int count=0;
		while (index < noofstudents && n > name[index])
		{
			index++;
		}
		if (noofstudents < size)
		{
			for (int i = noofstudents; i > index; i--)
			{
				name[i] = name[i - 1];
				count++;
			}
			name[index] = n;
			noofstudents++;
			cout<<"No of Shifts: "<<count<<endl;
		}
		else
			cout << "Array is full. Cannot insert more items." << endl;
	}
	void update(int n) 
	{
		if (n < noofstudents&& n >= 0) 
		{
			string a;
			int index = 0;
			cout << "Element stored on subscript " << n << " is: " << name[n] << endl;
			cout << "Enter new element: ";
			cin >> a;
			deleteanyvalue(name[n]);
			insertanitem(a);
		}
		else 
			cout << "No element stored in subscript " << n << endl;
	}

	void print()
	{
		cout << "\n\nDisplayed:\n";
		for (int i = 0; i < noofstudents; i++)
			cout << "\t" << name[i];
		cout << endl << endl;
	}
	void deletefirstvalue()
	{
		int count=0;
		if (noofstudents > 0)
		{
			for (int i = 0; i < noofstudents - 1; i++)
			{
				name[i] = name[i + 1];
				count++;
			}
			noofstudents--;
			cout<<"No of Shifts: "<<count<<endl;
		}
		else
			cout << "Empty Array." << endl;
	}
	void deletelastvalue()
	{
		if (noofstudents > 0)
		{
			name[noofstudents] = " ";
			noofstudents--;
		}
		else
			cout << "Empty Array." << endl;
	}
	void deleteanyvalue(string n)
	{
		bool found = false;
		int index = 0;
		int count=0;
		if (noofstudents > 0)
		{
			for (int i = 0; i < noofstudents && !found; i++)
			{
				if (n == name[i])
				{
					found = true;
					index = i;
				}
			}
			if (!found)
				cout << "Student Not Found. " << endl;
			for (int i = index; i < noofstudents - 1; i++)
			{
				name[i] = name[i + 1];
				count++;
			}
			noofstudents--;
			cout<<"No of Shifts: "<<count<<endl;
		}
		else
			cout << "Empty Array." << endl;
	}
	void find(string n)
	{
		bool found = false;
		for (int i = 0; i < noofstudents && !found; i++)
		{
			if (n == name[i])
			{
				found = true;
				cout << "student found in subscript: " << i << endl;
			}
		}
		if (!found)
			cout << "Student Not Found. " << endl;
	}
	void getvalue(int n)
	{
		if (n < noofstudents && n >= 0)
			cout << name[n] << "Store in Subscript: " << n << endl;
		else
			cout << "Subscript Not Found. " << endl;
	}
};
int main()
{
	studentlist l;
	int choice;
	string n;
	do {
		cout << "\n\n1: Insert Name." << endl;
		cout << "2: Delete Last Name." << endl;
		cout << "3: Delete Any Name." << endl;
		cout << "4: Delete First Name." << endl;
		cout << "5: Get Name by subscript." << endl;
		cout << "6: Find by Name." << endl;
		cout << "7: Display List of Students." << endl;
		cout << "8: Update List." << endl;
		cout << "9: Exit.\n\n" << endl;
		cout << "Choose No. ";
		cin >> choice;
		if (choice == 1)
		{
			cout << "Enter Name:";
			cin >> n;
			l.insertanitem(n);
		}
		else if (choice == 2)
		{
			l.deletelastvalue();
			l.print();
		}
		else if (choice == 3)
		{
			cout << "Enter Name:";
			cin >> n;
			l.deleteanyvalue(n);
			l.print();
		}
		else if (choice == 4)
		{
			l.deletefirstvalue();
			l.print();
		}
		else if (choice == 5)
		{
			int c;
			cout << "Enter Subscript:";
			cin >> c;
			l.getvalue(c);
		}
		else if (choice == 6)
		{
			cout << "Enter Name:";
			cin >> n;
			l.find(n);
		}
		else if (choice == 7)
		{
			l.print();
		}
		else if (choice == 8)
		{
			int c;
			cout << "Enter Subscript:";
			cin >> c;
			l.update(c);
			l.print();
		}
	} while (choice != 9);
}
