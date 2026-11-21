/* FUN_1800e4ad0 @ 1800e4ad0 */

void FUN_1800e4ad0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  code *pcVar2;
  undefined *puVar3;
  ulonglong *puVar4;
  undefined1 uVar5;
  undefined1 *local_60;
  undefined1 *local_58;
  ulonglong local_50;
  ulonglong *local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined1 local_2a;
  undefined1 local_29;
  undefined8 local_28;
  
  puVar3 = PTR_DAT_1802fd4e8;
  local_28 = 0xfffffffffffffffe;
  do {
    LOCK();
    lVar1 = *(longlong *)puVar3;
    *(longlong *)puVar3 = *(longlong *)puVar3 + 1;
    UNLOCK();
  } while (lVar1 == 0);
  local_29 = 1;
  local_40 = param_1;
  local_38 = param_2;
  puVar4 = (ulonglong *)FUN_18016c6f0();
  if ((char)puVar4[9] != '\x01') {
    if ((char)puVar4[9] == '\x02') {
      if ((code *)*local_38 != (code *)0x0) {
        (*(code *)*local_38)(local_40);
      }
      uVar5 = 1;
      if (local_38[1] != 0) {
        thunk_FUN_1801d3330(local_40,local_38[1],local_38[2]);
      }
      goto LAB_1800e4b58;
    }
    local_29 = 1;
    FUN_1801d8880(puVar4,FUN_1800754a0);
    *(undefined1 *)(puVar4 + 9) = 1;
  }
  local_50 = *puVar4;
  if (0x7ffffffffffffffe < local_50) {
    FUN_180201940(&PTR_s_C__Users_burne__cargo_registry_s_180215b28);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  *puVar4 = local_50 + 1;
  local_48 = puVar4;
  if (puVar4[1] != 2) {
    if ((puVar4[1] & 1) == 0) {
      FUN_180093930(puVar4 + 2,local_40,local_38,lVar1,
                    &PTR_s_C__Users_burne__cargo_registry_s_180211a40);
    }
    else {
      FUN_1800ab200(puVar4 + 2,local_40,local_38,lVar1,
                    &PTR_s_C__Users_burne__cargo_registry_s_180211ad8);
    }
    *local_48 = *local_48 - 1;
    return;
  }
  if ((code *)*local_38 != (code *)0x0) {
    (*(code *)*local_38)(local_40);
  }
  if (local_38[1] != 0) {
    thunk_FUN_1801d3330(local_40,local_38[1],local_38[2]);
  }
  *local_48 = *local_48 - 1;
  uVar5 = 0;
LAB_1800e4b58:
  local_60 = &local_2a;
  local_58 = &LAB_180179d00;
  local_2a = uVar5;
                    /* WARNING: Subroutine does not return */
  FUN_180201ee0(&DAT_180215ab0,&local_60,param_3);
}


