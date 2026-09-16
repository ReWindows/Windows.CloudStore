#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 8 member(s).
class StructWriter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Begin@StructWriter@@UEAAXPEBVRuntimeSchema@bond@@@Z
    virtual void Begin(WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?End@StructWriter@@UEAAXXZ
    virtual void End();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUnknownEnd@StructWriter@@UEAAXXZ
    virtual void SetUnknownEnd();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteBase@StructWriter@@UEAAX$$QEAVstructure@walkable@@@Z
    virtual void WriteBase(WindissectOpaque &&);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteField@StructWriter@@UEAAXG$$QEAVfield@walkable@@@Z
    virtual void WriteField(unsigned short, WindissectOpaque &&);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StructWriter@@UEAA@XZ
    virtual ~StructWriter();
};
