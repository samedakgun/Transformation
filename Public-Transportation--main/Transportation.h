#include <string>
#ifndef TRANSPORTATION_H
#define TRANSPORTATION_H
using namespace std;

class Path{
	
	public:
		string a[10][10] = { {"A","B","C","D","E","F","G","H","I","J"}, {"A","B","C","D","E","F","G","H","I","J"}, {"A","B","C","D","E","F","G","H","I","J"}, {"A","B","C","D","E","F","G","H","I","J"},{"A","B","C","D","E","F","G","H","I","J"},{"A","B","C","D","E","F","G","H","I","J"},{"A","B","C","D","E","F","G","H","I","J"},{"A","B","C","D","E","F","G","H","I","J"},{"A","B","C","D","E","F","G","H","I","J"},{"A","B","C","D","E","F","G","H","I","J"}};
		float kma[10][10] ={ {0,1.2,2.5,1.3,2.3,2.9,2.8,3.4,4.9,5.3},{1.2,0,2.6,2.5,1.1,4.1,2.1,2.7,6.8,5.1},{1.4,2.6,0,1.2,3.3,1.5,2.6,5.3,3.5,5.2},{1.3,2.5,1.2,0,1.1,2.7,1.5,2.2,4.6,4},{2.3,1.1,2.3,1.1,0,2.1,1,1.1,4.1,3.5},{2.9,4.1,1.5,2.6,2.1,0,1.1,3.2,2,3.7},{2.8,2.1,2.7,1.5,1,1.1,0,2.1,3.1,2.5},{3.9,2.7,5.3,2.2,1.1,3.2,2.1,0,4.1,2.4},{4.9,6.8,3.5,4.6,5.2,2,3.1,4.1,0,1.7},{5.3,5.1,5.2,4,3.5,3.7,2.5,2.4,1.7,0}};
		float kmb[10][10] ={ {0,0,1.4,2.6,2.4,3.9,3.3,3.4,5.9,6.3},{0,0,3.4,2.2,3.6,3.2,4,2.2,5.2,4.6},{2.5,3.7,0,2.7,3.7,3.8,2.7,3.4,0,5.1},{2.6,2.2,2.7,0,2.5,2.6,2.1,5.2,5.7,4.6},{2.4,3.6,3.7,2.5,0,3.7,2.6,3.8,5.2,3.5},{3.9,3.2,3.8,2.7,3.7,0,4.2,6.1,5.3,3.6},{3.4,4,2.6,2.1,2.6,4.2,0,4.9,4.2,4.8},{3.5,2.2,3.4,3.6,3.8,6.1,4.9,0,5.2,4.6},{5.9,5.2,0,4.7,4.1,5.3,4.2,5.2,0,5.6},{6.3,4.6,5.1,4.6,3.5,3.6,4.8,4.6,5.6,0}};
		string vehicle1[10][10] ={{"No Vehicle","B1","B2","M1","M2","T1","T2","S1","S2","B3"}, {"B7","No Vehicle","B8","M5","M6","T5","T6","S5","S6","B9"}, {"B13","B14","No Vehicle","M9","M10","T9","T10","S9","S10","B15"}, {"B19","B20","M13","No Vehicle","M14","T13","T14","S13","S14","B21"},{"B25","B26","M17","M18","No Vehicle","T17","T18","S17","S18","B27"},{"B31","B32","M21","M22","T21","No Vehicle","T22","S21","S22","B33"},{"B37","B38","M25","M26","T25","T26","No Vehicle","S25","S26","B39"},{"B43","B44","M29","M30","T29","T30","S29","No Vehicle","S30","B45"},{"B49","B50","M33","M34","T33","T34","S33","S34","No vehicle","B51"},{"B55","B56","M37","M38","T37","T38","S37","S38","B57","No Vehicle"}};
		string vehicle2[10][10] ={{"No Vehicle","No Vehicle","B5","M3","M4","T3","T4","S3","S4","B6"}, {"No Vehicle","No Vehicle","B11","M7","M8","T7","T8","S7","S8","B12"}, {"B16","B17","No Vehicle","M11","M12","M13","T12","S11","S12","B18"}, {"B22","B23","M15","No Vehicle","M16","T15","T16","S15","S16","B24"},{"B28","B29","M19","M20","No Vehicle","T19","T20","S19","S20","B30"},{"B34","B35","M23","M24","T23","No Vehicle","T24","S23","S24","B36"},{"B40","B41","M27","M28","T27","T28","No Vehicle","S27","S28","B42"},{"B46","B47","M31","M32","T31","T32","S31","No Vehicle","S32","B48"},{"B52","B53","No Vehicle","M36","T35","T36","S35","S36","No Vehicle","B54"},{"B58","B59","M39","M40","T39","T40","S39","S40","B60","No Vehicle"}};
	
	static int q;
	
		void displayA() const;	void displayB() const;	void displayC() const;	void displayD() const;	void displayE() const;	
		void displayF() const;	void displayG() const;	void displayH() const;	void displayI() const;	void displayJ() const;	
		
		void chooseA() const;	void chooseB() const;	void chooseC() const;	void chooseD() const;	void chooseE() const;
		void chooseF() const;	void chooseG() const;	void chooseH() const;	void chooseI() const;	void chooseJ() const;
};
#endif

