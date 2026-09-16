#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 6 member(s).
namespace boost {
class bad_lexical_cast {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0bad_lexical_cast@boost@@QEAA@AEBV01@@Z
    bad_lexical_cast(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0bad_lexical_cast@boost@@QEAA@AEBVtype_info@@0@Z
    bad_lexical_cast(type_info const &, type_info const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?what@bad_lexical_cast@boost@@UEBAPEBDXZ
    virtual char const * what() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1bad_lexical_cast@boost@@UEAA@XZ
    virtual ~bad_lexical_cast();
};
} // namespace boost
