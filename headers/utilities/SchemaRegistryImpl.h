#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 16 member(s).
class SchemaRegistryImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@SchemaRegistryImpl@@QEAAXPEBEK@Z
    void Register(unsigned char const *, unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SchemaRegistryImpl@@UEAA@XZ
    virtual ~SchemaRegistryImpl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTypesFromFBProvider@SchemaRegistryImpl@@AEAAXPEAUICloudStoreSchemaProvider@@@Z
    void AddTypesFromFBProvider(ICloudStoreSchemaProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTypesFromFBSchemaProviderExtensions@SchemaRegistryImpl@@AEAAXPEAUHKEY__@@@Z
    void AddTypesFromFBSchemaProviderExtensions(HKEY__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTypesFromProvider@SchemaRegistryImpl@@AEAAXPEAUICloudStoreSchemaProvider@@@Z
    void AddTypesFromProvider(ICloudStoreSchemaProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTypesFromSchemaProviderExtensions@SchemaRegistryImpl@@AEAAXPEAUHKEY__@@@Z
    void AddTypesFromSchemaProviderExtensions(HKEY__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureFBTypesLoaded@SchemaRegistryImpl@@AEAAXXZ
    void EnsureFBTypesLoaded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureRuntimeSchemaWatcher@SchemaRegistryImpl@@AEAAJXZ
    long EnsureRuntimeSchemaWatcher();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureTypesLoaded@SchemaRegistryImpl@@AEAAXXZ
    void EnsureTypesLoaded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateIfNeededDueToAppExtension@SchemaRegistryImpl@@AEAAXXZ
    void InvalidateIfNeededDueToAppExtension();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateIfNeededDueToTestHook@SchemaRegistryImpl@@AEAAXXZ
    void InvalidateIfNeededDueToTestHook();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@SchemaRegistryImpl@@AEAAXXZ
    void Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryLoadSchemaForFlatBufferType@SchemaRegistryImpl@@AEAAPEBEPEBGPEAUICloudStoreSchemaProvider@@@Z
    unsigned char const * TryLoadSchemaForFlatBufferType(unsigned short const *, ICloudStoreSchemaProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryLoadSchemaForType@SchemaRegistryImpl@@AEAAPEBVRuntimeSchema@bond@@PEBGPEAUICloudStoreSchemaProvider@@@Z
    WindissectOpaque const * TryLoadSchemaForType(unsigned short const *, ICloudStoreSchemaProvider *);
};
