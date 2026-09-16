#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 3 member(s).
class IdGenerator {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemId@IdGenerator@@QEAA?AVCloudStoreItemId@Core@Cloud@Storage@Internal@Windows@@XZ
    WindissectOpaque GetItemId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopLast@IdGenerator@@QEAAXXZ
    void PopLast();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1IdGenerator@@QEAA@XZ
    ~IdGenerator();
};
