#pragma once
#include <string>

struct ServerInfo
{
	std::string serverName;
	std::string region;
	int currentPlayerCount;
	int maxPlayerCount;
	int ping;
};

class ServerBrowserService
{
private:

	//constant variable indicating the array capacity
	const static int SERVERINFO_CAPACITY = 10;

	//list of all servers
	ServerInfo servers [ SERVERINFO_CAPACITY ];

	//count of all servers
	int serverCount;

public:
	ServerBrowserService();

	// regesters a server
	bool registerServer(ServerInfo newServer);

	// copies server entries
	// returns total numbber of servers meeting the filter settrings
	int getServers(ServerInfo * dstArray, size_t distSize);
};