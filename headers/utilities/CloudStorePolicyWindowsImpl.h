#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 8 member(s).
namespace Windows::Internal::Storage::Cloud::Policy {
class CloudStorePolicyWindowsImpl {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CloudStorePolicyWindowsImpl@Policy@Cloud@Storage@Internal@Windows@@UEAA@XZ
    virtual ~CloudStorePolicyWindowsImpl();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCDPActivityStoreManagement@CloudStorePolicyWindowsImpl@Policy@Cloud@Storage@Internal@Windows@@AEAAAEAVICDPActivityStoreManagement@@XZ
    ICDPActivityStoreManagement & GetCDPActivityStoreManagement();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupPolicyNameOffset@CloudStorePolicyWindowsImpl@Policy@Cloud@Storage@Internal@Windows@@AEAA_KPEBG@Z
    uint64_t GetGroupPolicyNameOffset(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPolicyFromRegistry@CloudStorePolicyWindowsImpl@Policy@Cloud@Storage@Internal@Windows@@AEAA?AW4CloudStorePolicyCoreOptions@Core@3456@PEBG@Z
    int GetPolicyFromRegistry(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PublishPolicyChanged@CloudStorePolicyWindowsImpl@Policy@Cloud@Storage@Internal@Windows@@AEAAXXZ
    void PublishPolicyChanged();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPolicyInCds@CloudStorePolicyWindowsImpl@Policy@Cloud@Storage@Internal@Windows@@AEAAJPEBDW4CloudStorePolicyCoreOptions@Core@3456@@Z
    long SetPolicyInCds(char const *, int);
};
} // namespace Windows::Internal::Storage::Cloud::Policy
