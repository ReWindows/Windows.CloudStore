#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 4 member(s).
namespace walkable::complex {
class list_state {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_element_schema@list_state@complex@walkable@@UEBAAEBVRuntimeSchema@bond@@XZ
    virtual WindissectOpaque const & get_element_schema() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_hash@list_state@complex@walkable@@UEBA_KXZ
    virtual uint64_t get_hash() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_kind@list_state@complex@walkable@@UEBA?AW4complex_kind@3@XZ
    virtual int get_kind() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1list_state@complex@walkable@@QEAA@XZ
    ~list_state();
};
} // namespace walkable::complex
