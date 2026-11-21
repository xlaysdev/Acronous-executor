/* FUN_1801779a0 @ 1801779a0 */

void FUN_1801779a0(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 local_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0xb8) != '\x01') {
    if (*(char *)(lVar2 + 0xb8) == '\x02') {
      local_38 = 0;
      goto LAB_180177a18;
    }
    FUN_1801d8880(lVar2 + 0x70,FUN_18016d130);
    *(undefined1 *)(lVar2 + 0xb8) = 1;
  }
  local_38 = *(undefined8 *)(lVar2 + 0xa0);
  *(undefined8 *)(lVar2 + 0xa0) = uVar1;
LAB_180177a18:
  FUN_180177370((undefined4 *)(param_1 + 0x18));
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = param_2[5];
  uVar8 = param_2[6];
  uVar9 = param_2[7];
  *(undefined4 *)(param_1 + 0x28) = param_2[4];
  *(undefined4 *)(param_1 + 0x2c) = uVar7;
  *(undefined4 *)(param_1 + 0x30) = uVar8;
  *(undefined4 *)(param_1 + 0x34) = uVar9;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  *(undefined4 *)(param_1 + 0x1c) = uVar4;
  *(undefined4 *)(param_1 + 0x20) = uVar5;
  *(undefined4 *)(param_1 + 0x24) = uVar6;
  if (*(char *)(lVar2 + 0xb8) != '\x01') {
    if (*(char *)(lVar2 + 0xb8) == '\x02') {
      return;
    }
    FUN_1801d8880(lVar2 + 0x70,FUN_18016d130);
    *(undefined1 *)(lVar2 + 0xb8) = 1;
  }
  *(undefined8 *)(lVar2 + 0xa0) = local_38;
  return;
}


