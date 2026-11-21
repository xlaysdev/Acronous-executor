/* FUN_180059b70 @ 180059b70 */

undefined8 FUN_180059b70(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  longlong local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (*(ulonglong *)(param_1 + 0x1a0) < 0x8000000000000002) {
    if (*(ulonglong *)(param_1 + 0x1a0) == 0x8000000000000001) {
      lVar3 = *(longlong *)(param_1 + 0x1a8);
      if (lVar3 != 0) {
        *(undefined8 *)(param_1 + 0x1a0) = 0x8000000000000005;
        uVar2 = FUN_1801157e0();
        FUN_180068870(uVar2,lVar3);
        return uVar2;
      }
      uVar5 = (ulonglong)*(byte *)(param_1 + 0x1b8) | 0x8000000000000004;
    }
    else {
      local_a0 = 3;
      local_98 = "0\r\n\r\n";
      local_90 = 5;
      FUN_1800693c0(param_1 + 0x10,&local_a0);
      lVar3 = *(longlong *)(param_1 + 0x1a0);
      uVar5 = (ulonglong)*(byte *)(param_1 + 0x1b8) | 0x8000000000000004;
      if (-1 < lVar3) {
        lVar1 = *(longlong *)(param_1 + 0x1b0);
        if (lVar1 != 0) {
          local_48 = *(longlong *)(param_1 + 0x1a8);
          puVar4 = (undefined8 *)(local_48 + 0x18);
          lVar3 = 1;
          local_50 = lVar1;
          local_38 = uVar5;
          local_30 = param_1;
          do {
            local_40 = lVar3;
            if (puVar4[-3] != 0) {
              (**(code **)(puVar4[-3] + 0x20))(*puVar4,puVar4[-2],puVar4[-1]);
            }
            lVar3 = local_40 + 1;
            puVar4 = puVar4 + 4;
          } while (local_40 != lVar1);
          lVar3 = *(longlong *)(local_30 + 0x1a0);
          param_1 = local_30;
          uVar5 = local_38;
        }
        if (lVar3 != 0) {
          thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x1a8),lVar3 << 5,8);
        }
      }
    }
    *(ulonglong *)(param_1 + 0x1a0) = uVar5;
  }
  return 0;
}


