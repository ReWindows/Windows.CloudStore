#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 9 member(s).
namespace Windows::Internal::Storage::Cloud::Downloader::Core {
class DownloaderCoreImpl {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DownloaderCoreImpl@Core@Downloader@Cloud@Storage@Internal@Windows@@UEAA@XZ
    virtual ~DownloaderCoreImpl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogDownloadRequestCancelled@DownloaderCoreImpl@Core@Downloader@Cloud@Storage@Internal@Windows@@AEAAXAEBUHttpRequestMessage@Http@Web@7winrt@@VCorrelationVector@24567@@Z
    void LogDownloadRequestCancelled(WindissectOpaque const &, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogDownloadRequestFailed@DownloaderCoreImpl@Core@Downloader@Cloud@Storage@Internal@Windows@@AEAAXAEBUHttpRequestMessage@Http@Web@7winrt@@AEBUHttpResponseMessage@9Web@7winrt@@VCorrelationVector@24567@@Z
    void LogDownloadRequestFailed(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogDownloadResponseProcessFailed@DownloaderCoreImpl@Core@Downloader@Cloud@Storage@Internal@Windows@@AEAAXAEBUHttpRequestMessage@Http@Web@7winrt@@AEBUHttpResponseMessage@9Web@7winrt@@VCorrelationVector@24567@J@Z
    void LogDownloadResponseProcessFailed(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque, long);
};
} // namespace Windows::Internal::Storage::Cloud::Downloader::Core
