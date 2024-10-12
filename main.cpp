#include<windows.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main(){
	while(1){
		SetCursorPos(rand()%1000,rand()%1000);
		mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);
		mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);
	}
	return 0;
}
