#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 5 member(s).
namespace Windows::Internal::Storage::Cloud::Downloader::Core {
class ProfileDataItemResponseHandlerImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOverallStatusCode@ProfileDataItemResponseHandlerImpl@Core@Downloader@Cloud@Storage@Internal@Windows@@UEAA?AUhresult@winrt@@XZ
    virtual WindissectOpaque GetOverallStatusCode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSyncToken@ProfileDataItemResponseHandlerImpl@Core@Downloader@Cloud@Storage@Internal@Windows@@UEAA?AUhstring@winrt@@XZ
    virtual WindissectOpaque GetSyncToken();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ProfileDataItemResponseHandlerImpl@Core@Downloader@Cloud@Storage@Internal@Windows@@UEAA@XZ
    virtual ~ProfileDataItemResponseHandlerImpl();
};
} // namespace Windows::Internal::Storage::Cloud::Downloader::Core
