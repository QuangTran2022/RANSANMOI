#include <iostream>
#include <cstdlib>
#include <ctime>

#include "XY.h"
#define max 100



using namespace std;

class ran{
	protected:
		int sodot,xdau,ydau;
		int tdx[max],tdy[max];
	public:
	ran(int s, int x, int y){
		sodot=s;
		xdau=x;
		ydau=y;
		for (int i = 0;i <sodot;i++)
			{
				tdx[i] = xdau;
				tdy[i] = ydau;
				xdau--;
			}
	}
	int getx(){
		return tdx[0];
	}
	int gety(){
		return tdy[0];
	}
	void ve_ran(){
		for (int i = 0;i < sodot;i++){
			if(i==0)
			{
				gotoXY(tdx[i],tdy[i]);
				cout<< "0";
			}
			else{
				gotoXY(tdx[i],tdy[i]);
				cout<< "o";
			}
		}
	}
	void them(int a[], int x)
	{
		for (int i = sodot;i > 0;i--)
		{
			a[i] = a[i - 1];
		}
		a[0] = x;
		sodot++;
	}
	void xoa(int a[], int vt)
	{
		for (int i = vt;i < sodot;i++)
		{
			a[i] = a[i + 1];
		}
		sodot--;
	}
	void dele(){
		for(int i =0;i<sodot;i++){
			gotoXY(tdx[i],tdy[i]);
			cout<<" ";
		}
	}
	void move(){
	 	int check = 2;
	 	ve_ran();
	 	while(true){
	 	if (_kbhit())
		{
			char kitu = _getch();
			if (kitu == -32)
			{
				kitu = _getch();
				if (kitu == 72 && check != 0)//di len
				{
					check = 1;
				}
				else if (kitu == 80 && check != 1)//di xuong
				{
					check = 0;
				}
				else if (kitu == 77 && check != 3)//di phai
				{
					check = 2;
				}
				else if (kitu == 75 && check != 2)//di trai
				{
					check = 3;
				}
			}
		}
	 	if(check==2){
	 		xdau++;	
		}
		if(check==3){
	 		xdau--;
		}
		if(check==0){
	 		ydau++;
		}
		if(check==1){
	 		ydau--;
		}
		su_ly();
		 Sleep(150);
		 }
	 } 
	void su_ly (){
		dele();
	 	them(tdx,xdau);
	 	them(tdy,ydau);
	 	xoa(tdx,sodot-1);
	 	xoa(tdy,sodot-1);
		ve_ran();
	}
};
class moi{
	private:
		int xqua;
		int yqua;
	public:
		void tao(){
			srand(time(NULL)); 
			xqua=rand() % (150 - 30 + 1) + 30;
			yqua=rand() % (40 - 5 + 1) + 5;
			gotoXY(xqua,yqua);
			cout<<"%";
		}
		int getxm(){
			return xqua;
		}
		int getym(){
			return yqua;
		}
};

