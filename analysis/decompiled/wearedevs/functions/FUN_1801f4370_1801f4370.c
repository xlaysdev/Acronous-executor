/* FUN_1801f4370 @ 1801f4370 */

undefined8 FUN_1801f4370(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 local_58;
  ulonglong local_50;
  undefined8 *local_48;
  undefined1 *local_40;
  undefined8 *local_38;
  code *local_30;
  
  if (*(int *)*param_1 == 1) {
    local_58 = *(undefined8 *)((int *)*param_1 + 2);
    local_48 = (undefined8 *)param_1[1];
    local_38 = &local_58;
    local_30 = FUN_1801ee720;
    uVar5 = *param_2;
    uVar4 = param_2[1];
    puVar6 = &DAT_1802945a8;
  }
  else {
    local_48 = (undefined8 *)param_1[1];
    uVar5 = *param_2;
    uVar4 = param_2[1];
    puVar6 = &DAT_1802945ab;
  }
  local_40 = &LAB_1801eddf0;
  cVar1 = FUN_1801ef150(uVar5,uVar4,puVar6,&local_48);
  uVar3 = 1;
  if (cVar1 == '\0') {
    uVar2 = *(ulonglong *)param_1[2];
    if (uVar2 != 0) {
      if (9 < uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_180201a30(0,uVar2,9,&PTR_s_library_core_src_time_rs_180294608);
      }
      local_58 = param_1[3];
      local_50 = uVar2;
      if ((*(byte *)((longlong)param_2 + 0x13) & 0x10) == 0) {
        uVar2 = *(ulonglong *)param_1[4];
        if (0xffff < uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_180201ee0("Formatting argument out of range",0x41,
                        &PTR_s_library_core_src_time_rs_1802945f0);
        }
      }
      else {
        uVar2 = (ulonglong)*(ushort *)((longlong)param_2 + 0x16);
      }
      local_48 = &local_58;
      local_40 = &LAB_1801eddf0;
      local_38 = (undefined8 *)0x0;
      local_30 = (code *)CONCAT62(local_30._2_6_,(short)uVar2);
      cVar1 = FUN_1801ef150(uVar5,uVar4,&DAT_1802945c2,&local_48);
      if (cVar1 != '\0') {
        return 1;
      }
    }
    local_48 = (undefined8 *)param_1[5];
    local_40 = &LAB_1801eddf0;
    uVar3 = FUN_1801ef150(uVar5,uVar4,&DAT_1802934cf,&local_48);
  }
  return uVar3;
}


