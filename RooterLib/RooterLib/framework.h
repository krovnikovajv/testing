#pragma once

#define WIN32_LEAN_AND_MEAN             // Исключите редко используемые компоненты из заголовков Windows
// Файлы заголовков Windows
#include <windows.h>
#ifdef ROOTERLIB_EXPORTS
#define ROOTERLIB_API  __declspec(dllexport)
#else
#define ROOTERLIB_API __declspec(dllimport)
#endif //ROOTERLIB_EXPORTS

class ROOTERLIB_API CRooterLib {
public:
    CRooterLib(void);
    double SquareRoot(double v);
};