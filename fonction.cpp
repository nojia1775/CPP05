#include <iostream>
#include <vector>

int saisie(std::vector<int>& tab, size_t taille = 5) {
    tab.clear();
    std::cout << "Saisie des " << taille << " elements :\n\n";

    while(tab.size() < taille) {
        int val;
        std::cout << "Entrez la valeur " << tab.size() << " : ";
        std::cin >> val;

        if(val < 0 && !tab.empty()) {
            tab.pop_back();
        } else if(val == 0) {
            tab.clear();
        } else if(val > 0) {
            tab.push_back(val);
        }
    }

    std::cout << "les elements sont :\n";

    for(auto i : tab) {
        std::cout << i << "\n";
    }
}