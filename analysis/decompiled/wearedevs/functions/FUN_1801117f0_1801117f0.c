/* FUN_1801117f0 @ 1801117f0 */

undefined8 * FUN_1801117f0(undefined8 *param_1,uint *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  HANDLE hHeap;
  LPVOID pvVar3;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  LPVOID local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  if ((*param_2 & 0xfffffffe) == 2) {
    local_28 = *(LPVOID *)(param_2 + 2);
    pvVar3 = (LPVOID)0x2;
    if (local_28 == (LPVOID)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(ulonglong *)(param_2 + 4) >> 1;
      pvVar3 = local_28;
    }
    do {
      uVar2 = uVar1;
      if (uVar2 == 0) break;
      uVar1 = uVar2 - 1;
    } while (*(short *)((longlong)pvVar3 + (uVar2 - 1) * 2) == 0);
    FUN_1801ecf20(&local_40,pvVar3,uVar2);
    pvVar3 = local_28;
    if (SBORROW8(0,CONCAT44(uStack_3c,local_40))) {
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 2) = 0x80070459;
      *param_1 = 0x8000000000000000;
    }
    else {
      param_1[2] = local_30;
      *(undefined4 *)param_1 = local_40;
      *(undefined4 *)((longlong)param_1 + 4) = uStack_3c;
      *(undefined4 *)(param_1 + 1) = uStack_38;
      *(undefined4 *)((longlong)param_1 + 0xc) = uStack_34;
    }
  }
  else {
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0x8007000d;
    *param_1 = 0x8000000000000000;
    pvVar3 = *(LPVOID *)(param_2 + 2);
  }
  if (pvVar3 != (LPVOID)0x0) {
    hHeap = GetProcessHeap();
    HeapFree(hHeap,0,pvVar3);
  }
  return param_1;
}


