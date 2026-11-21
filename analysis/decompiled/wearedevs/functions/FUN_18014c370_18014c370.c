/* FUN_18014c370 @ 18014c370 */

void FUN_18014c370(undefined8 *param_1,undefined8 param_2)

{
  char *pcVar1;
  char *local_8;
  
  pcVar1 = (char *)*param_1;
  if (*pcVar1 == '\0') {
    local_8 = pcVar1 + 1;
    FUN_1801f0210(param_2,"Reset",5,pcVar1 + 4,&DAT_180256540,pcVar1 + 8,&DAT_180256560,&local_8,
                  &DAT_180256580);
    return;
  }
  if (*pcVar1 == '\x01') {
    local_8 = pcVar1 + 1;
    FUN_1801f0210(param_2,"GoAway",6,pcVar1 + 8,&PTR_LAB_1802565a8,pcVar1 + 4,&DAT_180256560,
                  &local_8,&DAT_180256580);
    return;
  }
  local_8 = pcVar1 + 8;
  FUN_1801f0060(param_2,
                "IoNotFoundPermissionDeniedConnectionRefusedConnectionResetHostUnreachableNetworkUnreachableConnectionAbortedNotConnectedAddrInUseAddrNotAvailableNetworkDownBrokenPipeAlreadyExistsWouldBlockNotADirectoryIsADirectoryDirectoryNotEmptyReadOnlyFilesystemFilesystemLoopStaleNetworkFileHandleInvalidInputInvalidDataTimedOutWriteZeroStorageFullNotSeekableQuotaExceededFileTooLargeResourceBusyExecutableFileBusyDeadlockCrossesDevicesTooManyLinksInvalidFilenameArgumentListTooLongInterruptedUnsupportedUnexpectedEofOutOfMemoryInProgressOtherUncategorizedUserLibraryRemote"
                ,2,pcVar1 + 1,&DAT_1802565d0,&local_8,&DAT_1802565f0);
  return;
}


