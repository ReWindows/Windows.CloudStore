#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 4 member(s).
class WindowsWaitForThreadResult {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetResult@WindowsWaitForThreadResult@@UEAAXJ@Z
    virtual void SetResult(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForResult@WindowsWaitForThreadResult@@UEAAJI@Z
    virtual long WaitForResult(unsigned int);
};
