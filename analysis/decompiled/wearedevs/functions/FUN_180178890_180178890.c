/* FUN_180178890 @ 180178890 */

ulonglong * FUN_180178890(ulonglong *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = FUN_1801df8c0();
  uVar2 = FUN_1801e5a10(uVar1);
  uVar5 = param_2;
  uVar3 = FUN_1801798a0(&PTR_s_C__Users_burne__cargo_registry_s_180263940);
  lVar4 = uVar5 + 0x220;
  if ((uVar3 & 1) != 0) {
    lVar4 = uVar5 + 0x160;
  }
  if (*(int *)(lVar4 + 0x98) == 1000000000) {
                    /* WARNING: Subroutine does not return */
    FUN_180201b60("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
                  ,0x73,&PTR_s_C__Users_burne__cargo_registry_s_180263940);
  }
  param_1[0xc] = uVar2;
  *(int *)(param_1 + 0xd) = (int)param_2;
  *param_1 = uVar3;
  param_1[1] = uVar5;
  param_1[2] = 2;
  return param_1;
}


