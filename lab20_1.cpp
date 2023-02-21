#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1,Rect R2){
	double ax2 = R1.x + R1.w;
	double bx2 = R2.x + R2.w;
	double ax1 = R1.x;
	double bx1 = R2.x;

	double ay2 = R1.y - R1.h;
	double by2 = R2.y - R2.h;
	double ay1 = R1.y;
	double by1 = R2.y;

	double lw = min(ax2,bx2) - max(ax1,bx1);
	double lh = min(ay1,by1) - max(ay2,by2);
	if (lw > 0){
		return lw*lh;
	}else  {
	return 0;
	}
}