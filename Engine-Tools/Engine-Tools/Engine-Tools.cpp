﻿// Engine-Tools.cpp : Defines the entry point for the application.
//
#include <SDL.h>
#include "Engine-Tools.h"

using namespace std;

int main(int argc, char *argv[])
{
	SDL_Init(SDL_INIT_VIDEO);
	cout << "Hello CMake." << endl;

	SDL_Quit();
	return 0;
}
