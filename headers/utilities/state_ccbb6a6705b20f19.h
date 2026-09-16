#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 4 member(s).
namespace walkable::complex {
class state {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_element_schema@state@complex@walkable@@UEBAAEBVRuntimeSchema@bond@@XZ
    virtual WindissectOpaque const & get_element_schema() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_key_bond_type@state@complex@walkable@@UEBA?AW4BondDataType@4_bond_enumerators@bond@@XZ
    virtual int get_key_bond_type() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_scalar@state@complex@walkable@@UEBAAEBVscalar@3@XZ
    virtual WindissectOpaque const & get_scalar() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_structure@state@complex@walkable@@UEBAAEBVstructure@3@XZ
    virtual WindissectOpaque const & get_structure() const;
};
} // namespace walkable::complex
