#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 35 member(s).
class CTypeServices {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CTypeServices@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDataStoreId@CTypeServices@@UEAAJW4PartitionKind@Cloud@Storage@Internal@Windows@@PEAUHSTRING__@@11PEAPEAU7@@Z
    virtual long CreateDataStoreId(int, HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindMatchingTypeNames@CTypeServices@@UEAAJW4FindMatchingTypeOptions@@PEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Z
    virtual long FindMatchingTypeNames(int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CTypeServices@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemAttributes@CTypeServices@@UEAAJPEBGPEAUTypeAttributes@@@Z
    virtual long GetItemAttributes(unsigned short const *, TypeAttributes *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CTypeServices@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSchemaOfTypeName@CTypeServices@@UEAAJPEBGPEAPEAUIRefcountedSchema@@@Z
    virtual long GetSchemaOfTypeName(unsigned short const *, IRefcountedSchema * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CTypeServices@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseDataStoreId@CTypeServices@@UEAAJPEAUHSTRING__@@PEAW4PartitionKind@Cloud@Storage@Internal@Windows@@PEAPEAU2@22@Z
    virtual long ParseDataStoreId(HSTRING__*, int *, HSTRING__* *, HSTRING__* *, HSTRING__* *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CTypeServices@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterSchema@CTypeServices@@UEAAJPEBEK@Z
    virtual long RegisterSchema(unsigned char const *, unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTypeServices@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveItem@CTypeServices@@UEAAJPEBGPEAUIBuffer@Streams@Storage@Windows@@_K1212PEAPEAU2345@PEA_K@Z
    virtual long ResolveItem(unsigned short const *, WindissectOpaque *, uint64_t, WindissectOpaque *, uint64_t, WindissectOpaque *, uint64_t, WindissectOpaque * *, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSchemaProvider@CTypeServices@@UEAAJPEAUICloudStoreSchemaProvider@@@Z
    virtual long SetSchemaProvider(ICloudStoreSchemaProvider *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTypeServices@@UEAA@XZ
    virtual ~CTypeServices();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifiedTypeNameFromDataStoreId@CTypeServices@@AEAAJPEBGPEAPEAUHSTRING__@@@Z
    long GetQualifiedTypeNameFromDataStoreId(unsigned short const *, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSchemaOfTypeNameInternal@CTypeServices@@AEAA?BVRuntimeSchema@bond@@PEBG@Z
    WindissectOpaque GetSchemaOfTypeNameInternal(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetPartitionKindFromString@CTypeServices@@CA?AW4PartitionKind@Cloud@Storage@Internal@Windows@@PEBG@Z
    static int s_GetPartitionKindFromString(unsigned short const *);
};
