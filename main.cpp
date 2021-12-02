#include <iostream>
#include <string>
#include <windows.h>

//what the monstorous fuck i have made 
void ruining_ur_life(){
	std::cout << "this is not a scam, click enter to continue.";
	std::cin.ignore();
	
} 

int main(){
	ruining_ur_life();
	ShellExecute(NULL, "open", "https://youtu.be/dQw4w9WgXcQ", NULL, NULL, SW_SHOWNORMAL);
}

