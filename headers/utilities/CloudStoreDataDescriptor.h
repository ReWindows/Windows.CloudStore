#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 10 member(s).
namespace Windows::Internal::Storage::Cloud {
class CloudStoreDataDescriptor {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDataStream@CloudStoreDataDescriptor@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUIStream@@@Z
    virtual long GetDataStream(IStream * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetId@CloudStoreDataDescriptor@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAG@Z
    virtual long GetId(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInstanceId@CloudStoreDataDescriptor@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAG@Z
    virtual long GetInstanceId(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRoot@CloudStoreDataDescriptor@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAG@Z
    virtual long GetRoot(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTag@CloudStoreDataDescriptor@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAG@Z
    virtual long GetTag(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVersion@CloudStoreDataDescriptor@Cloud@Storage@Internal@Windows@@UEAAJPEA_K@Z
    virtual long GetVersion(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CloudStoreDataDescriptor@Cloud@Storage@Internal@Windows@@QEAAJPEBG000_KPEAUIStream@@@Z
    long RuntimeClassInitialize(unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, uint64_t, IStream *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CloudStoreDataDescriptor@Cloud@Storage@Internal@Windows@@UEAA@XZ
    virtual ~CloudStoreDataDescriptor();
};
} // namespace Windows::Internal::Storage::Cloud
