#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 3 member(s).
class UseCloudStoreOnActivityFeedCache {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UseCloudStoreOnActivityFeedCache@@QEAA@XZ
    UseCloudStoreOnActivityFeedCache();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_IsAadUser@UseCloudStoreOnActivityFeedCache@@CA_NXZ
    static bool s_IsAadUser();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_IsMSA@UseCloudStoreOnActivityFeedCache@@CA_NXZ
    static bool s_IsMSA();
};
