#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 3 member(s).
namespace CloudStoreUtilities {
class StorageTestHook {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@StorageTestHook@CloudStoreUtilities@@YA?AW4CloudStoreTestHookMode@@XZ
    int GetValue();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabled@StorageTestHook@CloudStoreUtilities@@YA_NXZ
    bool IsEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@StorageTestHook@CloudStoreUtilities@@YAXW4CloudStoreTestHookMode@@@Z
    void SetValue(int);
};
} // namespace CloudStoreUtilities
