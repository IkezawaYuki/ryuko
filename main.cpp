#include <cstdint>
#include <iostream>

extern "C" void unsafe_c_function(char* str)
{
    std::cout << "unsafe_c_function" << str << std::endl;
}

void unsafe_interface_function(void* data)
{
    auto value = reinterpret_cast<std::intptr_t>(data);
    std::cout << "unsafe_interface_function: " << value << std::endl;
}

int main()
{

}