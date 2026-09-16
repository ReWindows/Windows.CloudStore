#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 5 member(s).
namespace walkable::complex {
class map_state {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_element_schema@map_state@complex@walkable@@UEBAAEBVRuntimeSchema@bond@@XZ
    virtual WindissectOpaque const & get_element_schema() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_hash@map_state@complex@walkable@@UEBA_KXZ
    virtual uint64_t get_hash() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_key_bond_type@map_state@complex@walkable@@UEBA?AW4BondDataType@4_bond_enumerators@bond@@XZ
    virtual int get_key_bond_type() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_kind@map_state@complex@walkable@@UEBA?AW4complex_kind@3@XZ
    virtual int get_kind() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1map_state@complex@walkable@@QEAA@XZ
    ~map_state();
};
} // namespace walkable::complex
