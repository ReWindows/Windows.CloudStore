#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 10 member(s).
class CloudStoreActivityFeedHelpers {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CloudStoreActivityFeedHelpers@@QEAA@XZ
    CloudStoreActivityFeedHelpers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCloudStoreActivityFeedData@CloudStoreActivityFeedHelpers@@UEAAJPEBDPEAVICDPCrossPlatformAppId@@0_KEPEAPEAUICloudStoreActivityFeedData@@@Z
    virtual long CreateCloudStoreActivityFeedData(char const *, ICDPCrossPlatformAppId *, char const *, uint64_t, unsigned char, ICloudStoreActivityFeedData * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resolve@CloudStoreActivityFeedHelpers@@UEAAJPEBDPEAVICDPCrossPlatformAppId@@0_K0E202E0PEAPEAUICloudStoreActivityFeedData@@@Z
    virtual long Resolve(char const *, ICDPCrossPlatformAppId *, char const *, uint64_t, char const *, unsigned char, uint64_t, char const *, uint64_t, unsigned char, char const *, ICloudStoreActivityFeedData * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveIndirect@CloudStoreActivityFeedHelpers@@UEAAJPEAUICloudStoreActivityFeedData@@00PEBDPEAPEAU2@@Z
    virtual long ResolveIndirect(ICloudStoreActivityFeedData *, ICloudStoreActivityFeedData *, ICloudStoreActivityFeedData *, char const *, ICloudStoreActivityFeedData * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CloudStoreActivityFeedHelpers@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Transform@CloudStoreActivityFeedHelpers@@UEAAJW4TransformType@@PEAVICDPActivityEncryption@@PEBDU_GUID@@2PEAVICDPCrossPlatformAppId@@2PEAPEAUICloudStoreActivityFeedData@@@Z
    virtual long Transform(int, ICDPActivityEncryption *, char const *, _GUID, char const *, ICDPCrossPlatformAppId *, char const *, ICloudStoreActivityFeedData * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CloudStoreActivityFeedHelpers@@UEAA@XZ
    virtual ~CloudStoreActivityFeedHelpers();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureEffectiveUserContext@CloudStoreActivityFeedHelpers@@AEAAAEBVEffectiveUserContext@@XZ
    EffectiveUserContext const & EnsureEffectiveUserContext();
};
