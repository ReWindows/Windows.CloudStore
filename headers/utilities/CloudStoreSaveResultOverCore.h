#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 37 member(s).
namespace Windows::Internal::Storage::Cloud {
class CloudStoreSaveResultOverCore {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CloudStoreSaveResultOverCore@Cloud@Storage@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CloudStoreSaveResultOverCore@Cloud@Storage@Internal@Windows@@QEAA@PEAUICloudStoreData@1234@@Z
    CloudStoreSaveResultOverCore(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CloudStoreSaveResultOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CloudStoreSaveResultOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CloudStoreSaveResultOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CloudStoreSaveResultOverCore@Cloud@Storage@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CloudStoreSaveResultOverCore@Cloud@Storage@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CloudEtag@CloudStoreSaveResultOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_CloudEtag(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ResultCode@CloudStoreSaveResultOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEAJ@Z
    virtual long get_ResultCode(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RetryAfter@CloudStoreSaveResultOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get_RetryAfter(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SavedData@CloudStoreSaveResultOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUICloudStoreData@2345@@Z
    virtual long get_SavedData(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Status@CloudStoreSaveResultOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEAW4CloudStoreDataStatus@2345@@Z
    virtual long get_Status(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Version@CloudStoreSaveResultOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get_Version(uint64_t *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CloudStoreSaveResultOverCore@Cloud@Storage@Internal@Windows@@UEAA@XZ
    virtual ~CloudStoreSaveResultOverCore();
};
} // namespace Windows::Internal::Storage::Cloud
