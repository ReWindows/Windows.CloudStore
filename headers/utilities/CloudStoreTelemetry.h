#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 8 member(s).
namespace Windows::Internal::Storage::Cloud {
class CloudStoreTelemetry {
public:
    class AddActivePartitionChanged;
    class AddDataChangedActivity;
    class BatchSaveAsyncActivity;
    class CopyEarlyDownloadRestoreDataToBackupPartition;
    class CreatePartition;
    class CreateWatcherActivity;
    class DeleteActivity;
    class DeleteAsyncActivity;
    class DeletePartition;
    class DownloadUnitAsync;
    class FullPolicyMirrorer;
    class GetActivePartition;
    class GetBackupCoreStatus;
    class GetCollectionItemNamesActivity;
    class GetCollectionItemsAsyncActivity;
    class InitalizeDevicePartitionsAndProfileActivity;
    class LoadActivity;
    class LoadAssetActivity;
    class LoadAsyncActivity;
    class LoadBulkActivity;
    class MakeAfcCallActivity;
    class ProcessResponseAsync;
    class PutActivePartition;
    class RemoveActivePartitionChanged;
    class RemoveDataChangedActivity;
    class RetrySaveActivity;
    class SaveActivity;
    class SaveAssetActivity;
    class SaveAsyncActivity;
    class SaveBulkActivity;
    class SendRequestAsync;
    class SendRequestAsyncWstr;
};
} // namespace Windows::Internal::Storage::Cloud
