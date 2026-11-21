/* FUN_18018ec50 @ 18018ec50 */

/* WARNING: Removing unreachable block (ram,0x00018018ece7) */
/* WARNING: Removing unreachable block (ram,0x00018018ed07) */
/* WARNING: Removing unreachable block (ram,0x00018018ed0d) */
/* WARNING: Removing unreachable block (ram,0x00018018ed1e) */
/* WARNING: Removing unreachable block (ram,0x00018018ed27) */

void FUN_18018ec50(longlong param_1)

{
  int iVar1;
  undefined4 local_40 [2];
  undefined8 local_38;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (*(char *)(param_1 + 0x58) != '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x59) == '\x01') {
    if (*(int *)(param_1 + 0x10) == 0x103) {
      local_40[0] = 0;
      local_38 = 0;
      iVar1 = NtCancelIoFileEx(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10),param_1 + 0x10,
                               local_40);
      if ((iVar1 != 0) && (iVar1 != -0x3ffffddb)) {
        RtlNtStatusToDosError(iVar1);
        goto LAB_18018ecc2;
      }
    }
    *(undefined1 *)(param_1 + 0x59) = 2;
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
LAB_18018ecc2:
  *(undefined1 *)(param_1 + 0x58) = 1;
  return;
}


