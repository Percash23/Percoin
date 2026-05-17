#include <chainparamsbase.h>
#include <clientversion.h>
#include <init.h>
#include <node/context.h>
#include <util/system.h>

#if HAVE_CONFIG_H
#include <config/percoin-config.h>
#endif

int main(int argc, char* argv[])
{
    SetupEnvironment();

    node::NodeContext node;

    return AppInit(argc, argv, node)
        ? EXIT_SUCCESS
        : EXIT_FAILURE;
}
