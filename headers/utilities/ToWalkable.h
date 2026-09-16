#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 175 member(s).
class ToWalkable {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OmittedField@ToWalkable@@QEBA_NGAEBUMetadata@bond@@W4BondDataType@4_bond_enumerators@3@@Z
    bool OmittedField(unsigned short, WindissectOpaque const &, int) const;
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFieldElementDataTypeId@ToWalkable@@AEBA?AVRuntimeSchema@bond@@G@Z
    WindissectOpaque GetFieldElementDataTypeId(unsigned short) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFieldRuntimeSchemaById@ToWalkable@@AEBA?AVRuntimeSchema@bond@@G@Z
    WindissectOpaque GetFieldRuntimeSchemaById(unsigned short) const;
};
