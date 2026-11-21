/* FUN_180154ea0 @ 180154ea0 */

undefined2 *
FUN_180154ea0(undefined2 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             longlong param_5,longlong param_6)

{
  ulonglong uVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  ulonglong local_70;
  undefined **local_68;
  undefined *local_60;
  undefined *local_58;
  ulonglong **local_50;
  ulonglong *local_48;
  undefined1 *local_40;
  undefined8 local_38;
  undefined ***local_30;
  undefined8 local_28;
  undefined *local_20;
  
  if (*(char *)(param_5 + 0x13e) != '\0') {
    uVar1 = *(ulonglong *)(param_6 + 0x40);
    if (uVar1 <= *(ulonglong *)(param_6 + 0x48)) {
      if ((*(ulonglong *)PTR_DAT_1802fd448 < 4) &&
         (((uVar4 = (uint)DAT_1802fd0d0, uVar4 - 1 < 2 ||
           ((uVar4 != 0 && (uVar4 = FUN_1801faaf0(&PTR_DAT_1802fd0c0), (char)uVar4 != '\0')))) &&
          (cVar3 = FUN_1801601d0(PTR_DAT_1802fd0c0,uVar4), cVar3 != '\0')))) {
        local_20 = PTR_DAT_1802fd0c0 + 0x30;
        local_48 = &local_70;
        local_40 = &LAB_1800273d0;
        local_58 = &DAT_180258d88;
        local_50 = &local_48;
        local_68 = &local_58;
        local_60 = &DAT_180258dd0;
        local_38 = 1;
        local_30 = &local_68;
        local_28 = 1;
        local_70 = uVar1;
        FUN_180160ae0(PTR_DAT_1802fd0c0,&local_38);
      }
      *param_1 = 0x101;
      *(undefined4 *)(param_1 + 2) = 0xb;
      *(undefined ***)(param_1 + 4) = &PTR_LAB_180258e00;
      *(char **)(param_1 + 8) = "too_many_resets";
      *(undefined8 *)(param_1 + 0xc) = 0xf;
      *(undefined8 *)(param_1 + 0x10) = 0;
      return param_1;
    }
    *(ulonglong *)(param_6 + 0x48) = *(ulonglong *)(param_6 + 0x48) + 1;
  }
  FUN_180137d70(param_5 + 0x40,param_3,param_4,*(undefined1 *)(param_5 + 0x139));
  lVar2 = *(longlong *)(param_5 + 0x98);
  *(undefined8 *)(param_5 + 0x98) = 0;
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 8))(*(undefined8 *)(param_5 + 0xa0));
  }
  lVar2 = *(longlong *)(param_5 + 0xb0);
  *(undefined8 *)(param_5 + 0xb0) = 0;
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 8))(*(undefined8 *)(param_5 + 0xb8));
  }
  lVar2 = *(longlong *)(param_5 + 0xc0);
  *(undefined8 *)(param_5 + 0xc0) = 0;
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 8))(*(undefined8 *)(param_5 + 200));
  }
  *(undefined1 *)param_1 = 3;
  return param_1;
}


