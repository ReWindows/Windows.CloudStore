#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 5 member(s).
namespace Windows::Internal::Storage::Cloud::Core {
class CloudChangeNotificationDispatcher {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemChanged@CloudChangeNotificationDispatcher@Core@Cloud@Storage@Internal@Windows@@UEAAXAEBVCloudStoreItemId@23456@W4ChangeKind@23456@@Z
    virtual void OnItemChanged(WindissectOpaque const &, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CloudChangeNotificationDispatcher@Core@Cloud@Storage@Internal@Windows@@UEAA@XZ
    virtual ~CloudChangeNotificationDispatcher();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PublishWnf@CloudChangeNotificationDispatcher@Core@Cloud@Storage@Internal@Windows@@AEAAXAEBU_WNF_STATE_NAME@@@Z
    void PublishWnf(_WNF_STATE_NAME const &);
};
} // namespace Windows::Internal::Storage::Cloud::Core
