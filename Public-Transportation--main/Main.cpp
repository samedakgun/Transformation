#include <string>
#include <iostream>
#include "Transportation.h"
#include "User.h"
#include "bus.h"
using namespace std;

int main()
{
	Path p1;
	char initial, final;
	User u1;
	busA a1;

	
int choice;
		cout<<"***********************************************************************\n\n\n";
        cout<<"               Public Transportation Passenger Page                      \n\n";
        cout<<"*******************        MENU        *******************************\n\n";
        cout<<"1.LOG IN"<<endl;
        cout<<"2.REGISTER"<<endl;
        cout<<"3.EXIT"<<endl;
        cin>>choice;
        cout<<endl;
        switch(choice)
        {
                case 1:
                        u1.login();
                        break;
                case 2:
                        u1.registr();
                        break;
                case 3:
						cout<<"Have a good journey!\n\n";
                        break;
        }
	
	cin>>initial;
	switch(initial)
	{
		case 'A':
			p1.displayA();
			a1.plus();
			break;
		
		case 'B':
			p1.displayB();
			a1.plus();
			break;
		
		case 'C':
			p1.displayC();
			a1.plus();
			break;
		
		case 'D':
			p1.displayD();
			a1.plus();
			break;
			
		case 'E':
			p1.displayE();
			a1.plus();
			break;
			
		case 'F':
			p1.displayF();
			a1.plus();
			break;
			
		case 'G':
			p1.displayG();
			a1.plus();
			break;
			
		case 'H':
			p1.displayH();
			a1.plus();
			break;
			
		case 'I':
			p1.displayI();
			a1.plus();
			break;
			
		case 'J':
			p1.displayJ();
			a1.plus();
			break;	
			
		default:
			cout<<"Location not exist!\n";
			break;							
	}
	
	cout<<"Enter the final place: ";
	cin>>final;
	switch(final)
	{
		case 'A':
			p1.chooseA();
			a1.minus();
			break;
			
		case 'B':
			p1.chooseB();
			a1.minus();
			break;
		
		case 'C':
			p1.chooseC();
			a1.minus();
			break;
		
		case 'D':
			p1.chooseD();
			a1.minus();
			break;
			
		case 'E':
			p1.chooseE();
			a1.minus();
			break;
			
		case 'F':
			p1.chooseF();
			a1.minus();
			break;
			
		case 'G':
			p1.chooseG();
			a1.minus();
			break;
			
		case 'H':
			p1.chooseH();
			a1.minus();
			break;
			
		case 'I':
			p1.chooseI();
			a1.minus();
			break;
			
		case 'J':
			p1.chooseJ();
			a1.minus();
			break;	
		
		default:
			cout<<"Location not exist!";					
	}
	
}

