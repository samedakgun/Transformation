#include <iostream>
#include <string>
#include "Transportation.h"
#include<istream>
#include<fstream>
#include<stdlib.h> 
#include "User.h"
using namespace std;    

void User::login() const
{
	int count;
        string user,pass,u,p;
        system("cls");
        cout<<"Please enter the following informations"<<endl;
        cout<<"USERNAME :";
        cin>>user;
        cout<<"PASSWORD :";
        cin>>pass;
        
        ifstream input("userProfile.txt");
        while(input>>u>>p)
        {
                if(u==user && p==pass)
        		{
                        count=1;
                        system("cls");
                }
        }
        input.close();
        if(count==1)
        {       	
                cout<<"\nWelcome "<<user<<"\n";
                cin.get(); 
				cout<<"Enter the initial place: ";				
        }
        else
        {
                registr();
        }
}

void User::registr() const
{
	string reguser, regpass;
	system("cls");
		cout<<"Registiration Page\n";
        cout<<"Enter the username :";
        cin>>reguser;
        cout<<"\nCreate a password :";
        cin>>regpass;
        
        ofstream reg("userProfile.txt",ios::app);
        reg<<reguser<<' '<<regpass<<endl;
        system("cls");
        login();
}

int Path::q=0; //static variable
void Path::displayA() const
{
	for ( int i = 0; i < 1; i++ )
	{
		for ( int j = 0; j < 10; j++ ) 
		{
      	cout << "[" << "A" << "][" << j << "]: ";
        cout << a[i][j]<<" = "<<kma[0][j]<<" km"<<"\t"<<a[i][j]<<" = "<<kmb[0][j]<<" km"<<endl;
		}
	}
}

void Path::displayB() const
{
	for ( int j = 0; j < 10; j++ ) 
		{
      	cout << "[" << "B" << "][" << j << "]: ";
        cout << a[1][j]<<" = "<<kma[1][j]<<" km"<<"\t"<<a[1][j]<<" = "<<kmb[1][j]<<" km"<<endl;
        }
		q=q+1;
}

void Path::displayC() const
{
	for ( int j = 0; j < 10; j++ ) 
		{
      	cout << "[" << "C" << "][" << j << "]: ";
        cout << a[1][j]<<" = "<<kma[2][j]<<" km"<<"\t"<<a[2][j]<<" = "<<kmb[2][j]<<" km"<<endl;
		}
		q=q+2;
}

void Path::displayD() const
{
	for ( int j = 0; j < 10; j++ ) 
		{
      	cout << "[" << "D" << "][" << j << "]: ";
        cout << a[1][j]<<" = "<<kma[3][j]<<" km"<<"\t"<<a[3][j]<<" = "<<kmb[3][j]<<" km"<<endl;
		}
		q=q+3;
}

void Path::displayE() const
{
	for ( int j = 0; j < 10; j++ ) 
		{
      	cout << "[" << "E" << "][" << j << "]: ";
        cout << a[1][j]<<" = "<<kma[4][j]<<" km"<<"\t"<<a[4][j]<<" = "<<kmb[4][j]<<" km"<<endl;
		}
		q=q+4;
}

void Path::displayF() const
{
	for ( int j = 0; j < 10; j++ ) 
		{
      	cout << "[" << "F" << "][" << j << "]: ";
        cout << a[1][j]<<" = "<<kma[5][j]<<" km"<<"\t"<<a[5][j]<<" = "<<kmb[5][j]<<" km"<<endl;
		}
		q=q+5;
}

void Path::displayG() const
{
	for ( int j = 0; j < 10; j++ ) 
		{
      	cout << "[" << "G" << "][" << j << "]: ";
        cout << a[1][j]<<" = "<<kma[6][j]<<" km"<<"\t"<<a[6][j]<<" = "<<kmb[6][j]<<" km"<<endl;
		}
		q=q+6;
}

void Path::displayH() const
{
	for ( int j = 0; j < 10; j++ ) 
		{
      	cout << "[" << "H" << "][" << j << "]: ";
        cout << a[1][j]<<" = "<<kma[7][j]<<" km"<<"\t"<<a[7][j]<<" = "<<kmb[7][j]<<" km"<<endl;
		}
		q=q+7;
}

void Path::displayI() const
{
	for ( int j = 0; j < 10; j++ ) 
		{
      	cout << "[" << "I" << "][" << j << "]: ";
        cout << a[1][j]<<" = "<<kma[8][j]<<" km"<<"\t"<<a[8][j]<<" = "<<kmb[8][j]<<" km"<<endl;
		}
		q=q+8;
}

