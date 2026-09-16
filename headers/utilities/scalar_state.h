#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 3 member(s).
namespace walkable::complex {
class scalar_state {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_hash@scalar_state@complex@walkable@@UEBA_KXZ
    virtual uint64_t get_hash() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_kind@scalar_state@complex@walkable@@UEBA?AW4complex_kind@3@XZ
    virtual int get_kind() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_scalar@scalar_state@complex@walkable@@UEBAAEBVscalar@3@XZ
    virtual WindissectOpaque const & get_scalar() const;
};
} // namespace walkable::complex
