#include <iostream>
#include "XY.h"
#include "a.h"
#define max 100

using namespace std;


void ve_tuong();
void ran_an_qua(moi s,ran a);
int main(int argc, char** argv) {
	ve_tuong();
	ran a = ran(5,40,15);
	moi s;
	bool gameover = false;
	while(gameover = true){
		s.tao();
		a.move();
	// 	if(ran_an_qua(s,a)==true);
	// 		s.tao();
	//
	 }
}
// bool ran_an_qua(moi s,ran a){
// 	if(a.getx() == s.getxm() && a.gety() == s.getym()){
// 		return true;
// 	}
// 	return false;
// }
void ve_tuong(){
    for(int i =30; i <150; i++){
    	gotoXY(i,5);
    	cout << "o";	
	}
    for(int i =5; i <40 ; i++){
    	gotoXY(150,i);
    	cout << "o";	
	}
	for(int i =5; i <40 ; i++){
    	gotoXY(30,i);
    	cout << "o";	
	}
	for(int i =30; i <151 ; i++){
    	gotoXY(i,40);
    	cout << "o";	
	}
}