void Path::displayJ() const
{
	for ( int j = 0; j < 10; j++ ) 
		{
      	cout << "[" << "J" << "][" << j << "]: ";
        cout << a[1][j]<<" = "<<kma[9][j]<<" km"<<"\t"<<a[9][j]<<" = "<<kmb[9][j]<<" km"<<endl;
		}
		q=q+9;
}

//****//
void Path::chooseA() const
{
	for ( int j = 0; j < 1; j++ )
		{
		cout<<kma[q][j]<<" "<<"km"<<"\t"<<"Vehicle:"<<vehicle1[q][j]<<"\tOR\t"<<kmb[q][j]<<" "<<"km"<<"\t"<<"Vehicle:"<<vehicle2[q][j]<<endl; 
		if(kma[q][j]<kmb[q][j])
			{
				cout<<"\nShortest path:"<<kma[q][j]<<" "<<"km"<<" ---> "<<"Vehicle:"<<vehicle1[q][j]<<" Amount to be paid is "<<kma[q][j]*2<<" "<<"TL"<<endl;
			}
			else if(kmb[q][j]==0)
			{
				cout<<"\nShortest path:"<<kma[q][j]<<" "<<"km"<<" ---> "<<"Vehicle:"<<vehicle1[q][j]<<" Amount to be paid is "<<kma[q][j]*2<<" "<<"TL"<<endl;
			}
			else
			{
				cout<<"\nShortest path:"<<kmb[q][j]<<" "<<"km"<<" ---> "<<"Vehicle:"<<vehicle2[q][j]<<" Amount to be paid is "<<kmb[q][j]*2<<" "<<"TL"<<endl;
			}
		}
}

void Path::chooseB() const
{
	for ( int j = 1; j < 2; j++ )
		{
		cout<<kma[q][j]<<" "<<"km"<<"\t"<<"Vehicle:"<<vehicle1[q][j]<<"\tOR\t"<<kmb[q][j]<<" "<<"km"<<"\t"<<"Vehicle:"<<vehicle2[q][j]<<endl; 
		if(kma[q][j]<kmb[q][j])
			{
				cout<<"\nShortest path:"<<kma[q][j]<<" "<<"km"<<" ---> "<<"Vehicle:"<<vehicle1[q][j]<<" Amount to be paid is "<<kma[q][j]*2<<" "<<"TL"<<endl;
			}
			else if(kmb[q][j]==0)
			{
				cout<<"\nShortest path:"<<kma[q][j]<<" "<<"km"<<" ---> "<<"Vehicle:"<<vehicle1[q][j]<<" Amount to be paid is "<<kma[q][j]*2<<" "<<"TL"<<endl;
			}
			else
			{
				cout<<"\nShortest path:"<<kmb[q][j]<<" "<<"km"<<" ---> "<<"Vehicle:"<<vehicle2[q][j]<<" Amount to be paid is "<<kmb[q][j]*2<<" "<<"TL"<<endl;
			}
		}
}

void Path::chooseC() const
{
	for ( int j = 2; j < 3; j++ )
		{
		cout<<kma[q][j]<<" "<<"km"<<"\t"<<"Vehicle:"<<vehicle1[q][j]<<"\tOR\t"<<kmb[q][j]<<" "<<"km"<<"\t"<<"Vehicle:"<<vehicle2[q][j]<<endl; 
		if(kma[q][j]<kmb[q][j])
			{
				cout<<"\nShortest path:"<<kma[q][j]<<" "<<"km"<<" ---> "<<"Vehicle:"<<vehicle1[q][j]<<" Amount to be paid is "<<kma[q][j]*2<<" "<<"TL"<<endl;
			}
			else if(kmb[q][j]==0)
			{
				cout<<"\nShortest path:"<<kma[q][j]<<" "<<"km"<<" ---> "<<"Vehicle:"<<vehicle1[q][j]<<" Amount to be paid is "<<kma[q][j]*2<<" "<<"TL"<<endl;
			}
			else
			{
				cout<<"\nShortest path:"<<kmb[q][j]<<" "<<"km"<<" ---> "<<"Vehicle:"<<vehicle2[q][j]<<" Amount to be paid is "<<kmb[q][j]*2<<" "<<"TL"<<endl;
			}
		}
}

