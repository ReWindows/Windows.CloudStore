#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 8 member(s).
class CSimpleEnumString {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddString@CSimpleEnumString@@QEAAJPEBG@Z
    long AddString(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CSimpleEnumString@@UEAAJPEAPEAUIEnumString@@@Z
    virtual long Clone(IEnumString * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CSimpleEnumString@@UEAAJKPEAPEAGPEAK@Z
    virtual long Next(unsigned long, unsigned short * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CSimpleEnumString@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Skip@CSimpleEnumString@@UEAAJK@Z
    virtual long Skip(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSimpleEnumString@@UEAA@XZ
    virtual ~CSimpleEnumString();
};
