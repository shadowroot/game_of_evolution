#ifndef _H_EVO_ENGINE
#define _H_EVO_ENGINE

#include "stdafx.h"
#include <vector>
#include <GdiPlus.h>

#define gensize size_t
#define RESULT DWORD
#define DNA vector<gensize>


class evo_engine{
private:
	HDC hDC;
	vector<gensize> vGenes;
	vector<gensize> vPrevGenes;
	vector<DNA> vDNA;
	vector<int> vDeadEnd; //Death line 1000 iterations by default
	HANDLE thread;
	int DEATHLINE=1000;
	vector<HANDLE> vThreads;

public:
	evo_engine();
	evo_engine(HDC hDC);
	virtual ~evo_engine();
	void mutate(vector<gensize> genom);
	DWORD check_results(vector<gensize> genom);
	void loop();
	void config();
	void runThreads();
	void die(DWORD msg);
}

#endif