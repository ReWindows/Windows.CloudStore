#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 4 member(s).
namespace walkable::complex {
class set_state {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_element_schema@set_state@complex@walkable@@UEBAAEBVRuntimeSchema@bond@@XZ
    virtual WindissectOpaque const & get_element_schema() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_hash@set_state@complex@walkable@@UEBA_KXZ
    virtual uint64_t get_hash() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_kind@set_state@complex@walkable@@UEBA?AW4complex_kind@3@XZ
    virtual int get_kind() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1set_state@complex@walkable@@QEAA@XZ
    ~set_state();
};
} // namespace walkable::complex
