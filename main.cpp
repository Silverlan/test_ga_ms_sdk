#include <iostream>

#include <dwmapi.h>
#pragma comment(lib, "dwmapi.lib")

int main(int argc,char *argv[])
{
	COLORREF hexCol = 0x00505050;
	DwmSetWindowAttribute(GetForegroundWindow(), DWMWINDOWATTRIBUTE::DWMWA_BORDER_COLOR, &hexCol, sizeof(hexCol));
    std::cout<<"Hello world!"<<std::endl;
    return EXIT_SUCCESS;
}
