#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 8 member(s).
class WalkableFormatWriter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Begin@WalkableFormatWriter@@UEAAXPEBVRuntimeSchema@bond@@@Z
    virtual void Begin(WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?End@WalkableFormatWriter@@UEAAXXZ
    virtual void End();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReserveSize@WalkableFormatWriter@@UEAAXI@Z
    virtual void ReserveSize(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUnknownEnd@WalkableFormatWriter@@UEAAXXZ
    virtual void SetUnknownEnd();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteBase@WalkableFormatWriter@@UEAAX$$QEAVstructure@walkable@@@Z
    virtual void WriteBase(WindissectOpaque &&);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteElement@WalkableFormatWriter@@UEAAX$$QEAVcomplex@walkable@@@Z
    virtual void WriteElement(WindissectOpaque &&);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteField@WalkableFormatWriter@@UEAAXG$$QEAVfield@walkable@@@Z
    virtual void WriteField(unsigned short, WindissectOpaque &&);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteMapElement@WalkableFormatWriter@@UEAAX$$QEAVscalar@walkable@@$$QEAVcomplex@3@@Z
    virtual void WriteMapElement(WindissectOpaque &&, WindissectOpaque &&);
};
