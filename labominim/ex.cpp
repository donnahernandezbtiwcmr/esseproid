#include <iostream>
#include <string>

// A simple mock-up of a view class
class View {
public:
    void dirty(const std::string& group) {
        std::cout << "Marking group '" << group << "' as dirty. It needs to be re-rendered." << std::endl;
    }
};

int main() {
    View view;
    std::string group = "header";

    // Mark the 'header' group as dirty
    view.dirty(group);

    return 0;
}
