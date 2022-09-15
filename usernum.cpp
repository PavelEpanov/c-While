# include <iostream>
int main(){
    int v1 = 0;
    int v2 = 0;
    std::cout << "Okey> try ur num: " << std::endl;
    std::cin >> v1;
    std::cin >> v2;
    int sum = 0;
    while (v1 <= v2){
        std::cout << "-----" << std::endl;
        std::cout << sum << std::endl;
        ++sum;
        ++v1;
    }
    //std::cout << sum << std::endl;
    return 0;
}