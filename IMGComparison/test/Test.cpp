#include "IMGComparsion.hpp"
#include <windows.h>

using namespace IMGComparison;

int main()
{
    IMG Image;
    bool Check = IsImageTheSame("hi.png", "hi2.png");
    switch (Check)
    {
    case true:
        MessageBox(0, L"There the same", L"Yes", MB_OK | MB_ICONINFORMATION);
    default:
        MessageBox(0, L"There not the same", L"No", MB_OK | MB_ICONHAND);
    }

    return 0;
}