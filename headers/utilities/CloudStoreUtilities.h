#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 23 member(s).
class CloudStoreUtilities {
public:
    class FlatBufferAttrList;
    class FlatBufferServiceImpl;
    class StorageTestHook;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertFromUnixTimeVersion@CloudStoreUtilities@@YA_KAEB_J@Z
    uint64_t ConvertFromUnixTimeVersion(int64_t const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertToUnixTimeVersion@CloudStoreUtilities@@YA_JAEB_K@Z
    int64_t ConvertToUnixTimeVersion(uint64_t const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureExtendedCorrelationVector@CloudStoreUtilities@@YA?AVCorrelationVector@Core@Cloud@Storage@Internal@Windows@@PEAUHSTRING__@@@Z
    WindissectOpaque EnsureExtendedCorrelationVector(HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBufferSizeForTelemetry@CloudStoreUtilities@@YAIPEAUIBuffer@Streams@Storage@Windows@@@Z
    unsigned int GetBufferSizeForTelemetry(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFileStorageLocalAppDataRootPathWithLongPath@CloudStoreUtilities@@YAJPEBGPEAPEAG@Z
    long GetFileStorageLocalAppDataRootPathWithLongPath(unsigned short const *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFileStorageRootPath@CloudStoreUtilities@@YAJPEBG0PEAPEAG@Z
    long GetFileStorageRootPath(unsigned short const *, unsigned short const *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFileStorageRootPathLongPath@CloudStoreUtilities@@YAJ_NPEBG1PEAPEAG@Z
    long GetFileStorageRootPathLongPath(bool, unsigned short const *, unsigned short const *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFileSystemLocalAppDataRootFolderWithLongPath@CloudStoreUtilities@@YAJPEBGPEAGK@Z
    long GetFileSystemLocalAppDataRootFolderWithLongPath(unsigned short const *, unsigned short *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFileSystemRootFolder@CloudStoreUtilities@@YAJPEBGPEAGK@Z
    long GetFileSystemRootFolder(unsigned short const *, unsigned short *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFileSystemRootFolderLongPath@CloudStoreUtilities@@YAJ_NPEBGPEAGK@Z
    long GetFileSystemRootFolderLongPath(bool, unsigned short const *, unsigned short *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageRootFolder@CloudStoreUtilities@@YAJPEBG0PEAGK@Z
    long GetPackageRootFolder(unsigned short const *, unsigned short const *, unsigned short *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRegistryRootKey@CloudStoreUtilities@@YAJPEBG0PEAPEAUHKEY__@@@Z
    long GetRegistryRootKey(unsigned short const *, unsigned short const *, HKEY__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootFromAttribute@CloudStoreUtilities@@YAJAEBVEffectiveWebAccountContext@@W4ScopeValue@@W4TRIBIT@@PEAPEAG@Z
    long GetRootFromAttribute(EffectiveWebAccountContext const &, int, int, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsActivityTombstoned@CloudStoreUtilities@@YA_NPEAVICDPActivity@@@Z
    bool IsActivityTombstoned(ICDPActivity *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRoamingProfile@CloudStoreUtilities@@YA_NXZ
    bool IsRoamingProfile();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSystemAccount@CloudStoreUtilities@@YA_NPEAX_N@Z
    bool IsSystemAccount(void *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSystemAccountSid@CloudStoreUtilities@@YA_NPEAX_N@Z
    bool IsSystemAccountSid(void *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseAppActivityId@CloudStoreUtilities@@YA?AVCloudStoreItemId@Core@Cloud@Storage@Internal@Windows@@PEBD@Z
    WindissectOpaque ParseAppActivityId(char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThrowCError@CloudStoreUtilities@@YAXH@Z
    void ThrowCError(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThrowIfCError@CloudStoreUtilities@@YAXH@Z
    void ThrowIfCError(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnmarshalToRuntimeSchema@CloudStoreUtilities@@YA?AVRuntimeSchema@bond@@PEBEI@Z
    WindissectOpaque UnmarshalToRuntimeSchema(unsigned char const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateAndParseActivity@CloudStoreUtilities@@YA?AVCloudStoreItemId@Core@Cloud@Storage@Internal@Windows@@PEAVICDPActivity@@@Z
    WindissectOpaque ValidateAndParseActivity(ICDPActivity *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyStoreAccessPermissions@CloudStoreUtilities@@YAJXZ
    long VerifyStoreAccessPermissions();
};
