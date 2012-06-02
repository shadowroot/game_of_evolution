/*
Message listing 
-2 Constructor error



*/

#pragma once
#include "engine.h"

evo_engine::evo_engine(){

	this->die((DWORD)-2); //

}

evo_engine::evo_engine(HDC hDC){
	this->hDC = hDC;
	this->config();
}

evo_engine::~evo_engine(){
	
}
void evo_engine::die(DWORD msg){
	MessageBoxA(NULL,(char*) "Error:"+msg,"Error",MB_OK | MB_ICONERROR);
	delete this;
}

RESULT evo_engine::check_results(vector<gensize> genom){


}


/*
	Bits flipping and catching exceptions
*/
void evo_engine::mutate(vector<gensize> genom){
	try{


	}
	catch(void* ptr){
		if(ptr == NULL){
			this->vGenes = this->vPrevGenes;
			this->mutate(this->vGenes);
		}
	}
}
/*
	Running in each thread
	
*/
void evo_engine::loop(){
	while(1){



	}


}


