#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 61 member(s).
namespace Windows::Internal::Storage::Cloud {
class CloudStoreDataOverCore {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CloudStoreDataOverCore@Cloud@Storage@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CloudStoreDataOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CloudStoreDataOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CloudStoreDataOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CloudStoreDataOverCore@Cloud@Storage@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CloudStoreDataOverCore@Cloud@Storage@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unwrap@CloudStoreDataOverCore@Cloud@Storage@Internal@Windows@@UEAAAEBUEntry@CloudStoreCore@Core@2345@XZ
    virtual WindissectOpaque const & Unwrap();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CloudData@CloudStoreDataOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_CloudData(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CloudEtag@CloudStoreDataOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_CloudEtag(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Data@CloudStoreDataOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUIBuffer@Streams@35@@Z
    virtual long get_Data(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DataDescriptionLanguage@CloudStoreDataOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEAW4DataDescriptionLanguage@2345@@Z
    virtual long get_DataDescriptionLanguage(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DataStates@CloudStoreDataOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEAW4DataObjectStates@2345@@Z
    virtual long get_DataStates(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ItemName@CloudStoreDataOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUICloudStoreItemName@2345@@Z
    virtual long get_ItemName(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ResultCode@CloudStoreDataOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEAJ@Z
    virtual long get_ResultCode(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RetryAfter@CloudStoreDataOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get_RetryAfter(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Status@CloudStoreDataOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEAW4CloudStoreDataStatus@2345@@Z
    virtual long get_Status(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Version@CloudStoreDataOverCore@Cloud@Storage@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get_Version(uint64_t *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CloudStoreDataOverCore@Cloud@Storage@Internal@Windows@@UEAA@XZ
    virtual ~CloudStoreDataOverCore();
};
} // namespace Windows::Internal::Storage::Cloud
