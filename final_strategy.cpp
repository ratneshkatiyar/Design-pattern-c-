/*Strategy Pattern can also be used in the software design. When it is possible to have several different algorithms for performing a process, each of which is the best solution depending on the situation, then a Strategy Pattern can be used. This article is all about Strategy Pattern. It uses a programming example to explain what, when and why a Strategy Pattern is needed. Benefits and drawbacks of using Strategy Pattern in software design is discussed. Three different approaches for implementing the Pattern in C++ and known uses of Strategy Pattern are also presented in this article.*/

#include<iostream>
using namespace std;

class sorting
{
	public:
	virtual void sortdata() = 0;
};

class quicksort : public sorting
{
	public:
	void sortdata()
	{
		cout << "sorting using quick sort";
	}
};

class mergesort : public sorting
{
	public:
	void sortdata()
	{
		cout << "sorting using merge sort";
	}
};

class sample
{
	private:
		sorting* s;
	public:
		sample():s(NULL) {}
		
		void addNumber(int n)
		{
			cout << "Logic for add number goes here";
		}		

		void sortvalues()
		{
			s->sortdata();
		}
		void printvalues ()
		{
			cout << "Printing the sorted values";
		}
		void setStrategy (sorting* s)
		{	
			sample::s = s;
		}
};

int main()
{
	sample sam;
	sam.addNumber(10);
	sam.addNumber(9);
	sam.addNumber(13);	
	sorting *s = new mergesort;
	sam.setStrategy(s);
	sam.sortvalues();	
	
	return 0;
}
