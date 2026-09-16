#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 150 member(s).
namespace Windows::Internal::Storage::Cloud {
class CloudStore {
public:
    class DataForLog;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CloudStore@Cloud@Storage@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BatchSaveAsync@CloudStore@Cloud@Storage@Internal@Windows@@UEAAJW4PartitionKind@2345@PEAUHSTRING__@@11W4SaveOptions@2345@PEAU?$IVectorView@PEAVCloudStoreBatchSaveItemData@Cloud@Storage@Internal@Windows@@@Collections@Foundation@5@1PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVCloudStoreSaveResult@Cloud@Storage@Internal@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z
    virtual long BatchSaveAsync(int, HSTRING__*, HSTRING__*, HSTRING__*, int, WindissectOpaque *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloudStoreData_OldCreateInstance@CloudStore@Cloud@Storage@Internal@Windows@@QEAAJPEAUHSTRING__@@00PEAUIBuffer@Streams@35@_KPEAPEAUICloudStoreData@2345@@Z
    long CloudStoreData_OldCreateInstance(HSTRING__*, HSTRING__*, HSTRING__*, WindissectOpaque *, uint64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCollectionWatcher@CloudStore@Cloud@Storage@Internal@Windows@@UEAAJW4PartitionKind@2345@PEAUHSTRING__@@11W4LoadOptions@2345@W4CollectionOptions@2345@1PEAPEAUICloudStoreCollectionWatcher@2345@@Z
    virtual long CreateCollectionWatcher(int, HSTRING__*, HSTRING__*, HSTRING__*, int, int, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWatcher@CloudStore@Cloud@Storage@Internal@Windows@@UEAAJW4PartitionKind@2345@PEAUHSTRING__@@111W4CloudDataChangeKinds@2345@_K1PEAPEAUICloudStoreDataWatcher@2345@@Z
    virtual long CreateWatcher(int, HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, int, uint64_t, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@CloudStore@Cloud@Storage@Internal@Windows@@UEAAJW4PartitionKind@2345@PEAUHSTRING__@@111_K1PEAPEAUICloudStoreSaveResult@2345@@Z
    virtual long Delete(int, HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, uint64_t, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteAsync@CloudStore@Cloud@Storage@Internal@Windows@@UEAAJW4PartitionKind@2345@PEAUHSTRING__@@111_KW4SaveOptions@2345@11PEAPEAU?$IAsyncOperation@PEAVCloudStoreSaveResult@Cloud@Storage@Internal@Windows@@@Foundation@5@@Z
    virtual long DeleteAsync(int, HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, uint64_t, int, HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixAccount@CloudStore@Cloud@Storage@Internal@Windows@@UEAAJUWindowId@UI@5@PEAUHSTRING__@@@Z
    virtual long FixAccount(::Windows::UI::WindowId, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromJson@CloudStore@Cloud@Storage@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUIJsonObject@Json@Data@5@PEAPEAUIBuffer@Streams@35@@Z
    virtual long FromJson(HSTRING__*, ::Windows::Data::Json::IJsonObject *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromJsonTextToStorageFormat@CloudStore@Cloud@Storage@Internal@Windows@@UEAAJPEAUHSTRING__@@0_KW4DataDescriptionLanguage@2345@PEAPEAUIBuffer@Streams@35@@Z
    virtual long FromJsonTextToStorageFormat(HSTRING__*, HSTRING__*, uint64_t, int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackupStatus@CloudStore@Cloud@Storage@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAW4UploadStatus@2345@@Z
    virtual long GetBackupStatus(HSTRING__*, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCollectionItemNames@CloudStore@Cloud@Storage@Internal@Windows@@UEAAJW4PartitionKind@2345@PEAUHSTRING__@@11W4LoadOptions@2345@W4CollectionOptions@2345@1PEAPEAU?$IVectorView@PEAVCloudStoreItemName@Cloud@Storage@Internal@Windows@@@Collections@Foundation@5@@Z
    virtual long GetCollectionItemNames(int, HSTRING__*, HSTRING__*, HSTRING__*, int, int, HSTRING__*, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCollectionItemsAsync@CloudStore@Cloud@Storage@Internal@Windows@@UEAAJW4PartitionKind@2345@PEAUHSTRING__@@11W4LoadOptions@2345@W4CollectionOptions@2345@11PEAPEAU?$IAsyncOperation@PEAVGetCollectionItemsResult@Cloud@Storage@Internal@Windows@@@Foundation@5@@Z
    virtual long GetCollectionItemsAsync(int, HSTRING__*, HSTRING__*, HSTRING__*, int, int, HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveUserContext@CloudStore@Cloud@Storage@Internal@Windows@@UEAAAEBVEffectiveUserContext@@XZ
    virtual EffectiveUserContext const & GetEffectiveUserContext();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CloudStore@Cloud@Storage@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsCopyDataOnRestoreEnabled@CloudStore@Cloud@Storage@Internal@Windows@@UEAAJPEBDPEA_N@Z
    virtual long GetIsCopyDataOnRestoreEnabled(char const *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextVersion@CloudStore@Cloud@Storage@Internal@Windows@@UEAAJPEAUHSTRING__@@PEA_K@Z
    virtual long GetNextVersion(HSTRING__*, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextVersionAfterTime@CloudStore@Cloud@Storage@Internal@Windows@@UEAAJPEAUHSTRING__@@UDateTime@Foundation@5@PEA_K@Z
    virtual long GetNextVersionAfterTime(HSTRING__*, ::Windows::Foundation::DateTime, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CloudStore@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSchema@CloudStore@Cloud@Storage@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUICloudStoreSchema@2345@@Z
    virtual long GetSchema(HSTRING__*, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSchemaOfTypeName@CloudStore@Cloud@Storage@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIRefcountedSchema@@@Z
    virtual long GetSchemaOfTypeName(HSTRING__*, IRefcountedSchema * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTestRoot@CloudStore@Cloud@Storage@Internal@Windows@@UEAAJPEAW4CloudStoreTestHookMode@@@Z
    virtual long GetTestRoot(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CloudStore@Cloud@Storage@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVersion@CloudStore@Cloud@Storage@Internal@Windows@@UEAAJW4PartitionKind@2345@PEAUHSTRING__@@1111PEA_K@Z
    virtual long GetVersion(int, HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitalizeDevicePartitionsAndProfile@CloudStore@Cloud@Storage@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU6@1@Z
    virtual long InitalizeDevicePartitionsAndProfile(HSTRING__*, HSTRING__* *, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CloudStore@Cloud@Storage@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CloudStore@Cloud@Storage@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsNewDataAvailableInCloud@CloudStore@Cloud@Storage@Internal@Windows@@UEAAJW4PartitionKind@2345@PEAUHSTRING__@@1111PEAE@Z
    virtual long IsNewDataAvailableInCloud(int, HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CloudStore@Cloud@Storage@Internal@Windows@@UEAAJW4PartitionKind@2345@PEAUHSTRING__@@111W4LoadOptions@2345@1PEAPEAUICloudStoreData@2345@@Z
    virtual long Load(int, HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, int, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CloudStore@Cloud@Storage@Internal@Windows@@UEAAJPEAUHSTRING__@@W4LoadOptions@2345@0PEAPEAUIBuffer@Streams@35@@Z
    virtual long Load(HSTRING__*, int, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadAsync@CloudStore@Cloud@Storage@Internal@Windows@@UEAAJW4PartitionKind@2345@PEAUHSTRING__@@111W4LoadOptions@2345@11PEAPEAU?$IAsyncOperation@PEAVCloudStoreData@Cloud@Storage@Internal@Windows@@@Foundation@5@@Z
    virtual long LoadAsync(int, HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, int, HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadSchematizedData@CloudStore@Cloud@Storage@Internal@Windows@@UEAA?AVschematized_data@@W4PartitionKind@2345@PEAUHSTRING__@@11W4LoadOptions@2345@@Z
    virtual schematized_data LoadSchematizedData(int, HSTRING__*, HSTRING__*, HSTRING__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OldCreateWatcher@CloudStore@Cloud@Storage@Internal@Windows@@QEAAJW4PartitionKind@2345@PEAUHSTRING__@@11W4CloudDataChangeKinds@2345@_KPEAPEAUICloudStoreDataWatcher@2345@@Z
    long OldCreateWatcher(int, HSTRING__*, HSTRING__*, HSTRING__*, int, uint64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OldDelete@CloudStore@Cloud@Storage@Internal@Windows@@QEAAJW4PartitionKind@2345@PEAUHSTRING__@@11_KPEAPEAUICloudStoreSaveResult@2345@@Z
    long OldDelete(int, HSTRING__*, HSTRING__*, HSTRING__*, uint64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OldGetVersion@CloudStore@Cloud@Storage@Internal@Windows@@QEAAJW4PartitionKind@2345@PEAUHSTRING__@@11PEA_K@Z
    long OldGetVersion(int, HSTRING__*, HSTRING__*, HSTRING__*, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OldIsNewDataAvailableInCloud@CloudStore@Cloud@Storage@Internal@Windows@@QEAAJW4PartitionKind@2345@PEAUHSTRING__@@11PEAE@Z
    long OldIsNewDataAvailableInCloud(int, HSTRING__*, HSTRING__*, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OldLoad@CloudStore@Cloud@Storage@Internal@Windows@@QEAAJW4PartitionKind@2345@PEAUHSTRING__@@11W4LoadOptions@2345@PEAPEAUICloudStoreData@2345@@Z
    long OldLoad(int, HSTRING__*, HSTRING__*, HSTRING__*, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OldSave@CloudStore@Cloud@Storage@Internal@Windows@@QEAAJW4PartitionKind@2345@PEAUHSTRING__@@11W4SaveOptions@2345@_KPEAUIBuffer@Streams@35@34PEAPEAUICloudStoreSaveResult@2345@@Z
    long OldSave(int, HSTRING__*, HSTRING__*, HSTRING__*, int, uint64_t, WindissectOpaque *, uint64_t, WindissectOpaque *, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CloudStore@Cloud@Storage@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterSchema@CloudStore@Cloud@Storage@Internal@Windows@@UEAAJPEAUIBuffer@Streams@35@@Z
    virtual long RegisterSchema(WindissectOpaque *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CloudStore@Cloud@Storage@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@CloudStore@Cloud@Storage@Internal@Windows@@UEAAJPEAUIBuffer@Streams@35@PEAUHSTRING__@@PEAPEAU8@@Z
    virtual long Save(WindissectOpaque *, HSTRING__*, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@CloudStore@Cloud@Storage@Internal@Windows@@UEAAJW4PartitionKind@2345@PEAUHSTRING__@@111PEAUICloudStoreData@2345@_KPEAUIBuffer@Streams@35@W4SaveOptions@2345@1PEAPEAUICloudStoreSaveResult@2345@@Z
    virtual long Save(int, HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, WindissectOpaque *, uint64_t, WindissectOpaque *, int, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveAsync@CloudStore@Cloud@Storage@Internal@Windows@@UEAAJW4PartitionKind@2345@PEAUHSTRING__@@111PEAUICloudStoreData@2345@_KPEAUIBuffer@Streams@35@W4SaveOptions@2345@11PEAPEAU?$IAsyncOperation@PEAVCloudStoreSaveResult@Cloud@Storage@Internal@Windows@@@Foundation@5@@Z
    virtual long SaveAsync(int, HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, WindissectOpaque *, uint64_t, WindissectOpaque *, int, HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBackupPartitionAllowed@CloudStore@Cloud@Storage@Internal@Windows@@UEAAJ_N@Z
    virtual long SetBackupPartitionAllowed(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBackupProfileCreation@CloudStore@Cloud@Storage@Internal@Windows@@UEAAJ_N@Z
    virtual long SetBackupProfileCreation(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInitializationEnabled@CloudStore@Cloud@Storage@Internal@Windows@@UEAAJ_N@Z
    virtual long SetInitializationEnabled(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTestFeatureVelocityKey@CloudStore@Cloud@Storage@Internal@Windows@@UEAAJH_N@Z
    virtual long SetTestFeatureVelocityKey(int, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTestHookCallback@CloudStore@Cloud@Storage@Internal@Windows@@UEAAJPEAUIInspectable@@@Z
    virtual long SetTestHookCallback(IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTestRoot@CloudStore@Cloud@Storage@Internal@Windows@@UEAAJW4CloudStoreTestHookMode@@@Z
    virtual long SetTestRoot(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToJson@CloudStore@Cloud@Storage@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUIBuffer@Streams@35@PEAPEAUIJsonObject@Json@Data@5@@Z
    virtual long ToJson(HSTRING__*, WindissectOpaque *, ::Windows::Data::Json::IJsonObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageFamilyName@CloudStore@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PackageFamilyName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TypeServices@CloudStore@Cloud@Storage@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long get_TypeServices(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_User@CloudStore@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_User(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WebAccount@CloudStore@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUIWebAccount@Credentials@Security@5@@Z
    virtual long get_WebAccount(::Windows::Security::Credentials::IWebAccount * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CloudStore@Cloud@Storage@Internal@Windows@@UEAA@XZ
    virtual ~CloudStore();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToSystemPartitionIndexIfNeeded@CloudStore@Cloud@Storage@Internal@Windows@@AEAAXW4PartitionKind@2345@PEAUHSTRING__@@11_K@Z
    void AddToSystemPartitionIndexIfNeeded(int, HSTRING__*, HSTRING__*, HSTRING__*, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BatchSaveInternalAsync@CloudStore@Cloud@Storage@Internal@Windows@@AEAA?AU?$IAsyncOperation@U?$IVectorView@UCloudStoreSaveResult@Cloud@Storage@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@5winrt@@W4PartitionKind@23458@Uhstring@8@11W4SaveOptions@2345@U?$IVectorView@UCloudStoreBatchSaveItemData@Cloud@Storage@Internal@Windows@winrt@@@Collections@758@1@Z
    WindissectOpaque BatchSaveInternalAsync(int, WindissectOpaque, WindissectOpaque, WindissectOpaque, int, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloudStoreCoreCollectionOptionsFromCollectionOptions@CloudStore@Cloud@Storage@Internal@Windows@@CA?AW4CloudStoreCoreCollectionOptions@Core@2345@W4CollectionOptions@2345@@Z
    static int CloudStoreCoreCollectionOptionsFromCollectionOptions(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloudStoreCoreLoadOptionsFromLoadOptions@CloudStore@Cloud@Storage@Internal@Windows@@AEAA?BW4CloudStoreCoreLoadOptions@Core@2345@W4LoadOptions@2345@@Z
    int CloudStoreCoreLoadOptionsFromLoadOptions(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloudStoreCoreSaveOptionsFromSaveOptions@CloudStore@Cloud@Storage@Internal@Windows@@CA?AW4CloudStoreCoreSaveOptions@Core@2345@W4SaveOptions@2345@@Z
    static int CloudStoreCoreSaveOptionsFromSaveOptions(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCloudStoreCollectionId@CloudStore@Cloud@Storage@Internal@Windows@@AEAA?AVCloudStoreCollectionId@Core@2345@W4PartitionKind@2345@PEAUHSTRING__@@11W4LoadOptions@2345@AEBVCorrelationVector@72345@@Z
    WindissectOpaque CreateCloudStoreCollectionId(int, HSTRING__*, HSTRING__*, HSTRING__*, int, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCloudStoreItemId@CloudStore@Cloud@Storage@Internal@Windows@@AEAA?AVCloudStoreItemId@Core@2345@W4PartitionKind@2345@PEAUHSTRING__@@111W4LoadOptions@2345@AEBVCorrelationVector@72345@@Z
    WindissectOpaque CreateCloudStoreItemId(int, HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, int, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteInternalAsync@CloudStore@Cloud@Storage@Internal@Windows@@AEAA?AU?$IAsyncOperation@UCloudStoreSaveResult@Cloud@Storage@Internal@Windows@winrt@@@Foundation@5winrt@@W4PartitionKind@23458@Uhstring@8@111_KW4SaveOptions@2345@11@Z
    WindissectOpaque DeleteInternalAsync(int, WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque, uint64_t, int, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureCloudStorage@CloudStore@Cloud@Storage@Internal@Windows@@AEAAJXZ
    long EnsureCloudStorage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureCloudStoreCache@CloudStore@Cloud@Storage@Internal@Windows@@AEAAJXZ
    long EnsureCloudStoreCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureExplorerCloudCacheInvalidatorStarted@CloudStore@Cloud@Storage@Internal@Windows@@AEAAXXZ
    void EnsureExplorerCloudCacheInvalidatorStarted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureInitialized2@CloudStore@Cloud@Storage@Internal@Windows@@AEAAXW4InitOperations@Broker@2345@_NAEBVCorrelationVector@Core@2345@@Z
    void EnsureInitialized2(int, bool, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureTypeServices@CloudStore@Cloud@Storage@Internal@Windows@@AEAAJXZ
    long EnsureTypeServices();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FailFastIfInvalidCallingThread@CloudStore@Cloud@Storage@Internal@Windows@@CAXW4LoadOptions@2345@@Z
    static void FailFastIfInvalidCallingThread(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCachedDevicePartitions@CloudStore@Cloud@Storage@Internal@Windows@@AEAAAEBUDevicePartitions@Partitioning@Platform@Data@5@AEBVCorrelationVector@Core@2345@@Z
    ::Windows::Data::Platform::Partitioning::DevicePartitions const & GetCachedDevicePartitions(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClientWriteSource@CloudStore@Cloud@Storage@Internal@Windows@@AEAA?AW4ClientWriteSource@@AEBVRuntimeSchema@bond@@@Z
    int GetClientWriteSource(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCloudStoreCoreEntryFromCloudStoreData@CloudStore@Cloud@Storage@Internal@Windows@@CAAEBUEntry@CloudStoreCore@Core@2345@PEAUICloudStoreData@2345@@Z
    static WindissectOpaque const & GetCloudStoreCoreEntryFromCloudStoreData(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCollectionItemsInternalAsync@CloudStore@Cloud@Storage@Internal@Windows@@AEAA?AU?$IAsyncOperation@UGetCollectionItemsResult@Cloud@Storage@Internal@Windows@winrt@@@Foundation@5winrt@@W4PartitionKind@2345@Uhstring@8@111W4LoadOptions@2345@W4CollectionOptions@2345@1@Z
    WindissectOpaque GetCollectionItemsInternalAsync(int, WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque, int, int, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDataForLog@CloudStore@Cloud@Storage@Internal@Windows@@CA?AVDataForLog@12345@AEBV?$versioned@V?$tombstoned@Vschematized_data@@@@@@@Z
    static WindissectOpaque GetDataForLog(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDataForLog@CloudStore@Cloud@Storage@Internal@Windows@@CA?AVDataForLog@12345@PEAUICloudStoreData@2345@@Z
    static WindissectOpaque GetDataForLog(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDataStoreId@CloudStore@Cloud@Storage@Internal@Windows@@AEAAJW4PartitionKind@2345@PEAUHSTRING__@@11PEAPEAU7@@Z
    long GetDataStoreId(int, HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectivePartition@CloudStore@Cloud@Storage@Internal@Windows@@AEAAJW4PartitionKind@2345@PEAUHSTRING__@@_NPEAPEAU7@@Z
    long GetEffectivePartition(int, HSTRING__*, bool, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExtendedScopeType@CloudStore@Cloud@Storage@Internal@Windows@@AEAA?AW4ExtendedScopeType@12345@PEBG@Z
    int GetExtendedScopeType(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInvalidatorHostingModel@CloudStore@Cloud@Storage@Internal@Windows@@AEBA?AW4InvalidatorHostingModel@12345@XZ
    int GetInvalidatorHostingModel() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTestPartition@CloudStore@Cloud@Storage@Internal@Windows@@AEAAAEBUActivePartitions@Partitioning@Platform@Data@5@W4PartitionIdKind@PartitionIdKind@_bond_enumerators@7895@AEBVCorrelationVector@Core@2345@@Z
    ::Windows::Data::Platform::Partitioning::ActivePartitions const & GetTestPartition(int, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeServiceAttributesForId@CloudStore@Cloud@Storage@Internal@Windows@@AEAAJPEBGPEAUTypeAttributes@@@Z
    long GetTypeServiceAttributesForId(unsigned short const *, TypeAttributes *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserAccountType@CloudStore@Cloud@Storage@Internal@Windows@@AEAA?AW4UserAccountType@Common@2345@XZ
    int GetUserAccountType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleLoadOptionsAndGetDataStoreId@CloudStore@Cloud@Storage@Internal@Windows@@AEAAJW4PartitionKind@2345@PEAUHSTRING__@@11W4LoadOptions@2345@PEAPEAU7@@Z
    long HandleLoadOptionsAndGetDataStoreId(int, HSTRING__*, HSTRING__*, HSTRING__*, int, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HstringToWinrtHstring@CloudStore@Cloud@Storage@Internal@Windows@@CA?AUhstring@winrt@@PEAUHSTRING__@@@Z
    static WindissectOpaque HstringToWinrtHstring(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitalizeDevicePartitionsAndProfileInternal@CloudStore@Cloud@Storage@Internal@Windows@@AEAAJAEBVCorrelationVector@Core@2345@PEAPEAUHSTRING__@@1@Z
    long InitalizeDevicePartitionsAndProfileInternal(WindissectOpaque const &, HSTRING__* *, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLocalOnlyForTelemetry@CloudStore@Cloud@Storage@Internal@Windows@@CA_NAEBUEntry@CurrentCache@Core@2345@@Z
    static bool IsLocalOnlyForTelemetry(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadAndResolveInternal@CloudStore@Cloud@Storage@Internal@Windows@@AEAAJPEBGPEAUIBuffer@Streams@35@_K12PEAPEAU6735@PEA_K34@Z
    long LoadAndResolveInternal(unsigned short const *, WindissectOpaque *, uint64_t, WindissectOpaque *, uint64_t, WindissectOpaque * *, uint64_t *, WindissectOpaque * *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadInternal@CloudStore@Cloud@Storage@Internal@Windows@@AEAAJPEBGPEAPEAEPEAKPEA_K@Z
    long LoadInternal(unsigned short const *, unsigned char * *, unsigned long *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadInternalAsync@CloudStore@Cloud@Storage@Internal@Windows@@AEAA?AU?$IAsyncOperation@UCloudStoreData@Cloud@Storage@Internal@Windows@winrt@@@Foundation@5winrt@@W4PartitionKind@2345@Uhstring@8@1111W4LoadOptions@2345@1@Z
    WindissectOpaque LoadInternalAsync(int, WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque, int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFromSystemPartitionIndexIfNeeded@CloudStore@Cloud@Storage@Internal@Windows@@AEAAXW4PartitionKind@2345@PEAUHSTRING__@@11_K@Z
    void RemoveFromSystemPartitionIndexIfNeeded(int, HSTRING__*, HSTRING__*, HSTRING__*, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveInternalAsync@CloudStore@Cloud@Storage@Internal@Windows@@AEAA?AU?$IAsyncOperation@UCloudStoreSaveResult@Cloud@Storage@Internal@Windows@winrt@@@Foundation@5winrt@@W4PartitionKind@23458@Uhstring@8@111UICloudStoreData@23458@_KUIBuffer@Streams@358@W4SaveOptions@2345@11@Z
    WindissectOpaque SaveInternalAsync(int, WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque, uint64_t, WindissectOpaque, int, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldUseActivityFeedForSync@CloudStore@Cloud@Storage@Internal@Windows@@AEAA_NPEAUHSTRING__@@@Z
    bool ShouldUseActivityFeedForSync(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WinrtHstringToHstring@CloudStore@Cloud@Storage@Internal@Windows@@CAPEAUHSTRING__@@Uhstring@winrt@@@Z
    static HSTRING__* WinrtHstringToHstring(WindissectOpaque);
};
} // namespace Windows::Internal::Storage::Cloud
