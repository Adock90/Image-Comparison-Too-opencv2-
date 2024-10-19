//includes header
#include "IMGComparsion.hpp"
// for messagebox
#include <windows.h>

using namespace IMGComparison;

int main()
{
    //creates onject
    IMG Image;
    //uses function
    bool Check = IsImageTheSame("hi.png", "hi2.png");
    // checks result and outputs mesagebox
    switch (Check)
    {
    case true:
        MessageBox(0, L"There the same", L"Yes", MB_OK | MB_ICONINFORMATION);
    default:
        MessageBox(0, L"There not the same", L"No", MB_OK | MB_ICONHAND);
    }

    return 0;
}
