#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 5 member(s).
namespace Windows::Internal::Storage::Cloud {
class ItemChangeCallbackImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemChanged@ItemChangeCallbackImpl@Cloud@Storage@Internal@Windows@@UEAAXAEBVCloudStoreItemId@Core@2345@@Z
    virtual void ItemChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueInitialNotification@ItemChangeCallbackImpl@Cloud@Storage@Internal@Windows@@QEAAXXZ
    void QueueInitialNotification();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ItemChangeCallbackImpl@Cloud@Storage@Internal@Windows@@UEAA@XZ
    virtual ~ItemChangeCallbackImpl();
};
} // namespace Windows::Internal::Storage::Cloud
