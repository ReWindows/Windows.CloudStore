#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 3 member(s).
class walkable {
public:
    class complex;
    class details;
    class field;
    class scalar;
    class structure;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDefaultInstance@walkable@@YA?AVstructure@1@AEBVRuntimeSchema@bond@@@Z
    WindissectOpaque CreateDefaultInstance(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveStructure@walkable@@YA?AVstructure@1@AEBV21@_K0101PEA_K@Z
    WindissectOpaque ResolveStructure(WindissectOpaque const &, uint64_t, WindissectOpaque const &, uint64_t, WindissectOpaque const &, uint64_t, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnmarshalToWalkable@walkable@@YA?AVstructure@1@AEBVRuntimeSchema@bond@@AEBVblob@4@@Z
    WindissectOpaque UnmarshalToWalkable(WindissectOpaque const &, WindissectOpaque const &);
};
