#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

struct MyMod : Modify<MyMod, MenuLayer> {
    bool init() {
        if (!MenuLayer::init()) return false;
        
        return true;
    }
};
