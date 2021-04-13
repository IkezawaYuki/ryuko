#include <map>
#include <set>
#include <iostream>

int main(){
    std::multiset ims = {1,1,2,2};
    ims.insert(5);
    ims.insert(2);

    auto range = ims.equal_range(2);

    for (auto iter = range.first; iter != range.second; ++iter)
    {
        std::cout << *iter << " ";
    }
    std::cout << std::endl;

    std::size_t erased = ims.erase(2);
    std::cout << "elements num:" << erased << std::endl;

    for (auto iter = ims.begin(); iter != ims.end(); ++iter)
    {
        std::cout << *iter << " ";
    }
    std::cout << std::endl;
}
