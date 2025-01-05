#include<iostream>
using namespace std;

class Mobile{
	public:
		void makeCall(){
			cout<<"Calling.....";
		}
};
int main(){
	Mobile mob;
	mob.makeCall();
}
