#include "stdafx.h"


int main()
{
	using std::cout;
	DWORD dwVolumeSerialNumber;
	GetVolumeInformation(NULL, NULL, NULL, &dwVolumeSerialNumber, NULL, NULL, NULL, NULL);//get HDD Serial Number
	std::string HDDserial = std::to_string(dwVolumeSerialNumber);//put the serial number in a string
	std:cout << "Here is Your HWID SKID!: " << HDDserial << std::endl;//print the string
	while (true) {}//this is stupid but is the only way to keep the console open oof
    return 0;
}

