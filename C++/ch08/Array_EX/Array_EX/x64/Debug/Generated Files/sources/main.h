#pragma once
#include "main.g.h"

// Note: Remove this static_assert after copying these generated source files to your project.
// This assertion exists to avoid compiling these generated source files directly.
static_assert(false, "Do not compile generated C++/WinRT source files directly");

namespace winrt::ArrayEX::implementation
{
    struct main : mainT<main>
    {
        main() = default;

        int32_t MyProperty();
        void MyProperty(int32_t value);
    };
}
namespace winrt::ArrayEX::factory_implementation
{
    struct main : mainT<main, implementation::main>
    {
    };
}
