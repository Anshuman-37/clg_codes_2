
#include "pch.h"
#include <iostream>
#include <string>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <vector>
using namespace std;

/*class student 
{
	int roll_no;
	string name;
public:
	student()
	{
		roll_no = 10;
		name = "Ankur Garg";
		cout << roll_no << endl;
		cout << name << endl;
	}
};
class exam 
{
	int total_marks;
public:
	exam()
	{
		total_marks = 490;
		cout << total_marks << endl;
	}
};
class result : public exam , public student 
{
	float result_ber0;
	//exam ex1;
public:
	result()
	{
		result_ber0 = 100;
	//	result_ber0 = static_cast<float>( ex1.total_marks /5);	
		cout << result_ber0;
	}
};
//-----17 and 18 above 

class cordinates  
{
public:
	int x;
	int y;
	cordinates()
	{
		cout << " enter the cordinates " << endl;
		cin >> x;
		cin >> y;
		cout << "The cordinates of the point u entered are (" <<x<<" , "<<y<<") "<< endl;
	}
};
class Distance : public cordinates  
{
	int dis;
public:
	Distance()
	{
		dis = 0;
	}
	void cal_dis(int x,int y)
	{
		int sum = pow(x, 2) + pow(y, 2);
		dis = sqrt(sum);
		cout << "The distance from the origin is " <<dis<< endl;
	}
};
// -code 20
class publication 
{
	string title;
	float price;
public:
	void publi_getter()
	{
		cout << "Enter the title of the book";
		cin >> title;
		cout << "The price of this publication";
		cin >> price;
	};
	void publi_setter()
	{
		cout << "The Title of the book is \t" << title << endl;
		cout << "The price of the book is \t" << price << endl;
	}

};
class book : public publication
{
	
	int no_pages;
public:
	void book_getter()
	{
		cout << "The pages of the publication's book";
		cin >> no_pages;
	}
	void book_setter()
	{
		cout << endl <<"The no of the pages of this publication's book is " << no_pages;
	}

};
class tape : public publication
{
	int vids_len;
public:
	void book_getter()
	{
		cout << "The videos length of the publication's anime/movie/tvseries";
		cin >> vids_len;
	}
	void book_setter()
	{
		cout << endl << "The video length of this publication's anime/movie/tvseries" << vids_len;
	}
};
//--code 21

class Patient
{
	string name;
	int pat_no;
	string disease;
public:
	void setter()
	{
		cout << "Enter the name of the patient";
		cin >> name;
		cout << "Enter the pat_no";
		cin >> pat_no;
		cout << "Enter the type of the disease to the pat";
		cin >> disease;
	}
	void getter()
	{
		cout << "The name of the patient is "<<name<<endl;
		cout << "The no of the patient is " << pat_no << endl;
		cout << "The type of the disease happend to the pat is " << disease << endl;
	}
};
class age_pat : public Patient 
{
	int age;
public:
	bool flag=true;
	void age_setter()
	{
		cout << "Enter the age of the pat";
		cin >> age;
	}
	void age_getter() 
	{
		cout << "The age of the pateint is"<< age;
	}
	void set_flag()
	{
		if (age>12)
		{
			flag = false;
		}
	}
};
//code---22 Compile Time and Ploymorphism is down

class shape
{
	int side;
public:
	float ar;
	shape(int a)
	{
		side = a;
	}
	virtual void area()
	{
		ar = static_cast<float> ((side*side)/2);
		cout << "The area is " << ar << endl;
	}
	virtual int getside()
	{
		return side;
	}
};
class square : public shape
{
public:
	square(int a) : shape(a){}
	void area()
	{
		ar = static_cast<float> (pow(getside(), 2));
		cout << "The area is " << ar << endl;
	}
};
class triangle : public shape
{
public:
	triangle(int a) : shape(a){}
	void area()
	{
		ar = static_cast<float> ((pow(getside(), 2)*sqrt(3)) / 4);
		cout << "The area is " << ar << endl;
	}
};
class circle : public shape
{

public:
	circle(int a) :shape(a) {}
	void area()
	{
		ar = static_cast<float> (2 * 3.14*getside());
		cout << "The area is " << ar << endl;
	}
};

//code 23

class List
{
public:
	int val;
	List(int a)
	{
		val = a;
	}
	virtual void store()
	{
		cout << "Enter the val. to be stored ";
		cin >> val;
		cout << endl;
	}
	virtual void retrieve()
	{
		cout << "The Stored value is " << val << endl;
	}
};
class stack : public List
{
public:
	stack(int a) : List(a) {}
	void store()
	{
		cout << "Enter the val. to be stored ";
		cin >> val;
		cout << endl;
	}
	void retrieve()
	{
		cout << "The Stored val is \'Stack part' "<< val << endl;;
	}

};
class queue :public List
{
public:
	queue(int a) : List(a) {}
	void store()
	{
		cout << "Enter the val. to be stored ";
		cin >> val;
		cout << endl;
	}
	void retrieve()
	{
		cout << "The Stored val is \'Queue part' " << val << endl;;
	}
};
float area(int rad)
{
	float ar;
	ar = static_cast<float>(2 * 3.14*rad);
	return ar;
}
float area(int side1, int side2)
{
	float ar;
	ar = static_cast<float>(side1*side2);
	return ar;
}
float area(int side1, int side2, int side3)
{
	float ar;
	int peri;
	peri = (side1 + side2 + side3)/2;
	ar = static_cast<float>(sqrt((peri - side1)*(peri - side2)*(peri - side3)));
	return ar;
}*/

