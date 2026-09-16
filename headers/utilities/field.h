#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 6 member(s).
namespace walkable {
class field {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0field@walkable@@QEAA@$$QEAV01@@Z
    field(WindissectOpaque &&);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0field@walkable@@QEAA@AEBV01@@Z
    field(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_metadata@field@walkable@@QEBAAEBUMetadata@bond@@XZ
    WindissectOpaque const & get_metadata() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?make@field@walkable@@SA?AV12@AEBUMetadata@bond@@$$QEAVcomplex@2@@Z
    static WindissectOpaque make(WindissectOpaque const &, WindissectOpaque &&);
    // Category: Method | Source: PDB Internal
    // Symbol: ?make_unknown@field@walkable@@SA?AV12@$$QEAVcomplex@2@@Z
    static WindissectOpaque make_unknown(WindissectOpaque &&);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1field@walkable@@QEAA@XZ
    ~field();
};
} // namespace walkable
