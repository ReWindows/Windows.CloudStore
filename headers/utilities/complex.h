#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 6 member(s).
namespace walkable {
class complex {
public:
    class list_state;
    class map_state;
    class scalar_state;
    class set_state;
    class state;
    class structure_state;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?compare@complex@walkable@@QEBAHAEBV12@@Z
    int compare(WindissectOpaque const &) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0complex@walkable@@QEAA@$$QEAVscalar@1@@Z
    complex(WindissectOpaque &&);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_bond_type@complex@walkable@@QEBA?AW4BondDataType@3_bond_enumerators@bond@@XZ
    int get_bond_type() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1complex@walkable@@QEAA@XZ
    ~complex();
};
} // namespace walkable
