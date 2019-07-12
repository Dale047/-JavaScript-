#include <iostream>
using namespace std;
int main(){
	int year,month,day;
	int month[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	int week=0;
	cin>>year>>month>>day;
	for (int i=2000;i<y;i++)
		if(crun(year)){
			for (int j=1;j<=12;j++){
				week = month[j];
			}
		}
}

/*判断是否闰年*/
bool crun(int year){
	if(!((year % 400 == 0)||(year % 4 == 0 && year % 4 != 0))){
		return false;
	}
	return true;
}