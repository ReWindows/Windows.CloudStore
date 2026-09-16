#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 5 member(s).
class SetWriter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReserveSize@SetWriter@@UEAAXI@Z
    virtual void ReserveSize(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteElement@SetWriter@@UEAAX$$QEAVcomplex@walkable@@@Z
    virtual void WriteElement(WindissectOpaque &&);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SetWriter@@UEAA@XZ
    virtual ~SetWriter();
};
