#include <cstddef> // NULL
#include <compiler_detection.hpp>

int main()
{
#ifdef FEATURE_NULLPTR
    int* n = nullptr;
#else
    int* n = NULL;
#endif // CXX_NULLPTR

    return 0;
}