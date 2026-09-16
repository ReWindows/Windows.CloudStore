#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 14 member(s).
namespace bond {
class blob {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?assign@blob@bond@@QEAAXAEBV12@II@Z
    void assign(WindissectOpaque const &, unsigned int, unsigned int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0blob@bond@@QEAA@XZ
    blob();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0blob@bond@@QEAA@PEBXI@Z
    blob(void const *, unsigned int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0blob@bond@@QEAA@$$QEAV01@@Z
    blob(WindissectOpaque &&);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0blob@bond@@QEAA@AEBV?$shared_ptr@$$BY0A@$$CBD@boost@@II@Z
    blob(WindissectOpaque const &, unsigned int, unsigned int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0blob@bond@@QEAA@AEBV?$shared_ptr@$$BY0A@D@boost@@I@Z
    blob(WindissectOpaque const &, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?range@blob@bond@@QEBA?AV12@I@Z
    WindissectOpaque range(unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?swap@blob@bond@@QEAAXAEAV12@@Z
    void swap(WindissectOpaque &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1blob@bond@@QEAA@XZ
    ~blob();
};
} // namespace bond
