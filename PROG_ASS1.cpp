#include<iostream>
using namespace std;

int main()
{
	string FN;
	string LN;
	char MI;
	const double t = 0.033;
	int a,dd,mm, yy;
	float h,h1;
	bool ismillenial;
	
	cout << "Enter first name :";
	cin >> FN;
	cout << "Enter last name :";
	cin >> LN;
	cout << "Enter middle initial :";
	cin >> MI;
	 
	cout << " Enter birth month :";
	 	if(mm == 1){
	 		cout << "January" << endl;
		 }
	   
	    if(mm==2){
	   	 cout << "February" << endl;
	     }
	  
	    if(mm==3){
	   	 cout << "March" << endl;
	     }
	  
	    if(mm==4){
	     cout << "April" << endl;	
	     }
	    
	    if(mm==5){
	   	cout << "May" << endl;
	     }
	    
	    if(mm==6){
	   	cout << "June" << endl;
	     }
	    
	    if(mm==7){
	   	 cout << "July" << endl;
	     }
	   
	    if(mm==8){
	   	 cout << "August" << endl;
	    }
	   
	    if(mm==9){
	    cout << "September" << endl;	
	    }
	   
	    if(mm==10){
	   	cout << "October" << endl;
	    }
	    
	    if(mm==11){
	   	 cout << "November" << endl;
	    }
	   
	     if(mm==12){
	   	cout << "December" << endl;
	    }
	    cin >> mm;
	    
	 
	cout << "birth date :";
	cin >> dd;
	cout << "birthyear: ";
	cin >> yy;
	cout << "Enter your height in cm :" ;
	cin >> h1;
	 
	 h=h1 * t ;
	  cout << "Your height in feet  is " << h << endl;
	
	cout << LN << "," << FN << " " << MI << "." << endl;
	cout << mm << "/" << dd << "/" << yy << endl;
	cout << " Enter age :";
	cin >> a;
	if (a<30)
	cout << "Your age is " << a << " . You are " << "millenial";
	else cout << a << "You are " << "not millenial";
	
	
	
	return 0;
	    
}
