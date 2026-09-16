#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 7 member(s).
namespace Windows::Internal::Storage::Cloud::Downloader::Core {
class AccountInfoFetcher {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPdrsHomeCloudAsync@AccountInfoFetcher@Core@Downloader@Cloud@Storage@Internal@Windows@@UEAA?AU?$IAsyncOperation@Uhstring@winrt@@@Foundation@7winrt@@Uhstring@winrt@@0AEBVCorrelationVector@24567@W4HomeCloudProtocolVersion@234567@@Z
    virtual WindissectOpaque GetPdrsHomeCloudAsync(WindissectOpaque, WindissectOpaque, WindissectOpaque const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWebAccountTenantId@AccountInfoFetcher@Core@Downloader@Cloud@Storage@Internal@Windows@@UEAA?AUhstring@winrt@@XZ
    virtual WindissectOpaque GetWebAccountTenantId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWebAccountType@AccountInfoFetcher@Core@Downloader@Cloud@Storage@Internal@Windows@@UEAA?AW4UserAccountType@Common@4567@XZ
    virtual int GetWebAccountType();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AccountInfoFetcher@Core@Downloader@Cloud@Storage@Internal@Windows@@UEAA@XZ
    virtual ~AccountInfoFetcher();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureUserAccountInfoPopulated@AccountInfoFetcher@Core@Downloader@Cloud@Storage@Internal@Windows@@AEAAXXZ
    void EnsureUserAccountInfoPopulated();
};
} // namespace Windows::Internal::Storage::Cloud::Downloader::Core
