#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 5 member(s).
class MapWriter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReserveSize@MapWriter@@UEAAXI@Z
    virtual void ReserveSize(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteMapElement@MapWriter@@UEAAX$$QEAVscalar@walkable@@$$QEAVcomplex@3@@Z
    virtual void WriteMapElement(WindissectOpaque &&, WindissectOpaque &&);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MapWriter@@UEAA@XZ
    virtual ~MapWriter();
};
