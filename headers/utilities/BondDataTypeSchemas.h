#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 4 member(s).
namespace BondPatch {
class BondDataTypeSchemas {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@BondDataTypeSchemas@BondPatch@@QEAA?AVRuntimeSchema@bond@@W4BondDataType@5_bond_enumerators@4@@Z
    WindissectOpaque Get(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPremadeSchema@BondDataTypeSchemas@BondPatch@@SA?AVRuntimeSchema@bond@@W4BondDataType@5_bond_enumerators@4@@Z
    static WindissectOpaque GetPremadeSchema(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@BondDataTypeSchemas@BondPatch@@QEAAXXZ
    void Initialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BondDataTypeSchemas@BondPatch@@QEAA@XZ
    ~BondDataTypeSchemas();
};
} // namespace BondPatch
