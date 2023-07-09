#include <vector>
#include <string_view>

extern int safe_main(const std::vector<std::string_view> args);

int main(int argc, char** argv) {
    return safe_main(std::vector<std::string_view>(argv, std::next(argv, argc)));
}