void Path::chooseD() const
{
	for ( int j = 3; j < 4; j++ )
		{
		cout<<kma[q][j]<<" "<<"km"<<"\t"<<"Vehicle:"<<vehicle1[q][j]<<"\tOR\t"<<kmb[q][j]<<" "<<"km"<<"\t"<<"Vehicle:"<<vehicle2[q][j]<<endl; 
		if(kma[q][j]<kmb[q][j])
			{
				cout<<"\nShortest path:"<<kma[q][j]<<" "<<"km"<<" ---> "<<"Vehicle:"<<vehicle1[q][j]<<" Amount to be paid is "<<kma[q][j]*2<<" "<<"TL"<<endl;
			}
			else if(kmb[q][j]==0)
			{
				cout<<"\nShortest path:"<<kma[q][j]<<" "<<"km"<<" ---> "<<"Vehicle:"<<vehicle1[q][j]<<" Amount to be paid is "<<kma[q][j]*2<<" "<<"TL"<<endl;
			}
			else
			{
				cout<<"\nShortest path:"<<kmb[q][j]<<" "<<"km"<<" ---> "<<"Vehicle:"<<vehicle2[q][j]<<" Amount to be paid is "<<kmb[q][j]*2<<" "<<"TL"<<endl;
			}
		}
}

void Path::chooseE() const
{
	for ( int j = 4; j < 5; j++ )
		{
		cout<<kma[q][j]<<" "<<"km"<<"\t"<<"Vehicle:"<<vehicle1[q][j]<<"\tOR\t"<<kmb[q][j]<<" "<<"km"<<"\t"<<"Vehicle:"<<vehicle2[q][j]<<endl; 
		if(kma[q][j]<kmb[q][j])
			{
				cout<<"\nShortest path:"<<kma[q][j]<<" "<<"km"<<" ---> "<<"Vehicle:"<<vehicle1[q][j]<<" Amount to be paid is "<<kma[q][j]*2<<" "<<"TL"<<endl;
			}
			else if(kmb[q][j]==0)
			{
				cout<<"\nShortest path:"<<kma[q][j]<<" "<<"km"<<" ---> "<<"Vehicle:"<<vehicle1[q][j]<<" Amount to be paid is "<<kma[q][j]*2<<" "<<"TL"<<endl;
			}
			else
			{
				cout<<"\nShortest path:"<<kmb[q][j]<<" "<<"km"<<" ---> "<<"Vehicle:"<<vehicle2[q][j]<<" Amount to be paid is "<<kmb[q][j]*2<<" "<<"TL"<<endl;
			}
		}
}

void Path::chooseF() const
{
	for ( int j = 5; j < 6; j++ )
		{
		cout<<kma[q][j]<<" "<<"km"<<"\t"<<"Vehicle:"<<vehicle1[q][j]<<"\tOR\t"<<kmb[q][j]<<" "<<"km"<<"\t"<<"Vehicle:"<<vehicle2[q][j]<<endl; 
		if(kma[q][j]<kmb[q][j])
			{
				cout<<"\nShortest path:"<<kma[q][j]<<" "<<"km"<<" ---> "<<"Vehicle:"<<vehicle1[q][j]<<" Amount to be paid is "<<kma[q][j]*2<<" "<<"TL"<<endl;
			}
			else if(kmb[q][j]==0)
			{
				cout<<"\nShortest path:"<<kma[q][j]<<" "<<"km"<<" ---> "<<"Vehicle:"<<vehicle1[q][j]<<" Amount to be paid is "<<kma[q][j]*2<<" "<<"TL"<<endl;
			}
			else
			{
				cout<<"\nShortest path:"<<kmb[q][j]<<" "<<"km"<<" ---> "<<"Vehicle:"<<vehicle2[q][j]<<" Amount to be paid is "<<kmb[q][j]*2<<" "<<"TL"<<endl;
			}
		}
}

void Path::chooseG() const
{
	for ( int j = 6; j < 7; j++ )
		{
		cout<<kma[q][j]<<" "<<"km"<<"\t"<<"Vehicle:"<<vehicle1[q][j]<<"\tOR\t"<<kmb[q][j]<<" "<<"km"<<"\t"<<"Vehicle:"<<vehicle2[q][j]<<endl; 
		if(kma[q][j]<kmb[q][j])
			{
				cout<<"\nShortest path:"<<kma[q][j]<<" "<<"km"<<" ---> "<<"Vehicle:"<<vehicle1[q][j]<<" Amount to be paid is "<<kma[q][j]*2<<" "<<"TL"<<endl;
			}
			else if(kmb[q][j]==0)
			{
				cout<<"\nShortest path:"<<kma[q][j]<<" "<<"km"<<" ---> "<<"Vehicle:"<<vehicle1[q][j]<<" Amount to be paid is "<<kma[q][j]*2<<" "<<"TL"<<endl;
			}
			else
			{
				cout<<"\nShortest path:"<<kmb[q][j]<<" "<<"km"<<" ---> "<<"Vehicle:"<<vehicle2[q][j]<<" Amount to be paid is "<<kmb[q][j]*2<<" "<<"TL"<<endl;
			}
		}
}

