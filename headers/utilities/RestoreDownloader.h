#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 4 member(s).
namespace winrt::Windows::Internal::Storage::Cloud::Downloader::implementation {
class RestoreDownloader {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DownloadUnitsAsync@RestoreDownloader@implementation@Downloader@Cloud@Storage@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperationWithProgress@UDownloadResult@Downloader@Cloud@Storage@Internal@Windows@winrt@@UDownloadProgress@234567@@Foundation@78@U?$IIterable@UDownloadUnitId@Downloader@Cloud@Storage@Internal@Windows@winrt@@@Collections@Foundation@78@@Z
    WindissectOpaque DownloadUnitsAsync(WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RestoreDownloader@implementation@Downloader@Cloud@Storage@Internal@Windows@winrt@@UEAA@XZ
    virtual ~RestoreDownloader();
};
} // namespace winrt::Windows::Internal::Storage::Cloud::Downloader::implementation
