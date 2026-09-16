#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 5 member(s).
class ListWriter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReserveSize@ListWriter@@UEAAXI@Z
    virtual void ReserveSize(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteElement@ListWriter@@UEAAX$$QEAVcomplex@walkable@@@Z
    virtual void WriteElement(WindissectOpaque &&);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ListWriter@@UEAA@XZ
    virtual ~ListWriter();
};
