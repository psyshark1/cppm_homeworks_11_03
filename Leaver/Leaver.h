#pragma once
#include<iostream>

#ifndef LVR
#define M __declspec(dllexport)
#else
#define M __declspec(dllimport)
#endif // !LVR

class Leaver
{
public:
	M Leaver();
	M ~Leaver();
	M void leave(std::string msg);
};