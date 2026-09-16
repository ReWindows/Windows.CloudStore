#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 5 member(s).
namespace Windows::Internal::Storage::Cloud::Downloader::Core {
class ProfileDataItemRequestHandlerImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConsentDetails@ProfileDataItemRequestHandlerImpl@Core@Downloader@Cloud@Storage@Internal@Windows@@UEBAAEBUConsentDetails@234567@XZ
    virtual WindissectOpaque const & GetConsentDetails() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnitIdForTelemetry@ProfileDataItemRequestHandlerImpl@Core@Downloader@Cloud@Storage@Internal@Windows@@UEBA?AUhstring@winrt@@UProfileDataItemRequestUnit@345679@@Z
    virtual WindissectOpaque GetUnitIdForTelemetry(WindissectOpaque) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ProfileDataItemRequestHandlerImpl@Core@Downloader@Cloud@Storage@Internal@Windows@@UEAA@XZ
    virtual ~ProfileDataItemRequestHandlerImpl();
};
} // namespace Windows::Internal::Storage::Cloud::Downloader::Core