void Path::chooseH() const
{
	for ( int j = 7; j < 8; j++ )
		{
		cout<<kma[q][j]<<" "<<"km"<<"\t"<<"Vehicle:"<<vehicle1[q][j]<<"\tOR\t"<<kmb[q][j]<<" "<<"km"<<"\t"<<"Vehicle:"<<vehicle2[q][j]<<endl; 
		if(kma[q][j]<kmb[q][j])
			{
				cout<<"\nShortest path:"<<kma[q][j]<<" "<<"km"<<" ---> "<<"Vehicle:"<<vehicle1[q][j]<<" Amount to be paid is "<<kma[q][j]*2<<" "<<"TL"<<endl;
			}
			else if(kmb[q][j]==0)
			{
				cout<<"\nShortest path:"<<kma[q][j]<<" "<<"km"<<" ---> "<<"Vehicle:"<<vehicle1[q][j]<<" Amount to be paid is "<<kma[q][j]*2<<" "<<"TL"<<endl;
			}
			else
			{
				cout<<"\nShortest path:"<<kmb[q][j]<<" "<<"km"<<" ---> "<<"Vehicle:"<<vehicle2[q][j]<<" Amount to be paid is "<<kmb[q][j]*2<<" "<<"TL"<<endl;
			}
		}
}

void Path::chooseI() const
{
	for ( int j = 8; j < 9; j++ )
		{
		cout<<kma[q][j]<<" "<<"km"<<"\t"<<"Vehicle:"<<vehicle1[q][j]<<"\tOR\t"<<kmb[q][j]<<" "<<"km"<<"\t"<<"Vehicle:"<<vehicle2[q][j]<<endl; 
		if(kma[q][j]<kmb[q][j])
			{
				cout<<"\nShortest path:"<<kma[q][j]<<" "<<"km"<<" ---> "<<"Vehicle:"<<vehicle1[q][j]<<" Amount to be paid is "<<kma[q][j]*2<<" "<<"TL"<<endl;
			}
			else if(kmb[q][j]==0)
			{
				cout<<"\nShortest path:"<<kma[q][j]<<" "<<"km"<<" ---> "<<"Vehicle:"<<vehicle1[q][j]<<" Amount to be paid is "<<kma[q][j]*2<<" "<<"TL"<<endl;
			}
			else
			{
				cout<<"\nShortest path:"<<kmb[q][j]<<" "<<"km"<<" ---> "<<"Vehicle:"<<vehicle2[q][j]<<" Amount to be paid is "<<kmb[q][j]*2<<" "<<"TL"<<endl;
			}
		}
}

void Path::chooseJ() const
{
	for ( int j = 9; j < 10; j++ )
		{
		cout<<kma[q][j]<<" "<<"km"<<"\t"<<"Vehicle:"<<vehicle1[q][j]<<"\tOR\t"<<kmb[q][j]<<" "<<"km"<<"\t"<<"Vehicle:"<<vehicle2[q][j]<<endl; 
		if(kma[q][j]<kmb[q][j])
			{
				cout<<"\nShortest path:"<<kma[q][j]<<" "<<"km"<<" ---> "<<"Vehicle:"<<vehicle1[q][j]<<" Amount to be paid is "<<kma[q][j]*2<<" "<<"TL"<<endl;
			}
			else if(kmb[q][j]==0)
			{
				cout<<"\nShortest path:"<<kma[q][j]<<" "<<"km"<<" ---> "<<"Vehicle:"<<vehicle1[q][j]<<" Amount to be paid is "<<kma[q][j]*2<<" "<<"TL"<<endl;
			}
			else
			{
				cout<<"\nShortest path:"<<kmb[q][j]<<" "<<"km"<<" ---> "<<"Vehicle:"<<vehicle2[q][j]<<" Amount to be paid is "<<kmb[q][j]*2<<" "<<"TL"<<endl;
			}
		}
}

