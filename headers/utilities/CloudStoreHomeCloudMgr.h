#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 8 member(s).
namespace Windows::Internal::Storage::Cloud {
class CloudStoreHomeCloudMgr {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHomeCloudAsync@CloudStoreHomeCloudMgr@Cloud@Storage@Internal@Windows@@UEAA?AU?$IAsyncOperation@UUri@Foundation@Windows@winrt@@@Foundation@5winrt@@UWebAccount@Credentials@Security@58@UHttpCredentialsHeaderValue@Headers@Http@Web@58@UHttpClient@Http@Web@58@@Z
    virtual WindissectOpaque GetHomeCloudAsync(WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CloudStoreHomeCloudMgr@Cloud@Storage@Internal@Windows@@UEAA@XZ
    virtual ~CloudStoreHomeCloudMgr();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryLoadHomeCloudInfoFromCache@CloudStoreHomeCloudMgr@Cloud@Storage@Internal@Windows@@AEAA?AUHomeCloudInfo@2345@Uhstring@winrt@@@Z
    WindissectOpaque TryLoadHomeCloudInfoFromCache(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryLoadProtocolHomeCloudInfoFromCache@CloudStoreHomeCloudMgr@Cloud@Storage@Internal@Windows@@AEAA?AUHomeCloudInfo@2345@PEBG0@Z
    WindissectOpaque TryLoadProtocolHomeCloudInfoFromCache(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHomeCloudInfoCache@CloudStoreHomeCloudMgr@Cloud@Storage@Internal@Windows@@AEAA_NUhstring@winrt@@AEBUHomeCloudInfo@2345@@Z
    bool UpdateHomeCloudInfoCache(WindissectOpaque, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateHttpsPrefixOnUrl@CloudStoreHomeCloudMgr@Cloud@Storage@Internal@Windows@@AEAA_NPEBG@Z
    bool ValidateHttpsPrefixOnUrl(unsigned short const *);
};
} // namespace Windows::Internal::Storage::Cloud
