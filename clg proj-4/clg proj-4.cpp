
#include "pch.h"
#include <iostream>
#include <string>
#include <conio.h>
#include <string.h>
#include <math.h>
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
};*/
//-----17 and 18 above 

/*class cordinates  
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
};*/
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
int main()
{
	//result r1;
	//----code 19
	//Distance d1;
	//	d1.cal_dis(d1.x,d1.y);
	//code -20
	book b1;
	b1.publi_getter();
	b1.book_getter();
	b1.publi_setter();
	b1.book_setter();

}
