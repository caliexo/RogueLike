#include<iostream>
#include<SDL.h>

#include"GameMain.h"

int main(int argc, char* argv[])
{
	GameMain* Loop = new GameMain;

	Loop->Run();


	delete Loop;
	return 0;
}