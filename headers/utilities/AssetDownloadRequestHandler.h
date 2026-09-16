#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 4 member(s).
namespace Windows::Internal::Storage::Cloud::Downloader::Core {
class AssetDownloadRequestHandler {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AssetDownloadRequestHandler@Core@Downloader@Cloud@Storage@Internal@Windows@@QEAA@XZ
    AssetDownloadRequestHandler();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnitIdForTelemetry@AssetDownloadRequestHandler@Core@Downloader@Cloud@Storage@Internal@Windows@@UEBA?AUhstring@winrt@@UAssetDownloadUnitId@345679@@Z
    virtual WindissectOpaque GetUnitIdForTelemetry(WindissectOpaque) const;
};
} // namespace Windows::Internal::Storage::Cloud::Downloader::Core
