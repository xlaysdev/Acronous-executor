/* FUN_18012ae10 @ 18012ae10 */

undefined4 *
FUN_18012ae10(undefined4 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong local_88;
  undefined8 local_80;
  ulonglong local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  FUN_1801271c0(&local_88,param_3,param_4,param_2);
  if ((local_88 == 2) || ((local_88 & 1) == 0)) {
    *(undefined1 *)(param_1 + 8) = 2;
  }
  else {
    if (*(ulonglong *)(param_2 + 0x28) <= local_78) {
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(local_78,*(ulonglong *)(param_2 + 0x28),
                    &PTR_s_C__Users_burne__cargo_registry_s_180242eb0);
    }
    if (*(char *)(*(longlong *)(param_2 + 0x20) + local_78 * 0x68) != '\0') {
      FUN_18012a0e0(param_2,*(undefined8 *)(*(longlong *)(param_2 + 0x20) + local_78 * 0x68 + 8));
    }
    FUN_180129850(&local_88,param_2,local_80,local_78);
    *(undefined8 *)(param_1 + 8) = local_50;
    param_1[4] = local_60;
    param_1[5] = uStack_5c;
    param_1[6] = uStack_58;
    param_1[7] = uStack_54;
    *param_1 = local_70;
    param_1[1] = uStack_6c;
    param_1[2] = uStack_68;
    param_1[3] = uStack_64;
    if (local_48 != 0) {
      (**(code **)(local_48 + 0x20))(local_30,local_40,local_38);
    }
  }
  return param_1;
}


