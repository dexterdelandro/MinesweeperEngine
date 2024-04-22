#include "Application.hpp"

int main(int argc, char* argv[]) {
    Application app(argc, argv);
    app.Loop(120.0f);
    return 0;
}