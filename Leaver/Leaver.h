#pragma once
#include<iostream>

#ifdef LVR
#define M __declspec(dllexport)
#else
#define M __declspec(dllimport)
#endif // !LVR

class M Leaver
{
public:
	Leaver();
	~Leaver();
	void leave(std::string msg);
};