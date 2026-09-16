#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 4 member(s).
namespace Windows::Internal::Storage::Cloud::Core {
class CloudStoreItemId {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CloudStoreItemId@Core@Cloud@Storage@Internal@Windows@@QEAA@AEBV012345@@Z
    CloudStoreItemId(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CloudStoreItemId@Core@Cloud@Storage@Internal@Windows@@QEAA@$$QEAV012345@@Z
    CloudStoreItemId(WindissectOpaque &&);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CloudStoreItemId@Core@Cloud@Storage@Internal@Windows@@QEAA@XZ
    ~CloudStoreItemId();
};
} // namespace Windows::Internal::Storage::Cloud::Core
