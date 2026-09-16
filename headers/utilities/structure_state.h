#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 4 member(s).
namespace walkable::complex {
class structure_state {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_hash@structure_state@complex@walkable@@UEBA_KXZ
    virtual uint64_t get_hash() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_kind@structure_state@complex@walkable@@UEBA?AW4complex_kind@3@XZ
    virtual int get_kind() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_structure@structure_state@complex@walkable@@UEBAAEBVstructure@3@XZ
    virtual WindissectOpaque const & get_structure() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0structure_state@complex@walkable@@QEAA@$$QEAVstructure@2@@Z
    structure_state(WindissectOpaque &&);
};
} // namespace walkable::complex
