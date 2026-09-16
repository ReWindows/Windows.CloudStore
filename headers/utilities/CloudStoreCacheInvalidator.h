#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 20 member(s).
namespace Windows::Internal::Storage::Cloud::Partitioning {
class CloudStoreCacheInvalidator {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CloudStoreCacheInvalidator@Partitioning@Cloud@Storage@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CloudStoreCacheInvalidator@Partitioning@Cloud@Storage@Internal@Windows@@QEAA@XZ
    CloudStoreCacheInvalidator();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CloudStoreCacheInvalidator@Partitioning@Cloud@Storage@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CloudStoreCacheInvalidator@Partitioning@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CloudStoreCacheInvalidator@Partitioning@Cloud@Storage@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CloudStoreCacheInvalidator@Partitioning@Cloud@Storage@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CloudStoreCacheInvalidator@Partitioning@Cloud@Storage@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CloudStoreCacheInvalidator@Partitioning@Cloud@Storage@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CloudStoreCacheInvalidator@Partitioning@Cloud@Storage@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@CloudStoreCacheInvalidator@Partitioning@Cloud@Storage@Internal@Windows@@UEAAJPEAUIUser@System@6@@Z
    virtual long Start(::Windows::System::IUser *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@CloudStoreCacheInvalidator@Partitioning@Cloud@Storage@Internal@Windows@@UEAAJXZ
    virtual long Stop();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CloudStoreCacheInvalidator@Partitioning@Cloud@Storage@Internal@Windows@@UEAA@XZ
    virtual ~CloudStoreCacheInvalidator();
};
} // namespace Windows::Internal::Storage::Cloud::Partitioning
