#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 6 member(s).
namespace walkable {
class structure {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?compare@structure@walkable@@QEBAHAEBV12@@Z
    int compare(WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_base@structure@walkable@@QEBAAEBV12@XZ
    WindissectOpaque const & get_base() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0structure@walkable@@QEAA@$$QEAV01@@Z
    structure(WindissectOpaque &&);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0structure@walkable@@QEAA@AEBV01@@Z
    structure(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1structure@walkable@@QEAA@XZ
    ~structure();
};
} // namespace walkable
