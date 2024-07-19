#include <iostream>
#include <string>
#include <unordered_set>

class View {
private:
    std::unordered_set<std::string> dirtyGroups;

public:
    void dirty(const std::string& group) {
        dirtyGroups.insert(group);
        std::cout << "Group '" << group << "' marked as dirty." << std::endl;
    }

    void render() {
        if (dirtyGroups.empty()) {
            std::cout << "No groups need rendering." << std::endl;
            return;
        }

        for (const auto& group : dirtyGroups) {
            std::cout << "Rendering group: " << group << std::endl;
        }

        dirtyGroups.clear();
    }
};

int main() {
    View view;
    std::string group1 = "header";
    std::string group2 = "footer";

    // Mark groups as dirty
    view.dirty(group1);
    view.dirty(group2);

    // Render all dirty groups
    view.render();

    return 0;
}
