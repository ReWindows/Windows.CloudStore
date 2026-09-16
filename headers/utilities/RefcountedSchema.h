#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 5 member(s).
class RefcountedSchema {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RefcountedSchema@@QEAA@AEBVRuntimeSchema@bond@@@Z
    RefcountedSchema(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Schema@RefcountedSchema@@UEAAAEBVRuntimeSchema@bond@@XZ
    virtual WindissectOpaque const & get_Schema();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RefcountedSchema@@UEAA@XZ
    virtual ~RefcountedSchema();
};
