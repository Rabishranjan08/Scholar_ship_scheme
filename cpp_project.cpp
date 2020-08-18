#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
class student
{
	string name;
	string stream;
	int choice,choice1;
	int score;
	int marks10,marks12,marksg;
	public:
		void getStream()
		{
			cout<<"\nIn which  type of courses you want to take admission:-\n";
			cout<<"\n1.Under Graduation\n";
			cout<<"\n2.Post Graduation\n";
			cout<<"\n3.Lateral Entry\n";
			cout<<"\nEnter your choice:-\n";
			cin>>choice;
			fflush(stdin);
		}
	void course()
		{
			if(choice==1)
			{  
				cout<<"\nEnter your full name:-";
		getline(cin,name);
		fflush(stdin);
		cout<<"\nEnter % of marks obtained in 10th standard:-";
		cin>>marks10;
		cout<<"\nEnter % of marks obtained in 12th standard:-";
		cin>>marks12;
			}
			else if(choice==2)
			{
			cout<<"Enter your full name:-";
		getline(cin,name);
		cout<<"\nEnter % of  marks in 12th standard:-";
		cin>>marks12;
		cout<<"\nEnter % of marks  obtained in graduation:-";
		cin>>marksg;	
			}
			else  if(choice==3)
			{
				cout<<"Enter your full name:-";
		      getline(cin,name);
		       cout<<"\nEnter % of marks obtained in 12th standard:-";
	        	cin>>marks12;
			}
			else
			{
				cout<<"SORRY!INVALID CHOICE";
			}	
		}
	void fee()
	{
		if(choice==1)
		cout<<"\nYour tution fee is Rs 94500/- per semestor\n";
		else if(choice==2)
	
			cout<<"\nYour fee is Rs 80000/- per semestor\n";
	
		else
		
			cout<<"your fee is Rs 75000/- per semestor\n";
	}
	void criteria1()
	{
		if(marks12>=90&&marks12<=100||marks10>=90&&marks10<=100||marksg>=90&&marksg<=100)
		{
			cout<<"\nyour scholarship amount is Rs 45000/- per semestor\n";
			cout<<"\nFee after scholarship is Rs 50000/- per semestor\n";
		}
		else if(marks12>=80&&marks12<90||marks10>=80&&marks10<90)
		{
		    cout<<"\nyour scholarship is Rs 35000/- per semestor\n";
			cout<<"\nFee after scholarship is Rs60000/- per semestor\n";	
		}
		else if (marks12>=70&&marks12<80||marks10>=70&&marks10<80)
		{
			cout<<"\nYour scholarship is Rs 25000/- per semestor\n";
			cout<<"\nFee after scholarship is Rs70000/- per semestor\n";
		}
		else
		{
			cout<<"sorry!apply for lpunest\n";
		}
	}
	void nest()
	{
		cout<<"\nYou have given LPUNEST :-";
		cout<<"\n1.Yes";
		cout<<"\n2.No\n";
		cout<<"\nPlease,Enter your choice\n";
		cin>>choice;
		if(choice==1)
		{
		cout<<"\nEnter marks obtained in lpunest out of 400:-\n";
		cin>>score;
		if(score>350)
		{
			cout<<"\nYou are in top 10%\n";
			cout<<"\nyour scholarship is Rs 45000/- per semestor\n";
			cout<<"\nFee after scholarship is Rs 50000/- per semestor\n";
		}
		else if(score>=300&&score<350)
		{
			cout<<"\nyou are in top 10% to 20%\n";
			cout<<"\n your scholarship is Rs 35000/- per semestor\n";
			cout<<"\n Fee after scholarship is Rs60000/- per semestor\n";
		}
		else if (score>=200&&score<300)
		{
			cout<<"\nyou are in top 21 to 35%\n";
			cout<<"\nyour scholarship is Rs 25000/- per semestor\n";
			cout<<"\nFee after scholarship is Rs 70000/- per semestor\n";
		}
		else
		{
			cout<<"\nNo scholarship\n";
		}
	}
	else
		cout<<"Thanks";
	}
};
int main()
{
	student obj;
	obj.getStream();
	obj.course();
	obj.fee();
	obj.criteria1();
	obj.nest();	
	return 0;
}
