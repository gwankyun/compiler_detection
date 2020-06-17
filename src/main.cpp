#include <cstddef> // NULL
#include "compile_features/compile_features.h"

int main()
{
#ifdef CXX_NULLPTR
    int* n = nullptr;
#else
    int* n = NULL;
#endif // CXX_NULLPTR

    return 0;
}