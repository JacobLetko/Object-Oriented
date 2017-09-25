#include "server.h"

ServerBrowserService::ServerBrowserService()
{
	serverCount = 0;
}

bool ServerBrowserService::registerServer(ServerInfo newServer)
{
	if (serverCount <= SERVERINFO_CAPACITY)
	{
		servers[serverCount] = newServer;
		serverCount++;
		return true;
	}
	else
	{
		return false;
	}
}

int ServerBrowserService::getServers(ServerInfo * dstArray, size_t distSize)
{
	int count = 0;

	for (int i = 0; i < serverCount; i++)
	{
		dstArray[count] = servers[i];
		count++;
	}

	return count;
}
