#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 7 member(s).
namespace bond {
class RuntimeSchema {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBaseSchema@RuntimeSchema@bond@@QEBA?AV12@XZ
    WindissectOpaque GetBaseSchema() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RuntimeSchema@bond@@QEAA@AEBV01@@Z
    RuntimeSchema(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RuntimeSchema@bond@@QEAA@AEBV01@AEBUTypeDef@1@@Z
    RuntimeSchema(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RuntimeSchema@bond@@QEAA@$$QEAV01@@Z
    RuntimeSchema(WindissectOpaque &&);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RuntimeSchema@bond@@QEAA@XZ
    ~RuntimeSchema();
};
} // namespace bond
