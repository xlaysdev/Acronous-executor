/* FUN_1800a9b50 @ 1800a9b50 */

void * FUN_1800a9b50(void *param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined1 local_368 [256];
  undefined1 local_268 [256];
  undefined8 local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined1 local_150 [256];
  longlong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_1800aa290(local_150);
  if (local_50 == 4) {
    lVar5 = *(longlong *)(param_2 + 8);
    LOCK();
    uVar2 = *(undefined8 *)(lVar5 + 0x10);
    *(undefined8 *)(lVar5 + 0x10) = 1;
    UNLOCK();
    cVar4 = FUN_18012c0f0(uVar2);
    if (cVar4 == '\x02') {
      do {
        LOCK();
        cVar4 = *(char *)(lVar5 + 0x28);
        *(char *)(lVar5 + 0x28) = '\x01';
        UNLOCK();
      } while (cVar4 != '\0');
      lVar3 = *(longlong *)(lVar5 + 0x18);
      *(undefined8 *)(lVar5 + 0x18) = 0;
      LOCK();
      uVar1 = *(undefined1 *)(lVar5 + 0x28);
      *(undefined1 *)(lVar5 + 0x28) = 0;
      UNLOCK();
      if (lVar3 != 0) {
        (**(code **)(lVar3 + 8))(*(undefined8 *)(lVar5 + 0x20),uVar1);
      }
    }
    *(undefined8 *)((longlong)param_1 + 0x100) = 3;
  }
  else {
    lVar5 = 2;
    if ((int)local_50 != 3) {
      memcpy(local_268,local_150,0x100);
      local_160 = local_48;
      uStack_15c = uStack_44;
      uStack_158 = uStack_40;
      uStack_154 = uStack_3c;
      local_168 = 2;
      if ((int)local_50 == 2) {
                    /* WARNING: Subroutine does not return */
        FUN_180201b60("envelope not dropped",0x14,&DAT_1802104e0);
      }
      memcpy(local_368,local_150,0x100);
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      FUN_1800a5ed0(local_268);
      lVar5 = local_50;
    }
    memcpy(param_1,local_368,0x100);
    *(longlong *)((longlong)param_1 + 0x100) = lVar5;
    *(ulonglong *)((longlong)param_1 + 0x108) = CONCAT44(uStack_34,local_38);
    *(ulonglong *)((longlong)param_1 + 0x110) = CONCAT44(uStack_2c,uStack_30);
  }
  return param_1;
}


