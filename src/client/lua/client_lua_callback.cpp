#include "client_lua_callback.h"

#include <common/scripting/script_engine.h>

void ClientLuaCallbacks::runClientStartupCallbacks()
{
    runLuaCallbacks(onClientStartup);
}