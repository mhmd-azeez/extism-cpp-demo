#include <iostream>

extern "C" {
#include <extism.h>
}

#pragma comment(lib, "extism.dll.lib")

int main()
{
    std::cout << "Extism Version: " << extism_version() << std::endl;
}