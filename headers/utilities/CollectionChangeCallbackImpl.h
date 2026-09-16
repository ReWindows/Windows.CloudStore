#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 5 member(s).
namespace Windows::Internal::Storage::Cloud {
class CollectionChangeCallbackImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollectionChanged@CollectionChangeCallbackImpl@Cloud@Storage@Internal@Windows@@UEAAXAEBVCloudStoreCollectionId@Core@2345@@Z
    virtual void CollectionChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueInitialNotification@CollectionChangeCallbackImpl@Cloud@Storage@Internal@Windows@@QEAAXXZ
    void QueueInitialNotification();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CollectionChangeCallbackImpl@Cloud@Storage@Internal@Windows@@UEAA@XZ
    virtual ~CollectionChangeCallbackImpl();
};
} // namespace Windows::Internal::Storage::Cloud
