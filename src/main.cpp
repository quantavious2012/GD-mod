#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

struct MyMenuLayer : Modify<MyMenuLayer, MenuLayer> {
    bool init() {
        if (!MenuLayer::init()) return false;

        log::info("Hello from Geode Android!");

        return true;
    }
};
