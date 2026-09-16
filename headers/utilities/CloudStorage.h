#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 5 member(s).
namespace Windows::Internal::Storage::Cloud {
class CloudStorage {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Download@CloudStorage@Cloud@Storage@Internal@Windows@@UEAAJPEBG@Z
    virtual long Download(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsNewDataAvailableInCloud@CloudStorage@Cloud@Storage@Internal@Windows@@UEAAJPEBGPEAE@Z
    virtual long IsNewDataAvailableInCloud(unsigned short const *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Upload@CloudStorage@Cloud@Storage@Internal@Windows@@UEAAJPEBGW4UploadPolicyValue@@@Z
    virtual long Upload(unsigned short const *, int);
};
} // namespace Windows::Internal::Storage::Cloud
