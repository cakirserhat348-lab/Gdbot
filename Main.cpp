#include <Geode/Geode.hpp>
#include <Geode/modify/PlayerObject.hpp>

using namespace geode::prelude;

class $modify(GDBotPlayer, PlayerObject) {
    void update(float dt) {
        PlayerObject::update(dt);
        if (this->m_isOnGround) {
            this->pushButton(PlayerButton::Jump);
        }
    }
};

$on_mod(Loaded) {
    log::info("GD Bot Loaded");
}
