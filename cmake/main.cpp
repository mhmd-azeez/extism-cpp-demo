#include <iostream>

extern "C" {
#include <extism.h>
}

#pragma comment(lib, "extism.lib")

// #if defined(_WIN32) || defined(_WIN64)

// #pragma comment(lib, "ws2_32.lib")
// #pragma comment(lib, "bcrypt.lib")
// #pragma comment(lib, "userenv.lib")
// #pragma comment(lib, "kernel32.lib")
// #pragma comment(lib, "NtDll.lib")

// #endif

int main()
{
    std::cout << "Extism Version: " << extism_version() << std::endl;
}