//------Operator overloading begins here bro---------------

//Program 25 Uranary operator overloading]

/*
int mon[] = { 1,2,3,4,5,6,7,8,9,10,11,12 }; //--Date code begins
int days[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
int sum_days[] = { 31,59,90,120,151,181,212,243,273,301,334,365 };
class Date
{
	int day;
	int month;
	int year;
	int no_of_days;
public:
	Date operator + (const Date d1)
	{
		Date date;
		int day_overl = 0, month_overl = 0;//sub_date=0,sub_month=0;
		date.day = this->day + d1.day;
		
		if (date.day > 30) 
		{
			day_overl = 1;
			date.day = date.day - 30;
		}
		else if (date.day > 62)
		{
			day_overl = 2;
			date.day = date.day - 60;
		}
		date.month = this->month + d1.month;
		
		if (day_overl == 1)
			date.month = +1;
		
		else if (day_overl == 2)
			date.month = +2;
		
		if (date.month > 12)
		{
			month_overl = +1;
			date.month = date.month - 12;
		}
		else if (date.month > 24)
		{
			month_overl = +2;
			date.month = date.month - 24;
		}
		date.year = this->year + d1.year;
		
		if (month_overl == 1)
			date.year = date.year+1;

		else if (month_overl == 2)
			date.year = date.year+2;

	//	date.no_of_days = this->no_of_days + d1.no_of_days;
		return date;
	}
	Date()
	{
		day = 0;
		month = 0;
		year = 0;
		no_of_days = 0;

	}
	void get_date()
	{

		cout << "\nEnter the day";
		cin >> day;
		cout << "Enter the month";
		cin >> month;
		cout << "Enter the year ";
		cin >> year;
		cal_days();

	}
	void cal_days()
	{
		int i = 0;
		for (i; i < 12; i++)
		{
			if (month == mon[i])
				break;
		}
		no_of_days = sum_days[i - 1] + day;

	}
	void put_date()
	{
		cout << day << "/";
		cout << month << "/";
		cout << year << endl;
		cout << no_of_days;
	}
	void sub()
	{
		int inte;
		int diff, i = 0;
		cout << "Enter the integer to be subtracted ";
		cin >> inte;
		if (inte < no_of_days)
		{
			no_of_days -= inte;
			for (i; i < 12; i++)
			{
				if (no_of_days > sum_days[i])
				{
					continue;
				}
				else
					break;
			}
			diff = sum_days[i] - no_of_days;
			day = diff;
			month = mon[i];

		}
		else if (inte > no_of_days)
		{
			inte -= no_of_days;
			year--;
			no_of_days = 365;
			no_of_days -= inte;
			for (i; i < 12; i++)
			{
				if (no_of_days > sum_days[i])
				{
					continue;
				}
				else
					break;
			}
			diff = sum_days[i] - no_of_days;
			day = diff;
			month = mon[i];
		}
	}
	void sub_date(Date d1, Date d2)
	{
		int diff, diff2;;
		if (d1.year > d2.year)
		{
			diff = d1.year - d2.year;
			if (d1.no_of_days > d2.no_of_days)
			{
				diff2 = d1.no_of_days - d2.no_of_days;
			}
			else
			{
				diff2 = d2.no_of_days - d1.no_of_days;
			}
			cout << "The difference of the two dates in days and years is " << endl;
			cout << "  days  " << diff << "   years " << diff2;
		}
		else if (d2.year > d1.year)
		{
			diff = d2.year - d1.year;
			if (d1.no_of_days > d2.no_of_days)
			{
				diff2 = d1.no_of_days - d2.no_of_days;
			}
			else
			{
				diff2 = d2.no_of_days - d1.no_of_days;
			}
			cout << "The difference of the two dates in days and years is " << endl;
			cout << "  days  " << diff2 << "   years " << diff;
		}
	}
};
*/
//Program 26 is below 

