#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 6 member(s).
namespace bond {
class Metadata {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Metadata@bond@@QEAA@AEBU01@@Z
    Metadata(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Metadata@bond@@QEAA@XZ
    Metadata();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Metadata@bond@@QEAA@$$QEAU01@@Z
    Metadata(WindissectOpaque &&);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Metadata@bond@@QEAA@XZ
    ~Metadata();
};
} // namespace bond
