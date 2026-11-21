/* FUN_1801e1204 @ 1801e1204 */

/* WARNING: Removing unreachable block (ram,0x0001801e1259) */

void FUN_1801e1204(ulonglong param_1,longlong param_2,undefined8 param_3,char param_4,
                  undefined1 param_5)

{
  code *pcVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *local_88;
  code *local_80;
  ulonglong *local_78;
  undefined8 local_70;
  ulonglong local_68;
  longlong local_60;
  undefined4 local_58;
  undefined1 local_54;
  undefined8 local_50;
  ulonglong local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  lVar5 = param_2;
  local_48 = param_1;
  local_40 = param_2;
  local_38 = param_3;
  bVar2 = FUN_1801e0ca0(1);
  if (bVar2 != 2) {
    if ((bVar2 & 1) == 0) {
      local_50._0_4_ = 0;
      local_50._4_1_ = 0;
      local_88 = &local_38;
      local_80 = FUN_1801e1600;
      local_78 = &local_48;
      local_70 = &LAB_1801e2cc0;
      uVar3 = FUN_1801d62f0(&local_50,&DAT_1802908ac);
      puVar4 = &local_68;
    }
    else {
      uVar3 = (**(code **)(param_2 + 0x30))(param_1);
      local_68 = 1;
      if (uVar3 == 0) {
        lVar5 = 0;
      }
      else {
        local_68 = uVar3;
      }
      local_78 = &local_68;
      local_58 = 0;
      local_54 = 0;
      local_88 = &local_38;
      local_80 = FUN_1801e1600;
      local_70 = &LAB_1801e1670;
      local_60 = lVar5;
      uVar3 = FUN_1801d62f0(&local_58,&DAT_1802908ce);
      puVar4 = &local_50;
    }
    *puVar4 = uVar3;
    FUN_1801e2b90();
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(7);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (0x3ffffffd < DAT_1802fd840) goto LAB_1801e131a;
  DAT_1802fd840 = DAT_1802fd840 + 1;
  LOCK();
  UNLOCK();
  lVar6 = lVar5;
  while( true ) {
    lVar5 = local_40;
    uVar3 = local_48;
    if (DAT_1802fd848 == 0) {
      local_88 = (undefined8 *)(**(code **)(local_40 + 0x28))(local_48);
      local_78 = (ulonglong *)local_38;
      local_70._0_2_ = CONCAT11(param_5,param_4);
      local_80 = (code *)lVar6;
      FUN_1801e0cdb();
    }
    else {
      local_88 = (undefined8 *)(**(code **)(local_40 + 0x28))(local_48);
      local_78 = (ulonglong *)local_38;
      local_70._0_2_ = CONCAT11(param_5,param_4);
      local_80 = (code *)lVar6;
      (**(code **)(DAT_1802fd850 + 0x28))(DAT_1802fd848,&local_88);
    }
    FUN_1801e2c50(&DAT_1802fd840);
    *(undefined1 *)
     (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x150) = 0;
    if (param_4 == '\0') break;
    FUN_1801d3270(uVar3);
LAB_1801e131a:
    FUN_180200460(&DAT_1802fd840);
    lVar6 = lVar5;
  }
  local_68 = local_68 & 0xffffff0000000000;
  local_88 = (undefined8 *)
             FUN_1801d62f0(&local_68,"thread caused non-unwinding panic. aborting.\n()",0x5b);
  FUN_1801e2b90();
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(7);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


