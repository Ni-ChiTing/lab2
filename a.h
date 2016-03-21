#include<iostream>
#include<string>
using namespace std;
class BMI{
	  public:
		BMI(){weight=0;
		      high=0;
		     }
		BMI(float weight_2,float high_2)
		{
		 weight=weight_2;
		 high=high_2;
		 }
		void set(float k,float e)
		{
			weight=k;
			high=e;
		}
		 float BMIcount()
		 {
		 	if(weight<=0||high<=0)
			{
				cout<<"It is end of file"<<endl;
			}
			else
			{
				high=high/100;
				bmi1=weight/(high*high);
				return bmi1;
			}
		}
		string BMIre(float e)
		{
			float c;
			c=e;
			string s;
			if(c<15)
			{
				s="Very severely underweight";
			}
			else if(c>=15&&c<16)
			{
				s="Severely underweight";
			}
			else if(c>=16&&c<18.5)
			{
				s="Underweight";
			}
			else if(c>=18.5&&c<25)
			{
				s="Normal";
			}
			else if(c>=25&&c<30)
			{
				s="Overweight";
			}
			else if(c>=30&&c<35)
			{
				s="Obese Class I (Moderately obese)";
			}
			else if(c>=35&&c<40)
			{
				s="Obese Class II (Severely obese)";
			}
			else if(c>=40)
			{
				s="Obese Class III (Very severely obese)";
			}
			return s;
		}

			
	  private:
		 float weight ;
		 float high;
		 float bmi1;
	  };
