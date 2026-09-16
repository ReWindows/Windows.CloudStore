#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 4 member(s).
namespace Windows::Internal::Storage::Cloud::Downloader::Core {
class CDSRequestHandler {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnitIdForTelemetry@CDSRequestHandler@Core@Downloader@Cloud@Storage@Internal@Windows@@UEBA?AUhstring@winrt@@UDownloadUnitId@345679@@Z
    virtual WindissectOpaque GetUnitIdForTelemetry(WindissectOpaque) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Self@CDSRequestHandler@Core@Downloader@Cloud@Storage@Internal@Windows@@UEBAPEBXXZ
    virtual void const * Self() const;
};
} // namespace Windows::Internal::Storage::Cloud::Downloader::Core
