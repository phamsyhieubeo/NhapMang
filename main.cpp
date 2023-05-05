#include <iostream>

int main(){
    int a[100];
    int n = 0;
    std::cin >> n;
    for(int i =0; i < n; i++){
        std::cout << "Nhap phan tu: ";
        std::cin >> a[i];
        if (a[i] % 5 == 0){
            std::cout << a[i] << '\n';
        }else if(a[i] % 2 == 0){
            std::cout << a[i] << '\n';
        }
    }
}