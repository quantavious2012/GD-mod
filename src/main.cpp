#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

struct MyMod : Modify<MyMod, MenuLayer> {
    bool init() {
        if (!MenuLayer::init()) return false;
        
        // This version doesn't use the 'fmt' library, so it won't crash the build
        geode::log::debug("Mod loaded successfully!");
        
        return true;
    }
};
