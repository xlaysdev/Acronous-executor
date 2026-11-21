/* FUN_1800f7080 @ 1800f7080 */

ulonglong *
FUN_1800f7080(ulonglong *param_1,undefined8 param_2,longlong param_3,ulonglong param_4,
             longlong param_5,ulonglong param_6,undefined1 param_7)

{
  ulonglong uVar1;
  undefined1 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong local_60;
  byte local_58;
  ulonglong local_50;
  ulonglong *local_48;
  
  lVar6 = param_5;
  uVar1 = param_6;
  uVar2 = param_7;
  FUN_1800f7400();
  if (local_58 == 0) {
    uVar2 = 0;
  }
  else {
    if (local_58 != 1) {
      uVar4 = local_50;
      local_48 = param_1;
      if (param_6 <= local_50) {
LAB_1800f7212:
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(uVar4,param_6,&PTR_s_C__Users_burne__cargo_registry_s_1802198e0);
      }
      *(undefined1 *)(param_5 + local_50) = 0xef;
      uVar3 = local_50 + 1;
      if (param_6 <= uVar3) {
LAB_1800f7233:
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(uVar3,param_6,&PTR_s_C__Users_burne__cargo_registry_s_1802198f8);
      }
      *(undefined1 *)(param_5 + 1 + local_50) = 0xbf;
      uVar3 = local_50 + 2;
      if (param_6 <= uVar3) {
LAB_1800f7224:
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(uVar3,param_6,&PTR_s_C__Users_burne__cargo_registry_s_180219910);
      }
      *(undefined1 *)(param_5 + uVar3) = 0xbd;
      uVar5 = local_60;
      if (local_60 <= param_4) {
        uVar3 = uVar1;
        do {
          uVar4 = uVar4 + 3;
          uVar1 = param_6 - uVar4;
          if (param_6 < uVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_180201a30(uVar4,param_6,param_6,&PTR_s_C__Users_burne__cargo_registry_s_180219928,
                          lVar6,uVar3,uVar2);
          }
          lVar6 = param_5 + uVar4;
          uVar2 = param_7;
          FUN_1800f7400(&local_60,param_2,param_3 + uVar5,param_4 - uVar5);
          uVar5 = uVar5 + local_60;
          uVar4 = uVar4 + local_50;
          if (local_58 < 2) {
            uVar2 = 1;
            local_50 = uVar4;
            param_1 = local_48;
            local_60 = uVar5;
            goto LAB_1800f71db;
          }
          if (param_6 <= uVar4) goto LAB_1800f7212;
          *(undefined1 *)(param_5 + uVar4) = 0xef;
          uVar3 = uVar4 + 1;
          if (param_6 <= uVar3) goto LAB_1800f7233;
          *(undefined1 *)(param_5 + 1 + uVar4) = 0xbf;
          uVar3 = uVar4 + 2;
          if (param_6 <= uVar3) goto LAB_1800f7224;
          *(undefined1 *)(param_5 + uVar3) = 0xbd;
          uVar3 = uVar1;
        } while (uVar5 <= param_4);
      }
                    /* WARNING: Subroutine does not return */
      FUN_180201a30(uVar5,param_4,param_4,&PTR_s_C__Users_burne__cargo_registry_s_180219940,lVar6,
                    uVar1,uVar2);
    }
    uVar2 = 0;
  }
LAB_1800f71db:
  *(byte *)(param_1 + 2) = local_58;
  *param_1 = local_60;
  param_1[1] = local_50;
  *(undefined1 *)((longlong)param_1 + 0x11) = uVar2;
  return param_1;
}


