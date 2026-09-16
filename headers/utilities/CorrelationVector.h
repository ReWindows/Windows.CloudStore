#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 2 member(s).
namespace Windows::Internal::Storage::Cloud::Core {
class CorrelationVector {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CorrelationVector@Core@Cloud@Storage@Internal@Windows@@QEAA@PEBD@Z
    CorrelationVector(char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Extend@CorrelationVector@Core@Cloud@Storage@Internal@Windows@@QEBA?AV123456@XZ
    WindissectOpaque Extend() const;
};
} // namespace Windows::Internal::Storage::Cloud::Core
