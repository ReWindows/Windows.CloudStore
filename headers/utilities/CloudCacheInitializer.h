#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 34 member(s).
class CloudCacheInitializer {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CloudCacheInitializer@@QEAA@XZ
    CloudCacheInitializer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyRestorePartitionDataToBackupPartition@CloudCacheInitializer@@UEAAJPEAUHSTRING__@@00@Z
    virtual long CopyRestorePartitionDataToBackupPartition(HSTRING__*, HSTRING__*, HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTestRoot@CloudCacheInitializer@@UEAAJPEAW4CloudStoreTestHookMode@@@Z
    virtual long GetTestRoot(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MirrorSyncPolicies@CloudCacheInitializer@@UEAAJPEAUHSTRING__@@W4InitOperations@Broker@Cloud@Storage@Internal@Windows@@EPEAW4345678@@Z
    virtual long MirrorSyncPolicies(HSTRING__*, int, unsigned char, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreate@CloudCacheInitializer@@UEAAJPEBG0K@Z
    virtual long OnCreate(unsigned short const *, unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDelete@CloudCacheInitializer@@UEAAJPEBG0K@Z
    virtual long OnDelete(unsigned short const *, unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInternalNotify@CloudCacheInitializer@@UEAAJPEBG0K@Z
    virtual long OnInternalNotify(unsigned short const *, unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInternalPolicyInit@CloudCacheInitializer@@UEAAJPEBGEPEAE@Z
    virtual long OnInternalPolicyInit(unsigned short const *, unsigned char, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLoad@CloudCacheInitializer@@UEAAJPEBG0KH@Z
    virtual long OnLoad(unsigned short const *, unsigned short const *, unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMigrate@CloudCacheInitializer@@UEAAJPEBG00K@Z
    virtual long OnMigrate(unsigned short const *, unsigned short const *, unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnload@CloudCacheInitializer@@UEAAJPEBG0KH@Z
    virtual long OnUnload(unsigned short const *, unsigned short const *, unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUpgrade@CloudCacheInitializer@@UEAAJPEBG0K@Z
    virtual long OnUpgrade(unsigned short const *, unsigned short const *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTestFeatureVelocityKey@CloudCacheInitializer@@UEAAJH_N@Z
    virtual long SetTestFeatureVelocityKey(int, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTestHookCallback@CloudCacheInitializer@@UEAAJPEAUIInspectable@@@Z
    virtual long SetTestHookCallback(IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTestRoot@CloudCacheInitializer@@UEAAJW4CloudStoreTestHookMode@@@Z
    virtual long SetTestRoot(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupBackupRestorePartitions@CloudCacheInitializer@@UEAAJPEAUHSTRING__@@AEBVEffectiveUserContext@@0PEAPEAU2@2@Z
    virtual long SetupBackupRestorePartitions(HSTRING__*, EffectiveUserContext const &, HSTRING__*, HSTRING__* *, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldCallInitMethods@CloudCacheInitializer@@UEAAJPEBGPEAE@Z
    virtual long ShouldCallInitMethods(unsigned short const *, unsigned char *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CloudCacheInitializer@@UEAA@XZ
    virtual ~CloudCacheInitializer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddCapabilityAccessToCloudStoreDirectory@CloudCacheInitializer@@AEAAJK@Z
    long AddCapabilityAccessToCloudStoreDirectory(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddCapabilityAccessToObject@CloudCacheInitializer@@AEAAJPEBGW4_SE_OBJECT_TYPE@@0@Z
    long AddCapabilityAccessToObject(unsigned short const *, int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertRS3DataStoreIdToItemId@CloudCacheInitializer@@CA?AVCloudStoreItemId@Core@Cloud@Storage@Internal@Windows@@PEBG@Z
    static WindissectOpaque ConvertRS3DataStoreIdToItemId(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureAllSyncPoliciesMirrorSourcePolicy@CloudCacheInitializer@@AEAAJPEBDIPEBUPolicySyncData@@_NPEAE@Z
    long EnsureAllSyncPoliciesMirrorSourcePolicy(char const *, unsigned int, PolicySyncData const *, bool, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureCacheInitialized@CloudCacheInitializer@@AEAAJPEBGKW4CacheVersion@@@Z
    long EnsureCacheInitialized(unsigned short const *, unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureCapabilityAccessToCurrentUserRegistry@CloudCacheInitializer@@AEAAJPEBG00@Z
    long EnsureCapabilityAccessToCurrentUserRegistry(unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDefaultAccountRootUpgraded@CloudCacheInitializer@@AEAAJXZ
    long EnsureDefaultAccountRootUpgraded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureRegistryCapabilitySecurityDescriptorSet@CloudCacheInitializer@@AEAAJPEBGW4_SE_OBJECT_TYPE@@00_N@Z
    long EnsureRegistryCapabilitySecurityDescriptorSet(unsigned short const *, int, unsigned short const *, unsigned short const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureSysprepDataCleaned@CloudCacheInitializer@@CAJXZ
    static long EnsureSysprepDataCleaned();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureSystemPartitionIndex@CloudCacheInitializer@@CAJXZ
    static long EnsureSystemPartitionIndex();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExecuteNecessaryUpgrades@CloudCacheInitializer@@AEAAJW4CacheVersion@@0K@Z
    long ExecuteNecessaryUpgrades(int, int, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsServiceAccount@CloudCacheInitializer@@CAJPEBGPEA_N@Z
    static long IsServiceAccount(unsigned short const *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadRS3CacheBlob@CloudCacheInitializer@@CA?AV?$versioned@Vblob@bond@@@@PEAUHKEY__@@@Z
    static WindissectOpaque LoadRS3CacheBlob(HKEY__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpgrateToWin10RS4@CloudCacheInitializer@@CAJXZ
    static long UpgrateToWin10RS4();
};
