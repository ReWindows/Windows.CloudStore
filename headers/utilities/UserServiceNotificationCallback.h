#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 5 member(s).
class UserServiceNotificationCallback {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnServiceReady@UserServiceNotificationCallback@@UEAAXXZ
    virtual void OnServiceReady();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryWait@UserServiceNotificationCallback@@SAX_KI@Z
    static void TryWait(uint64_t, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UserServiceNotificationCallback@@UEAA@XZ
    virtual ~UserServiceNotificationCallback();
};
