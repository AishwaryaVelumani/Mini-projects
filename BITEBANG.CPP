#include <fstream.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <iomanip.h>

int i=0;
int del_area=0;
char del_loc[100];
struct dishes
{
	char name[100];
	double pr;
}d;

struct restaurant
{
	char name[100];           // jj jj 12 34 cf**
	double cfo;
	int rt;
	int pm;                                        //char s[]=ty;
	char ty[4];
}r;

ofstream on;
ofstream off;
ofstream os;
ofstream oc;
ifstream iff;
ifstream is;
ifstream ic;
ifstream in;
ofstream of1;
ifstream if1;

/*void input_rest()
{
	int i=0;
	of1.open("f_rest",ios::binary);

	for(i=1;i<=20;i++)
	{
		cout<<"Enter restuarant name, cost for one, rating, paymode and types of cuisines available\n";
		gets(r.name);
		cin>>r.cfo;
		cin>>r.rt;
		cin>>r.pm;
		gets(r.ty);
		of1.write((char*)&r,sizeof(r));
	}

	of1.close();
	if1.open("f_rest",ios::binary);
	if1.read((char*)&r,sizeof(r));
	cout<<r.ty;
	if1.close();
}

void input_dish()
{
	int i=0;
	on.open("n",ios::binary);
	for(i=1;i<=7;i++)
	{
		cout<<"Enter north Indian dish name and price\n";
		gets(d.name);
		cin>>d.pr;
		on.write((char*)&d,sizeof(d));
	}
	in.close();
	off.open("f",ios::binary);
	for(i=1;i<=7;i++)
	{
		cout<<"Enter fast food dish name and price";
		gets(d.name);
		cin>>d.pr;
		off.write((char*)&d,sizeof(d));
	}
	iff.close();
	os.open("s",ios::binary);
	for(i=1;i<=7;i++)
	{
		cout<<"Enter South Indian dish name and price";
		gets(d.name);
		cin>>d.pr;
		os.write((char*)&d,sizeof(d));
	}
	is.close();
	oc.open("c",ios::binary);
	for(i=1;i<=7;i++)
	{
		cout<<"Enter Chinese dish name and price";
		gets(d.name);
		cin>>d.pr;
		oc.write((char*)&d,sizeof(d));
	}
	ic.close();
}*/

void tita(int a)
{
	clrscr();
	a++;
	for(i=0;i<33;i++)
		cout<<" ";
	cout<<"Bite Bang\n\n";
	for(i=0;i<30;i++)
		cout<<" ";
	cout<<"Button.Bite.Burp.\n";
	for(i=0;i<80;i++)
		cout<<"~";
	for(i=0;i<80;i++)
		cout<<"~";
}

void tita()
{
	clrscr();

	for(i=0;i<33;i++)
		cout<<" ";
	cout<<"Bite Bang\n\n";
	for(i=0;i<30;i++)
		cout<<" ";
	cout<<"Button.Bite.Burp.\n";
	for(i=0;i<80;i++)
		cout<<"~";
	for(i=0;i<80;i++)
		cout<<"~";
	puts(del_loc);
	switch(del_area)
	{
		case 1:cout<<"Delhi";break;
		case 2:cout<<"Mumbai";break;
		case 3:cout<<"Kolkata";break;
		case 4:cout<<"Chennai";break;
		case 5:cout<<"Bangalore";break;
		default:;
	}
	cout<<"\n";
	for(i=0;i<80;i++)
		cout<<"~";

}

void del_place()
{

	//screen 1
	tita(2);


	cout<<"Choose your delivery location's area:\n1.Delhi\n2.Mumbai\n3.Kolkata\n4.Chennai\n5.Bangalore\n";
	cin>>del_area;
	//cout<<"\n";
	for(i=0;i<80;i++)
		cout<<"~";
	cout<<"Enter your delivery location: ";
	gets(del_loc);
	cout<<"\n";
	for(i=0;i<80;i++)
		cout<<"~";
	for(i=0;i<80;i++)
		cout<<"~";
}

void filter()
{
	int cf;
	tita();
	cout<<"Filters:\n1.Cuisine\n2.Cost for one\n3.Rating\nEnter your choice: ";
	cin>>cf;
	switch(cf)
	{
		case 1:
		cuisine();
		break;
		case 2:
		cost();
		break;
		case 3:
		rate();
		break;
		default:
		cout<<"Wrong choice.";
		break;
	}
	for(i=0;i<80;i++)
		cout<<"~";
}

void cuisine()
{
	int ccu,i1;
	char cuch[4];

	tita();
	cout<<"Searching for best restuarants near you...";
	//time lag
	tita();
	cout<<"Cuisines:\n1.All\n2.North Indian\n3.Fast food\n4.Chinese\n5.South Indian\nEnter your choice: ";
	cin>>ccu;
	for(i=0;i<80;i++)
		cout<<"~";
	for(i=0;i<80;i++)
		cout<<"~";

	tita();
	if1.open("f_rest",ios::binary);

	switch(ccu)
	{
		case 1:
		while(if1)
		{
		if1.read((char*)&r,sizeof(r));
		//align display
		}
		break;

		case 2:
		while(if1)
		{
			if1.read((char*)&r,sizeof(r));
			for(i1=0;cuch[i1]!='\0';i1++)
			{
				if(cuch[i1]=='n')










}

void main()
{
	clrscr();
	int ch_bb;
	//input_rest();
	//input_dish();

	tita(2);
	cout<<"Get all your favourite dishes from the best restuarants in your area just a \nbutton away! Also feed your brain with the latest food trends!\n";
	for(i=0;i<80;i++)
		cout<<"~";
	cout<<"1.Feed my belly - Order yummy food right away!\n2.Feed my brain - Get the lastest food trends.\nEnter your choice: ";
	cin>>ch_bb;
	for(i=0;i<80;i++)
		cout<<"~";
	if(ch_bb==1)
		del_place();
		filter();
	//else(ch_bb==2)
		//analysis();*/
	getch();
}
















