#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 3 member(s).
namespace Windows::Internal::Storage::Cloud::Core {
class CloudStoreCollectionId {
public:
    class Equal;
    class Hash;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CloudStoreCollectionId@Core@Cloud@Storage@Internal@Windows@@QEAA@AEBV012345@@Z
    CloudStoreCollectionId(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CloudStoreCollectionId@Core@Cloud@Storage@Internal@Windows@@QEAA@$$QEAV012345@@Z
    CloudStoreCollectionId(WindissectOpaque &&);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CloudStoreCollectionId@Core@Cloud@Storage@Internal@Windows@@QEAA@XZ
    ~CloudStoreCollectionId();
};
} // namespace Windows::Internal::Storage::Cloud::Core
