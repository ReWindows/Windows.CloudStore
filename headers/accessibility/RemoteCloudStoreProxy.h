#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 70 member(s).
class RemoteCloudStoreProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@RemoteCloudStoreProxy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCollectionWatcher@RemoteCloudStoreProxy@@UEAAJW4PartitionKind@Cloud@Storage@Internal@Windows@@PEAUHSTRING__@@11W4LoadOptions@3456@W4CollectionOptions@3456@1PEAPEAUICloudStoreCollectionWatcher@3456@@Z
    virtual long CreateCollectionWatcher(int, HSTRING__*, HSTRING__*, HSTRING__*, int, int, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWatcher@RemoteCloudStoreProxy@@UEAAJW4PartitionKind@Cloud@Storage@Internal@Windows@@PEAUHSTRING__@@111W4CloudDataChangeKinds@3456@_K1PEAPEAUICloudStoreDataWatcher@3456@@Z
    virtual long CreateWatcher(int, HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, int, uint64_t, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@RemoteCloudStoreProxy@@UEAAJW4PartitionKind@Cloud@Storage@Internal@Windows@@PEAUHSTRING__@@111_K1PEAPEAUICloudStoreSaveResult@3456@@Z
    virtual long Delete(int, HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, uint64_t, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromJson@RemoteCloudStoreProxy@@UEAAJPEAUHSTRING__@@PEAUIJsonObject@Json@Data@Windows@@PEAPEAUIBuffer@Streams@Storage@6@@Z
    virtual long FromJson(HSTRING__*, ::Windows::Data::Json::IJsonObject *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromJsonText@RemoteCloudStoreProxy@@UEAAJPEAUHSTRING__@@0PEAPEAUIBuffer@Streams@Storage@Windows@@@Z
    virtual long FromJsonText(HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackupStatus@RemoteCloudStoreProxy@@UEAAJPEAUHSTRING__@@PEAW4UploadStatus@Cloud@Storage@Internal@Windows@@@Z
    virtual long GetBackupStatus(HSTRING__*, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCollectionItemNames@RemoteCloudStoreProxy@@UEAAJW4PartitionKind@Cloud@Storage@Internal@Windows@@PEAUHSTRING__@@11W4LoadOptions@3456@W4CollectionOptions@3456@1PEAPEAU?$IVectorView@PEAVCloudStoreItemName@Cloud@Storage@Internal@Windows@@@Collections@Foundation@6@@Z
    virtual long GetCollectionItemNames(int, HSTRING__*, HSTRING__*, HSTRING__*, int, int, HSTRING__*, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@RemoteCloudStoreProxy@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextVersion@RemoteCloudStoreProxy@@UEAAJPEAUHSTRING__@@PEA_K@Z
    virtual long GetNextVersion(HSTRING__*, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextVersionAfterTime@RemoteCloudStoreProxy@@UEAAJPEAUHSTRING__@@UDateTime@Foundation@Windows@@PEA_K@Z
    virtual long GetNextVersionAfterTime(HSTRING__*, ::Windows::Foundation::DateTime, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@RemoteCloudStoreProxy@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSchema@RemoteCloudStoreProxy@@UEAAJPEAUHSTRING__@@PEAPEAUICloudStoreSchema@Cloud@Storage@Internal@Windows@@@Z
    virtual long GetSchema(HSTRING__*, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@RemoteCloudStoreProxy@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVersion@RemoteCloudStoreProxy@@UEAAJW4PartitionKind@Cloud@Storage@Internal@Windows@@PEAUHSTRING__@@1111PEA_K@Z
    virtual long GetVersion(int, HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsNewDataAvailableInCloud@RemoteCloudStoreProxy@@UEAAJW4PartitionKind@Cloud@Storage@Internal@Windows@@PEAUHSTRING__@@1111PEAE@Z
    virtual long IsNewDataAvailableInCloud(int, HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@RemoteCloudStoreProxy@@UEAAJW4PartitionKind@Cloud@Storage@Internal@Windows@@PEAUHSTRING__@@111W4LoadOptions@3456@1PEAPEAUICloudStoreData@3456@@Z
    virtual long Load(int, HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, int, HSTRING__*, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@RemoteCloudStoreProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterSchema@RemoteCloudStoreProxy@@UEAAJPEAUIBuffer@Streams@Storage@Windows@@@Z
    virtual long RegisterSchema(WindissectOpaque *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@RemoteCloudStoreProxy@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@RemoteCloudStoreProxy@@UEAAJW4PartitionKind@Cloud@Storage@Internal@Windows@@PEAUHSTRING__@@111PEAUICloudStoreData@3456@_KPEAUIBuffer@Streams@46@W4SaveOptions@3456@1PEAPEAUICloudStoreSaveResult@3456@@Z
    virtual long Save(int, HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, WindissectOpaque *, uint64_t, WindissectOpaque *, int, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToJson@RemoteCloudStoreProxy@@UEAAJPEAUHSTRING__@@PEAUIBuffer@Streams@Storage@Windows@@PEAPEAUIJsonObject@Json@Data@6@@Z
    virtual long ToJson(HSTRING__*, WindissectOpaque *, ::Windows::Data::Json::IJsonObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToJsonText@RemoteCloudStoreProxy@@UEAAJPEAUHSTRING__@@PEAUIBuffer@Streams@Storage@Windows@@PEAPEAU2@@Z
    virtual long ToJsonText(HSTRING__*, WindissectOpaque *, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageFamilyName@RemoteCloudStoreProxy@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PackageFamilyName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_User@RemoteCloudStoreProxy@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_User(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WebAccount@RemoteCloudStoreProxy@@UEAAJPEAPEAUIWebAccount@Credentials@Security@Windows@@@Z
    virtual long get_WebAccount(::Windows::Security::Credentials::IWebAccount * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RemoteCloudStoreProxy@@UEAA@XZ
    virtual ~RemoteCloudStoreProxy();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureProxySecurity@RemoteCloudStoreProxy@@AEAAXPEAUIUnknown@@@Z
    void ConfigureProxySecurity(IUnknown *);
};
