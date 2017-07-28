/*
 * main.cpp
 *
 *  Created on: Jan 18, 2017
 *      Author: user
 */

#include <HamsterAPIClientCPP/Hamster.h>
#include <iostream>
using namespace std;
using namespace HamsterAPI;
/*
int main() {
	Hamster* hamster;
	try {
		 hamster = new HamsterAPI::Hamster(1);
		sleep(1);

		while (hamster->isConnected()) {
			try {

				HamsterAPI::LidarScan ld = hamster->getLidarScan();
				if (ld.getDistance(180) < 0.4) {
					hamster->sendSpeed(-0.5, 10);
					cout << "Front: " << ld.getDistance(180) << endl;
				} else if (ld.getDistance(180) < 0.8) {
					hamster->sendSpeed(0.5, 45);
					cout << "Front: " << ld.getDistance(180) << endl;
				}

				else
					hamster->sendSpeed(1.0, 0);

			} catch (const HamsterAPI::HamsterError & message_error) {
				HamsterAPI::Log::i("Client", message_error.what());
			}

		}
	} catch (const HamsterAPI::HamsterError & connection_error) {
		HamsterAPI::Log::i("Client", connection_error.what());
	}
	return 0;
}
*/
