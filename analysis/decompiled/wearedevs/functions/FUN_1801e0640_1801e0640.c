/* FUN_1801e0640 @ 1801e0640 */

void FUN_1801e0640(undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 *local_40;
  longlong local_38;
  longlong *local_30;
  undefined1 local_22;
  undefined1 local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar2 = param_1[3];
  local_58 = (undefined8 *)0x1;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  puVar5 = (undefined8 *)(lVar3 + 0x138);
  cVar1 = *(char *)(lVar3 + 0x140);
  local_50 = (undefined8 *)uVar2;
  if (cVar1 != '\x01') {
    if (cVar1 == '\x02') {
      local_21 = 1;
                    /* WARNING: Subroutine does not return */
      FUN_1802008b0(&PTR_s_library_std_src_thread_local_rs_180290498);
    }
    local_21 = 1;
    FUN_1801ffe20(puVar5);
  }
  local_30 = (longlong *)*puVar5;
  *puVar5 = uVar2;
  FUN_1801e4d70(&local_30);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *local_30 = *local_30 + -1;
    UNLOCK();
    if (*local_30 == 0) {
      local_21 = 0;
      FUN_1801e38e0(&local_30);
    }
  }
  local_48 = *param_1;
  puVar5 = (undefined8 *)param_1[1];
  puVar6 = puVar5 + param_1[2] * 2;
  local_58 = puVar5;
  local_40 = puVar6;
  if (param_1[2] != 0) {
    do {
      puVar4 = puVar5 + 2;
      uVar2 = *puVar5;
      local_38 = puVar5[1];
      (**(code **)(local_38 + 0x18))();
      if (*(longlong *)(local_38 + 8) != 0) {
        thunk_FUN_1801d3330(uVar2,*(longlong *)(local_38 + 8),*(undefined8 *)(local_38 + 0x10));
      }
      puVar5 = puVar4;
    } while (puVar4 != puVar6);
    puVar5 = puVar6;
  }
  local_22 = 0;
  local_50 = puVar5;
  FUN_1801e2280(&local_58);
  return;
}