/*
class imaginary
{
	int r1;
	int i1;
public:
	imaginary()
	{
		r1 = NULL;  i1 = NULL;
	}
	imaginary(int re, int im)
	{
		r1 = re;	i1 = im;
	}
	imaginary(int re1, int im1, int re2, int im2)
	{
		r1 = re1;	i1 = im1;
	}
	imaginary operator +(const imaginary& i)
	{
		imaginary io;
		io.r1 = this->r1 + i.r1;
		io.i1 = this->i1 + i.i1;
		return io;
	}
	void show()
	{
		cout << "The complex no is " << r1 << " + " << i1 << "i" << endl;
	}
	void get()
	{
		cout << "Enter the Real part of the complex no ";
		cin >> r1;
		cout << " Enter the Complex part of the complex no ";
		cin >> i1;
		cout<< endl;
	}
};
*/

//Program 27 is below this coment, well for this program i have in built string operator overloading so not making code straight to the main part lol

//Program 28 is below this comment, this one is copied from stack overflow lolololololol

class NEWs
{
	string name;
	int age;
public:
	 NEWs()
	{
		cout << "Constructor is called\n";
	}
	NEWs(string name, int age)
	{
		this->name = name;
		this->age = age;
	}
	void display()
	{
		cout << "\nThe name is " << name;
		cout << "\nThe age is " << age;
	}
	void * operator new(size_t size)
	{
		cout << "Overloading new operator with size: " << size << endl;
		void * p = ::new NEWs();
		return p;
	}
	void operator delete(void * p)
	{
		cout << "\nOverloading delete operator " << endl;
		free(p);
	}
};
int main()
{
	/*
	result r1;
	//----code 19
	
	//Distance d1;
	//	d1.cal_dis(d1.x,d1.y);
	//code -20
	book b1;
	b1.publi_getter();
	b1.book_getter();
	b1.publi_setter();
	b1.book_setter();
	
	//code ---21

	age_pat pat[2];
	for (int i = 0; i < 2; i++)
	{
		pat[i].setter();
		pat[i].age_setter();
	}
	for (int i = 0; i < 2; i++)
	{
		if (pat[i].flag)
		{
			pat[i].getter();
			pat[i].age_getter();
		}
	}

	//code ---22
	
	triangle* tri = new triangle(12);
	square* sq = new square(12);
	circle* ci = new circle(12);

	shape* Super_shape = tri;
	tri->area();
	Super_shape = sq;
	sq->area();
	Super_shape = ci;
	ci->area();


		//code ---23 

	List* lis = new List(10);
	lis->retrieve();
	
	stack* stk = new stack(10);
	stk->store();
	stk->retrieve();

	queue* que = new queue(10);
	que->store();
	que->retrieve();


	//code ---24 
	float Area;
	int side1, side2, side3;
	cout << "Enter the raduis of the circle ";
	cin >> side1;
	Area=area(side1);
	cout << "The area is " << Area<<endl;
	cout << "Enter the sides of the square ";
	cin >> side1 >> side2;
	Area = area(side1, side2);
	cout << "The area is " << Area << endl;
	cout << "Enter the sides of the Triangle ";
	cin >> side1 >> side2 >> side3;
	Area = area(side1, side2,side3);
	cout << "The area is " << Area << endl;
*/	


//------Operator overloading begins here bro---------------
/*
	Date d1,d2,d3;
	cout << "Enter the date for d1";

	d1.get_date();

	cout << "Enter the date for d2 ";
	d2.get_date();
	
	d3 = d1 + d2;
	cout << "The combi date is ";
	d3.put_date();
	*/

// program 25 is above and 26 is below 

	/*imaginary i1,i2,i3;
	i1.get();
	i2.get();
	i3 = i1 + i2;
	i3.show();
	*/

//program 26 is above and 27 is below it works for string classes
/*
string str1,str2,str3,temp;
cout << "Enter the first string "; 
cin >> str1;
cout << "Enter the second string ";
cin >> str2;
str3 = " ";
temp = str1 + str3 + str2;
cout << "The added string is "<<temp;
*/
//program 27 is above and 28 is below 

/*
	NEWs * p = new NEWs("Yash", 24);
	p->display();
	delete p;
*/

}
