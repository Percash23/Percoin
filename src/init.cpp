bool AppInit(int argc, char* argv[], node::NodeContext& node)
{
    SetupNetworking();

    if (!AppInitBasicSetup())
        return false;

    if (!AppInitParameterInteraction())
        return false;

    if (!AppInitSanityChecks())
        return false;

    if (!AppInitLockDataDirectory())
        return false;

    if (!AppInitInterfaces(node))
        return false;

    if (!AppInitMain(node))
        return false;

    return true;
}
