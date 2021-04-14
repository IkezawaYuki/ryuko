#include <algorithm>
#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    std::vector v = {10,-3,2,0,-1,-5,4,2,1};
    std::vector<int> c(v.size());

    std::copy(v.begin(), v.end(), c.begin());
    for (auto e : c)
    {
        std::cout << e << " ";
    }
    std::cout << std::endl;
    auto last = std::copy_if(v.rbegin(), v.rend(), c.begin(), [](int i){return 0 < i;});
    c.erase(last, c.end());
    for (auto e : c){
        std::cout << e << " ";
    }
    std::cout << std::endl;
}